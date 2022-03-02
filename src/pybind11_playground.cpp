#include <pybind11/pybind11.h>

extern "C" {
#include <stdlib.h>
}

namespace py = pybind11;
using namespace pybind11::literals;

class toyclass{
public:
    void sleep(int duration){
        ::sleep(duration);
    }
};

PYBIND11_MODULE(pybind11_playground, m){
    py::class_<toyclass, std::shared_ptr<toyclass> >(m, "toyclass")
    .def(py::init<>())
    .def("sleep", &toyclass::sleep,
     "duration"_a
    )
    ;
}
