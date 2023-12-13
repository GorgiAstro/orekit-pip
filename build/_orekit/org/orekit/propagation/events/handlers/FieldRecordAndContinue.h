#ifndef org_orekit_propagation_events_handlers_FieldRecordAndContinue_H
#define org_orekit_propagation_events_handlers_FieldRecordAndContinue_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        namespace handlers {
          class FieldEventHandler;
          class FieldRecordAndContinue$Event;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          class FieldRecordAndContinue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_0e7c3032c7c93ed3,
              mid_clear_a1fa5dae97ea5ed2,
              mid_eventOccurred_839b1f3ec2c4fbf6,
              mid_getEvents_e62d3bb06d56d7e3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldRecordAndContinue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldRecordAndContinue(const FieldRecordAndContinue& obj) : ::java::lang::Object(obj) {}

            FieldRecordAndContinue();
            FieldRecordAndContinue(const ::java::util::List &);

            void clear() const;
            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::events::FieldEventDetector &, jboolean) const;
            ::java::util::List getEvents() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldRecordAndContinue);
          extern PyTypeObject *PY_TYPE(FieldRecordAndContinue);

          class t_FieldRecordAndContinue {
          public:
            PyObject_HEAD
            FieldRecordAndContinue object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldRecordAndContinue *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldRecordAndContinue&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldRecordAndContinue&, PyTypeObject *);
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
