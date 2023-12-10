#ifndef org_orekit_propagation_events_handlers_FieldRecordAndContinue_H
#define org_orekit_propagation_events_handlers_FieldRecordAndContinue_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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
          class FieldEventHandler;
          class FieldRecordAndContinue$Event;
        }
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
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

          class FieldRecordAndContinue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_de3e021e7266b71e,
              mid_clear_0fa09c18fee449d5,
              mid_eventOccurred_fc49a7ff6cb062a2,
              mid_getEvents_2afa36052df4765d,
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
