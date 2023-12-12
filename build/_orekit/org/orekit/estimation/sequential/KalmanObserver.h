#ifndef org_orekit_estimation_sequential_KalmanObserver_H
#define org_orekit_estimation_sequential_KalmanObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class KalmanEstimation;
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
      namespace sequential {

        class KalmanObserver : public ::java::lang::Object {
         public:
          enum {
            mid_evaluationPerformed_9ef1e6c96a3a3980,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KalmanObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KalmanObserver(const KalmanObserver& obj) : ::java::lang::Object(obj) {}

          void evaluationPerformed(const ::org::orekit::estimation::sequential::KalmanEstimation &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        extern PyType_Def PY_TYPE_DEF(KalmanObserver);
        extern PyTypeObject *PY_TYPE(KalmanObserver);

        class t_KalmanObserver {
        public:
          PyObject_HEAD
          KalmanObserver object;
          static PyObject *wrap_Object(const KalmanObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
