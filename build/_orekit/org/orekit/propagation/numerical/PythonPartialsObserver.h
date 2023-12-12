#ifndef org_orekit_propagation_numerical_PythonPartialsObserver_H
#define org_orekit_propagation_numerical_PythonPartialsObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace numerical {
        class StateTransitionMatrixGenerator$PartialsObserver;
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
    namespace propagation {
      namespace numerical {

        class PythonPartialsObserver : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_partialsComputed_c6e78d5a2304799f,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonPartialsObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonPartialsObserver(const PythonPartialsObserver& obj) : ::java::lang::Object(obj) {}

          PythonPartialsObserver();

          void finalize() const;
          void partialsComputed(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &, const JArray< jdouble > &) const;
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
    namespace propagation {
      namespace numerical {
        extern PyType_Def PY_TYPE_DEF(PythonPartialsObserver);
        extern PyTypeObject *PY_TYPE(PythonPartialsObserver);

        class t_PythonPartialsObserver {
        public:
          PyObject_HEAD
          PythonPartialsObserver object;
          static PyObject *wrap_Object(const PythonPartialsObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
