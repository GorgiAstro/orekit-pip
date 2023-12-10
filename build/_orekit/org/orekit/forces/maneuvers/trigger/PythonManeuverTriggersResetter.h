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
    class Throwable;
    class Class;
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
              mid_init$_0fa09c18fee449d5,
              mid_finalize_0fa09c18fee449d5,
              mid_maneuverTriggered_33f4696e4edaa03c,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              mid_resetState_f43130c50e9fafeb,
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
