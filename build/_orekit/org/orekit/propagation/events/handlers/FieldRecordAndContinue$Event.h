#ifndef org_orekit_propagation_events_handlers_FieldRecordAndContinue$Event_H
#define org_orekit_propagation_events_handlers_FieldRecordAndContinue$Event_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
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

          class FieldRecordAndContinue$Event : public ::java::lang::Object {
           public:
            enum {
              mid_getDetector_3146cd1129cf853c,
              mid_getState_a74be2e38786f3b6,
              mid_isIncreasing_eee3de00fe971136,
              mid_toString_d2c8eb4129821f0e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldRecordAndContinue$Event(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldRecordAndContinue$Event(const FieldRecordAndContinue$Event& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::propagation::events::FieldEventDetector getDetector() const;
            ::org::orekit::propagation::FieldSpacecraftState getState() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldRecordAndContinue$Event);
          extern PyTypeObject *PY_TYPE(FieldRecordAndContinue$Event);

          class t_FieldRecordAndContinue$Event {
          public:
            PyObject_HEAD
            FieldRecordAndContinue$Event object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldRecordAndContinue$Event *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldRecordAndContinue$Event&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldRecordAndContinue$Event&, PyTypeObject *);
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
