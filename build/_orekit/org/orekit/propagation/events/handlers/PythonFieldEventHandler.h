#ifndef org_orekit_propagation_events_handlers_PythonFieldEventHandler_H
#define org_orekit_propagation_events_handlers_PythonFieldEventHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        namespace handlers {
          class FieldEventHandler;
        }
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace ode {
      namespace events {
        class Action;
      }
    }
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
    namespace propagation {
      namespace events {
        namespace handlers {

          class PythonFieldEventHandler : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_eventOccurred_094737664b369b83,
              mid_finalize_ff7cb6c242604316,
              mid_init_09584b3c735adb0f,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
              mid_resetState_cd642b76f63f95b7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonFieldEventHandler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonFieldEventHandler(const PythonFieldEventHandler& obj) : ::java::lang::Object(obj) {}

            PythonFieldEventHandler();

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, jboolean) const;
            void finalize() const;
            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::propagation::events::FieldEventDetector &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            ::org::orekit::propagation::FieldSpacecraftState resetState(const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::orekit::propagation::FieldSpacecraftState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          extern PyType_Def PY_TYPE_DEF(PythonFieldEventHandler);
          extern PyTypeObject *PY_TYPE(PythonFieldEventHandler);

          class t_PythonFieldEventHandler {
          public:
            PyObject_HEAD
            PythonFieldEventHandler object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PythonFieldEventHandler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PythonFieldEventHandler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PythonFieldEventHandler&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
