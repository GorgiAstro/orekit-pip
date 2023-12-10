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
              mid_init$_f8e1e2997176852d,
              mid_getCombinationType_bcbd5b9371c0a4d1,
              mid_getCombinedMHzFrequency_dff5885c2c873297,
              mid_getMeasurementType_b9f942cb72c4c59a,
              mid_getUsedObservationData_2afa36052df4765d,
              mid_getValue_dff5885c2c873297,
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
