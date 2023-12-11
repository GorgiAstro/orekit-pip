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
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_maneuverTriggered_45bf76e836befe86,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              mid_resetState_2c4cc16b11f79a6c,
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
