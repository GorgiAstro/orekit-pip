#ifndef org_orekit_estimation_measurements_filtering_DualFrequencyHatchFilter_H
#define org_orekit_estimation_measurements_filtering_DualFrequencyHatchFilter_H

#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"

namespace java {
  namespace util {
    class ArrayList;
  }
  namespace lang {
    class Class;
    class Double;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationData;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          class DualFrequencyHatchFilter : public ::org::orekit::estimation::measurements::filtering::HatchFilter {
           public:
            enum {
              mid_init$_97f95739029128c6,
              mid_filterData_cd95911c206f8ad1,
              mid_getFirstFrequencyPhaseHistory_664cae6eaa0e211a,
              mid_getSecondFrequencyPhaseHistory_664cae6eaa0e211a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DualFrequencyHatchFilter(jobject obj) : ::org::orekit::estimation::measurements::filtering::HatchFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DualFrequencyHatchFilter(const DualFrequencyHatchFilter& obj) : ::org::orekit::estimation::measurements::filtering::HatchFilter(obj) {}

            DualFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &, jdouble, jdouble, jdouble, jint);

            ::org::orekit::files::rinex::observation::ObservationData filterData(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &) const;
            ::java::util::ArrayList getFirstFrequencyPhaseHistory() const;
            ::java::util::ArrayList getSecondFrequencyPhaseHistory() const;
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
          extern PyType_Def PY_TYPE_DEF(DualFrequencyHatchFilter);
          extern PyTypeObject *PY_TYPE(DualFrequencyHatchFilter);

          class t_DualFrequencyHatchFilter {
          public:
            PyObject_HEAD
            DualFrequencyHatchFilter object;
            static PyObject *wrap_Object(const DualFrequencyHatchFilter&);
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
