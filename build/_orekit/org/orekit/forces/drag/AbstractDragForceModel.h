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
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_isGradientStateDerivative_712e981f67f3ccbe,
            mid_getGradientDensityWrtStateUsingFiniteDifferences_04cf191a644c6381,
            mid_isDSStateDerivative_712e981f67f3ccbe,
            mid_getDSDensityWrtStateUsingFiniteDifferences_14fad3513bd593d0,
            mid_isVariable_52d7e0e51b0b9ccd,
            mid_isVariable_0739c38386fc7c92,
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
