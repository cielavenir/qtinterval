#include <private/qabstractanimation_p.h>
#include <pybind11/pybind11.h>

namespace py = pybind11;
using namespace pybind11::literals;

namespace qtintervalpy {
	void SetTimingInterval(int interval){
		QUnifiedTimer::instance()->setTimingInterval(interval);
	}
}

PYBIND11_MODULE(qtinterval, m){
    m.def("SetTimingInterval",qtintervalpy::SetTimingInterval, py::arg("interval"));
}
