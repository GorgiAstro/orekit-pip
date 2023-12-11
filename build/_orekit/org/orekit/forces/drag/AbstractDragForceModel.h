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
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_isVariable_671750bd736baae4,
            mid_isVariable_f16a8b8a0c3e99f0,
            mid_isGradientStateDerivative_4fda3059ab91dbfe,
            mid_getGradientDensityWrtStateUsingFiniteDifferences_e6db39fb1a2970fb,
            mid_isDSStateDerivative_4fda3059ab91dbfe,
            mid_getDSDensityWrtStateUsingFiniteDifferences_8ec02c77a9188017,
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
