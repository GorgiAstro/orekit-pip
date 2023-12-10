#ifndef org_orekit_propagation_semianalytical_dsst_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_H
#define org_orekit_propagation_semianalytical_dsst_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
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
      namespace semianalytical {
        namespace dsst {

          class DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver : public ::java::lang::Object {
           public:
            enum {
              mid_partialsComputed_e0569d03317baf3a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver(const DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver& obj) : ::java::lang::Object(obj) {}

            void partialsComputed(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::linear::RealMatrix &, const JArray< jdouble > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          extern PyType_Def PY_TYPE_DEF(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver);
          extern PyTypeObject *PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver);

          class t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver {
          public:
            PyObject_HEAD
            DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver object;
            static PyObject *wrap_Object(const DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver&);
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
