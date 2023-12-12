#ifndef org_orekit_estimation_sequential_PythonKalmanObserver_H
#define org_orekit_estimation_sequential_PythonKalmanObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class KalmanEstimation;
        class KalmanObserver;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class PythonKalmanObserver : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_evaluationPerformed_9ef1e6c96a3a3980,
            mid_finalize_0640e6acf969ed28,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonKalmanObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonKalmanObserver(const PythonKalmanObserver& obj) : ::java::lang::Object(obj) {}

          PythonKalmanObserver();

          void evaluationPerformed(const ::org::orekit::estimation::sequential::KalmanEstimation &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonKalmanObserver);
        extern PyTypeObject *PY_TYPE(PythonKalmanObserver);

        class t_PythonKalmanObserver {
        public:
          PyObject_HEAD
          PythonKalmanObserver object;
          static PyObject *wrap_Object(const PythonKalmanObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
