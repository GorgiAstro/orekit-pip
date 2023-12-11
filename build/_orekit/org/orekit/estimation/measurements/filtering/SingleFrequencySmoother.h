#ifndef org_orekit_estimation_measurements_filtering_SingleFrequencySmoother_H
#define org_orekit_estimation_measurements_filtering_SingleFrequencySmoother_H

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
      class MeasurementType;
    }
    namespace estimation {
      namespace measurements {
        namespace filtering {
          class SmoothedObservationDataSet;
          class SingleFrequencyHatchFilter;
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

          class SingleFrequencySmoother : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6c94f1a23ed7c29a,
              mid_copyObservationData_f6f450be0ab92fea,
              mid_createFilter_d3b5cedf330d3f01,
              mid_filterDataSet_262da5617a6dd751,
              mid_getFilteredDataMap_2bd3906654d055d1,
              mid_getMapFilters_2bd3906654d055d1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SingleFrequencySmoother(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SingleFrequencySmoother(const SingleFrequencySmoother& obj) : ::java::lang::Object(obj) {}

            SingleFrequencySmoother(const ::org::orekit::gnss::MeasurementType &, jdouble, jint, jdouble);

            ::org::orekit::files::rinex::observation::ObservationData copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData &) const;
            ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter createFilter(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::gnss::SatelliteSystem &) const;
            void filterDataSet(const ::java::util::List &, const ::org::orekit::gnss::SatelliteSystem &, jint, const ::org::orekit::gnss::ObservationType &) const;
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
          extern PyType_Def PY_TYPE_DEF(SingleFrequencySmoother);
          extern PyTypeObject *PY_TYPE(SingleFrequencySmoother);

          class t_SingleFrequencySmoother {
          public:
            PyObject_HEAD
            SingleFrequencySmoother object;
            static PyObject *wrap_Object(const SingleFrequencySmoother&);
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
