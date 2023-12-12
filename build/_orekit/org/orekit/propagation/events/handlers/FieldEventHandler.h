#ifndef org_orekit_propagation_events_handlers_FieldEventHandler_H
#define org_orekit_propagation_events_handlers_FieldEventHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
      }
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
    namespace propagation {
      namespace events {
        namespace handlers {

          class FieldEventHandler : public ::java::lang::Object {
           public:
            enum {
              mid_eventOccurred_061886b33964a9af,
              mid_init_3ea56aaf691449ae,
              mid_resetState_ceb1c025df8e35c2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldEventHandler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldEventHandler(const FieldEventHandler& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, jboolean) const;
            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::propagation::events::FieldEventDetector &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldEventHandler);
          extern PyTypeObject *PY_TYPE(FieldEventHandler);

          class t_FieldEventHandler {
          public:
            PyObject_HEAD
            FieldEventHandler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldEventHandler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldEventHandler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldEventHandler&, PyTypeObject *);
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
