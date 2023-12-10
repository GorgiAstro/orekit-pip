#ifndef org_orekit_propagation_events_handlers_RecordAndContinue$Event_H
#define org_orekit_propagation_events_handlers_RecordAndContinue$Event_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          class RecordAndContinue$Event : public ::java::lang::Object {
           public:
            enum {
              mid_getDetector_d73bb985ffde4156,
              mid_getState_c6311115fea01a34,
              mid_isIncreasing_b108b35ef48e27bd,
              mid_toString_11b109bd155ca898,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RecordAndContinue$Event(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RecordAndContinue$Event(const RecordAndContinue$Event& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::propagation::events::EventDetector getDetector() const;
            ::org::orekit::propagation::SpacecraftState getState() const;
            jboolean isIncreasing() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(RecordAndContinue$Event);
          extern PyTypeObject *PY_TYPE(RecordAndContinue$Event);

          class t_RecordAndContinue$Event {
          public:
            PyObject_HEAD
            RecordAndContinue$Event object;
            static PyObject *wrap_Object(const RecordAndContinue$Event&);
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
