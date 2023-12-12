#ifndef org_orekit_estimation_measurements_gnss_CombinedObservationData_H
#define org_orekit_estimation_measurements_gnss_CombinedObservationData_H

#include "java/lang/Object.h"

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinationType;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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
        namespace gnss {

          class CombinedObservationData : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e33a53c7689ac28c,
              mid_getCombinationType_ad3ea7f7acc4745a,
              mid_getCombinedMHzFrequency_557b8123390d8d0c,
              mid_getMeasurementType_f61bec61c77ea492,
              mid_getUsedObservationData_0d9551367f7ecdef,
              mid_getValue_557b8123390d8d0c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CombinedObservationData(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CombinedObservationData(const CombinedObservationData& obj) : ::java::lang::Object(obj) {}

            CombinedObservationData(const ::org::orekit::estimation::measurements::gnss::CombinationType &, const ::org::orekit::gnss::MeasurementType &, jdouble, jdouble, const ::java::util::List &);

            ::org::orekit::estimation::measurements::gnss::CombinationType getCombinationType() const;
            jdouble getCombinedMHzFrequency() const;
            ::org::orekit::gnss::MeasurementType getMeasurementType() const;
            ::java::util::List getUsedObservationData() const;
            jdouble getValue() const;
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
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(CombinedObservationData);
          extern PyTypeObject *PY_TYPE(CombinedObservationData);

          class t_CombinedObservationData {
          public:
            PyObject_HEAD
            CombinedObservationData object;
            static PyObject *wrap_Object(const CombinedObservationData&);
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
