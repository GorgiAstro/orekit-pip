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
      class FieldSpacecraftState;
      namespace events {
        namespace handlers {
          class FieldEventHandler;
          class FieldRecordAndContinue$Event;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          class FieldRecordAndContinue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_4ccaedadb068bdeb,
              mid_clear_0640e6acf969ed28,
              mid_eventOccurred_061886b33964a9af,
              mid_getEvents_0d9551367f7ecdef,
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
