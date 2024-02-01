#ifndef org_orekit_forces_maneuvers_trigger_PythonManeuverTriggersResetter_H
#define org_orekit_forces_maneuvers_trigger_PythonManeuverTriggersResetter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class ManeuverTriggersResetter;
        }
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class PythonManeuverTriggersResetter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_maneuverTriggered_b69b5541e48d21c0,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_resetState_ed3fe207e6fde26f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonManeuverTriggersResetter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonManeuverTriggersResetter(const PythonManeuverTriggersResetter& obj) : ::java::lang::Object(obj) {}

            PythonManeuverTriggersResetter();

            void finalize() const;
            void maneuverTriggered(const ::org::orekit::propagation::SpacecraftState &, jboolean) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            ::org::orekit::propagation::SpacecraftState resetState(const ::org::orekit::propagation::SpacecraftState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          extern PyType_Def PY_TYPE_DEF(PythonManeuverTriggersResetter);
          extern PyTypeObject *PY_TYPE(PythonManeuverTriggersResetter);

          class t_PythonManeuverTriggersResetter {
          public:
            PyObject_HEAD
            PythonManeuverTriggersResetter object;
            static PyObject *wrap_Object(const PythonManeuverTriggersResetter&);
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
