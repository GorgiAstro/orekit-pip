#ifndef org_orekit_utils_TimeSpanMap$Transition_H
#define org_orekit_utils_TimeSpanMap$Transition_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeSpanMap$Transition;
      class TimeSpanMap$Span;
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

      class TimeSpanMap$Transition : public ::java::lang::Object {
       public:
        enum {
          mid_getAfter_dfd7647d9110ac9f,
          mid_getBefore_dfd7647d9110ac9f,
          mid_getDate_aaa854c403487cf3,
          mid_getSpanAfter_39a1e35b17737f60,
          mid_getSpanBefore_39a1e35b17737f60,
          mid_next_bfa1ec341cbef3d2,
          mid_previous_bfa1ec341cbef3d2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeSpanMap$Transition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeSpanMap$Transition(const TimeSpanMap$Transition& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object getAfter() const;
        ::java::lang::Object getBefore() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        ::org::orekit::utils::TimeSpanMap$Span getSpanAfter() const;
        ::org::orekit::utils::TimeSpanMap$Span getSpanBefore() const;
        TimeSpanMap$Transition next() const;
        TimeSpanMap$Transition previous() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeSpanMap$Transition);
      extern PyTypeObject *PY_TYPE(TimeSpanMap$Transition);

      class t_TimeSpanMap$Transition {
      public:
        PyObject_HEAD
        TimeSpanMap$Transition object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeSpanMap$Transition *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeSpanMap$Transition&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeSpanMap$Transition&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
