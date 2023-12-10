#ifndef org_orekit_propagation_events_handlers_RecordAndContinue_H
#define org_orekit_propagation_events_handlers_RecordAndContinue_H

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
        class EventDetector;
        namespace handlers {
          class EventHandler;
          class RecordAndContinue$Event;
        }
      }
      class SpacecraftState;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          class RecordAndContinue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_de3e021e7266b71e,
              mid_clear_0fa09c18fee449d5,
              mid_eventOccurred_abc543fa9701720f,
              mid_getEvents_2afa36052df4765d,
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
