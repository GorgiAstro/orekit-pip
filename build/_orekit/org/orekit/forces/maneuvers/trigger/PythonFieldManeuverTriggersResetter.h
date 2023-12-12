#ifndef org_orekit_forces_maneuvers_trigger_PythonFieldManeuverTriggersResetter_H
#define org_orekit_forces_maneuvers_trigger_PythonFieldManeuverTriggersResetter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class FieldManeuverTriggersResetter;
        }
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

          class PythonFieldManeuverTriggersResetter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_maneuverTriggered_585702d5a402c590,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              mid_resetState_4f12774dd382c6f4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFieldManeuverTriggersResetter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonFieldManeuverTriggersResetter(const PythonFieldManeuverTriggersResetter& obj) : ::java::lang::Object(obj) {}

            PythonFieldManeuverTriggersResetter();

            void finalize() const;
            void maneuverTriggered(const ::org::orekit::propagation::FieldSpacecraftState &, jboolean) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            ::org::orekit::propagation::FieldSpacecraftState resetState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonFieldManeuverTriggersResetter);
          extern PyTypeObject *PY_TYPE(PythonFieldManeuverTriggersResetter);

          class t_PythonFieldManeuverTriggersResetter {
          public:
            PyObject_HEAD
            PythonFieldManeuverTriggersResetter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PythonFieldManeuverTriggersResetter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonFieldManeuverTriggersResetter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonFieldManeuverTriggersResetter&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
