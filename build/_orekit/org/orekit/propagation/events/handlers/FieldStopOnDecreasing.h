#ifndef org_orekit_propagation_events_handlers_FieldStopOnDecreasing_H
#define org_orekit_propagation_events_handlers_FieldStopOnDecreasing_H

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

          class FieldStopOnDecreasing : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_eventOccurred_839b1f3ec2c4fbf6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldStopOnDecreasing(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldStopOnDecreasing(const FieldStopOnDecreasing& obj) : ::java::lang::Object(obj) {}

            FieldStopOnDecreasing();

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
          extern PyType_Def PY_TYPE_DEF(FieldStopOnDecreasing);
          extern PyTypeObject *PY_TYPE(FieldStopOnDecreasing);

          class t_FieldStopOnDecreasing {
          public:
            PyObject_HEAD
            FieldStopOnDecreasing object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldStopOnDecreasing *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldStopOnDecreasing&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldStopOnDecreasing&, PyTypeObject *);
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
