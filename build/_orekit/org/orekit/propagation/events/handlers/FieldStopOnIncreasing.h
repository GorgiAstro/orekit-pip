#ifndef org_orekit_propagation_events_handlers_FieldStopOnIncreasing_H
#define org_orekit_propagation_events_handlers_FieldStopOnIncreasing_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        namespace handlers {
          class FieldEventHandler;
        }
        class FieldEventDetector;
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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

          class FieldStopOnIncreasing : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_eventOccurred_061886b33964a9af,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldStopOnIncreasing(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldStopOnIncreasing(const FieldStopOnIncreasing& obj) : ::java::lang::Object(obj) {}

            FieldStopOnIncreasing();

            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldStopOnIncreasing);
          extern PyTypeObject *PY_TYPE(FieldStopOnIncreasing);

          class t_FieldStopOnIncreasing {
          public:
            PyObject_HEAD
            FieldStopOnIncreasing object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldStopOnIncreasing *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldStopOnIncreasing&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldStopOnIncreasing&, PyTypeObject *);
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
