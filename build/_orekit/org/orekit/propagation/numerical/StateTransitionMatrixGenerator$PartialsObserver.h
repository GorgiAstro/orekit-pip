#ifndef org_orekit_propagation_numerical_StateTransitionMatrixGenerator$PartialsObserver_H
#define org_orekit_propagation_numerical_StateTransitionMatrixGenerator$PartialsObserver_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class StateTransitionMatrixGenerator$PartialsObserver : public ::java::lang::Object {
         public:
          enum {
            mid_partialsComputed_32d762d958cb6960,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StateTransitionMatrixGenerator$PartialsObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StateTransitionMatrixGenerator$PartialsObserver(const StateTransitionMatrixGenerator$PartialsObserver& obj) : ::java::lang::Object(obj) {}

          void partialsComputed(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &, const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(StateTransitionMatrixGenerator$PartialsObserver);
        extern PyTypeObject *PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver);

        class t_StateTransitionMatrixGenerator$PartialsObserver {
        public:
          PyObject_HEAD
          StateTransitionMatrixGenerator$PartialsObserver object;
          static PyObject *wrap_Object(const StateTransitionMatrixGenerator$PartialsObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
