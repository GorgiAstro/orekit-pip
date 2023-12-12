#ifndef org_orekit_estimation_measurements_filtering_DualFrequencySmoother_H
#define org_orekit_estimation_measurements_filtering_DualFrequencySmoother_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationData;
          class ObservationDataSet;
        }
      }
    }
    namespace gnss {
      class ObservationType;
      class SatelliteSystem;
    }
    namespace estimation {
      namespace measurements {
        namespace filtering {
          class SmoothedObservationDataSet;
          class DualFrequencyHatchFilter;
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
              mid_init$_47602ef8408ea361,
              mid_copyObservationData_f6f450be0ab92fea,
              mid_createFilter_7a832b0eff2a17cf,
              mid_filterDataSet_1a7469cb8fc0bf06,
              mid_getFilteredDataMap_2bd3906654d055d1,
              mid_getMapFilters_2bd3906654d055d1,
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
