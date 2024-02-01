#ifndef org_orekit_forces_maneuvers_trigger_PythonFieldManeuverTriggersResetter_H
#define org_orekit_forces_maneuvers_trigger_PythonFieldManeuverTriggersResetter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          class PythonFieldManeuverTriggersResetter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_maneuverTriggered_e90aea08a7a0ab5e,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_resetState_59bc90ab93a43079,
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
