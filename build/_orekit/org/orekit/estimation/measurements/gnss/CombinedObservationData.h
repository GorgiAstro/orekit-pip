#ifndef org_orekit_estimation_measurements_gnss_CombinedObservationData_H
#define org_orekit_estimation_measurements_gnss_CombinedObservationData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationData;
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
              mid_init$_361391244955dd59,
              mid_getCombinationType_7e335f1c8cfa47c5,
              mid_getCombinedMHzFrequency_456d9a2f64d6b28d,
              mid_getMeasurementType_4399f03fd512a2dc,
              mid_getUsedObservationData_a6156df500549a58,
              mid_getValue_456d9a2f64d6b28d,
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
