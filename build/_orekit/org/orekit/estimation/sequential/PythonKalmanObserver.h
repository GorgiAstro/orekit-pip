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
    class Throwable;
    class Class;
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
            mid_init$_0fa09c18fee449d5,
            mid_evaluationPerformed_d76c6ca9a1d073d2,
            mid_finalize_0fa09c18fee449d5,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
