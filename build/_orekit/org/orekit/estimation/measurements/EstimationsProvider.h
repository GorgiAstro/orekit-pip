#ifndef org_orekit_estimation_measurements_EstimationsProvider_H
#define org_orekit_estimation_measurements_EstimationsProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
      }
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

        class EstimationsProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getEstimatedMeasurement_978ac7593c1405c5,
            mid_getNumber_570ce0828f81a2c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstimationsProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstimationsProvider(const EstimationsProvider& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::estimation::measurements::EstimatedMeasurement getEstimatedMeasurement(jint) const;
          jint getNumber() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(EstimationsProvider);
        extern PyTypeObject *PY_TYPE(EstimationsProvider);

        class t_EstimationsProvider {
        public:
          PyObject_HEAD
          EstimationsProvider object;
          static PyObject *wrap_Object(const EstimationsProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
