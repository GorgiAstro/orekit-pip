#ifndef org_orekit_propagation_events_handlers_RecordAndContinue_H
#define org_orekit_propagation_events_handlers_RecordAndContinue_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class Action;
      }
    }
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          class EventHandler;
          class RecordAndContinue$Event;
        }
        class EventDetector;
      }
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

          class RecordAndContinue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_aa335fea495d60e0,
              mid_clear_ff7cb6c242604316,
              mid_eventOccurred_66898681536e4202,
              mid_getEvents_d751c1a57012b438,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RecordAndContinue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RecordAndContinue(const RecordAndContinue& obj) : ::java::lang::Object(obj) {}

            RecordAndContinue();
            RecordAndContinue(const ::java::util::List &);

            void clear() const;
            ::org::hipparchus::ode::events::Action eventOccurred(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::events::EventDetector &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(RecordAndContinue);
          extern PyTypeObject *PY_TYPE(RecordAndContinue);

          class t_RecordAndContinue {
          public:
            PyObject_HEAD
            RecordAndContinue object;
            static PyObject *wrap_Object(const RecordAndContinue&);
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
