#ifndef org_orekit_propagation_events_FieldEventsLogger_H
#define org_orekit_propagation_events_FieldEventsLogger_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventsLogger$FieldLoggedEvent;
        class FieldAbstractDetector;
      }
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

        class FieldEventsLogger : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_clearLoggedEvents_ff7cb6c242604316,
            mid_getLoggedEvents_d751c1a57012b438,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventsLogger(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventsLogger(const FieldEventsLogger& obj) : ::java::lang::Object(obj) {}

          FieldEventsLogger();

          void clearLoggedEvents() const;
          ::java::util::List getLoggedEvents() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(FieldEventsLogger);
        extern PyTypeObject *PY_TYPE(FieldEventsLogger);

        class t_FieldEventsLogger {
        public:
          PyObject_HEAD
          FieldEventsLogger object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEventsLogger *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventsLogger&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventsLogger&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
