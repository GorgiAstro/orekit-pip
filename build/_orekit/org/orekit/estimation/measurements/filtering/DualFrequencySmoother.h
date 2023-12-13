#ifndef org_orekit_estimation_measurements_filtering_DualFrequencySmoother_H
#define org_orekit_estimation_measurements_filtering_DualFrequencySmoother_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      class ObservationType;
    }
    namespace estimation {
      namespace measurements {
        namespace filtering {
          class DualFrequencyHatchFilter;
          class SmoothedObservationDataSet;
        }
      }
    }
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationData;
          class ObservationDataSet;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class HashMap;
  }
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

          class DualFrequencySmoother : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1af1b4c263b48b0c,
              mid_copyObservationData_5627f6437b3ab888,
              mid_createFilter_1ed4e8277b5c5099,
              mid_filterDataSet_6eed97de121df5d2,
              mid_getFilteredDataMap_f21c52aaf6a29827,
              mid_getMapFilters_f21c52aaf6a29827,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DualFrequencySmoother(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DualFrequencySmoother(const DualFrequencySmoother& obj) : ::java::lang::Object(obj) {}

            DualFrequencySmoother(jdouble, jint);

            ::org::orekit::files::rinex::observation::ObservationData copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData &) const;
            ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter createFilter(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::gnss::SatelliteSystem &) const;
            void filterDataSet(const ::java::util::List &, const ::org::orekit::gnss::SatelliteSystem &, jint, const ::org::orekit::gnss::ObservationType &, const ::org::orekit::gnss::ObservationType &) const;
            ::java::util::HashMap getFilteredDataMap() const;
            ::java::util::HashMap getMapFilters() const;
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
          extern PyType_Def PY_TYPE_DEF(DualFrequencySmoother);
          extern PyTypeObject *PY_TYPE(DualFrequencySmoother);

          class t_DualFrequencySmoother {
          public:
            PyObject_HEAD
            DualFrequencySmoother object;
            static PyObject *wrap_Object(const DualFrequencySmoother&);
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
