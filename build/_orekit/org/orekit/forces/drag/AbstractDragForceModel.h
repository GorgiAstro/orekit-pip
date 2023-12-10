#ifndef org_orekit_forces_drag_AbstractDragForceModel_H
#define org_orekit_forces_drag_AbstractDragForceModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      class ForceModel;
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
    namespace forces {
      namespace drag {

        class AbstractDragForceModel : public ::java::lang::Object {
         public:
          enum {
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_isGradientStateDerivative_1b0abd4f90ebd0eb,
            mid_getGradientDensityWrtStateUsingFiniteDifferences_6e7f00aaa60e8b64,
            mid_isDSStateDerivative_1b0abd4f90ebd0eb,
            mid_getDSDensityWrtStateUsingFiniteDifferences_7bcfffd6fc22faec,
            mid_isVariable_69a4264a1435534c,
            mid_isVariable_67abdb36e56ec75b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractDragForceModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractDragForceModel(const AbstractDragForceModel& obj) : ::java::lang::Object(obj) {}

          jboolean dependsOnPositionOnly() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {
        extern PyType_Def PY_TYPE_DEF(AbstractDragForceModel);
        extern PyTypeObject *PY_TYPE(AbstractDragForceModel);

        class t_AbstractDragForceModel {
        public:
          PyObject_HEAD
          AbstractDragForceModel object;
          static PyObject *wrap_Object(const AbstractDragForceModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
