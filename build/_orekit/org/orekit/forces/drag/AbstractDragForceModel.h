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
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_isDSStateDerivative_91c945ca7903e8ac,
            mid_isGradientStateDerivative_91c945ca7903e8ac,
            mid_isVariable_16c3650793669947,
            mid_isVariable_520d8041d1c91e9b,
            mid_getDSDensityWrtStateUsingFiniteDifferences_3de0c2016b93c048,
            mid_getGradientDensityWrtStateUsingFiniteDifferences_5d5ea9a42db716fd,
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
