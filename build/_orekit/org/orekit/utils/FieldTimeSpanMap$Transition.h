#ifndef org_orekit_utils_FieldTimeSpanMap$Transition_H
#define org_orekit_utils_FieldTimeSpanMap$Transition_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
    namespace utils {

      class FieldTimeSpanMap$Transition : public ::java::lang::Object {
       public:
        enum {
          mid_getAbsoluteDate_fa23a4301b9c83e7,
          mid_getAfter_541690f9ee81d3ad,
          mid_getBefore_541690f9ee81d3ad,
          mid_getDate_c325492395d89b24,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTimeSpanMap$Transition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTimeSpanMap$Transition(const FieldTimeSpanMap$Transition& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::time::FieldAbsoluteDate getAbsoluteDate() const;
        ::java::lang::Object getAfter() const;
        ::java::lang::Object getBefore() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldTimeSpanMap$Transition);
      extern PyTypeObject *PY_TYPE(FieldTimeSpanMap$Transition);

      class t_FieldTimeSpanMap$Transition {
      public:
        PyObject_HEAD
        FieldTimeSpanMap$Transition object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_FieldTimeSpanMap$Transition *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTimeSpanMap$Transition&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTimeSpanMap$Transition&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
