#ifndef org_orekit_estimation_measurements_filtering_SingleFrequencyHatchFilter_H
#define org_orekit_estimation_measurements_filtering_SingleFrequencyHatchFilter_H

#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationData;
        }
      }
    }
    namespace gnss {
      class MeasurementType;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          class SingleFrequencyHatchFilter : public ::org::orekit::estimation::measurements::filtering::HatchFilter {
           public:
            enum {
              mid_init$_d015ddafa5420cad,
              mid_filterData_274c8bdbc6f49717,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SingleFrequencyHatchFilter(jobject obj) : ::org::orekit::estimation::measurements::filtering::HatchFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SingleFrequencyHatchFilter(const SingleFrequencyHatchFilter& obj) : ::org::orekit::estimation::measurements::filtering::HatchFilter(obj) {}

            SingleFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::gnss::MeasurementType &, jdouble, jdouble, jint, jdouble);

            ::org::orekit::files::rinex::observation::ObservationData filterData(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          extern PyType_Def PY_TYPE_DEF(SingleFrequencyHatchFilter);
          extern PyTypeObject *PY_TYPE(SingleFrequencyHatchFilter);

          class t_SingleFrequencyHatchFilter {
          public:
            PyObject_HEAD
            SingleFrequencyHatchFilter object;
            static PyObject *wrap_Object(const SingleFrequencyHatchFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
