#ifndef org_orekit_forces_drag_AbstractDragForceModel_H
#define org_orekit_forces_drag_AbstractDragForceModel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      class ForceModel;
    }
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
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_isVariable_cb8809386317d9d1,
            mid_isVariable_e694c750b6d47f11,
            mid_isDSStateDerivative_e6d9e841ca2e035c,
            mid_isGradientStateDerivative_e6d9e841ca2e035c,
            mid_getDSDensityWrtStateUsingFiniteDifferences_f0f464f712250667,
            mid_getGradientDensityWrtStateUsingFiniteDifferences_ef723df1fde38524,
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
