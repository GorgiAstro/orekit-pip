#ifndef org_orekit_utils_TimeSpanMap$Span_H
#define org_orekit_utils_TimeSpanMap$Span_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap$Transition;
      class TimeSpanMap$Span;
    }
    namespace time {
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

      class TimeSpanMap$Span : public ::java::lang::Object {
       public:
        enum {
          mid_getData_dfd7647d9110ac9f,
          mid_getEnd_aaa854c403487cf3,
          mid_getEndTransition_bfa1ec341cbef3d2,
          mid_getStart_aaa854c403487cf3,
          mid_getStartTransition_bfa1ec341cbef3d2,
          mid_next_39a1e35b17737f60,
          mid_previous_39a1e35b17737f60,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeSpanMap$Span(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeSpanMap$Span(const TimeSpanMap$Span& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object getData() const;
        ::org::orekit::time::AbsoluteDate getEnd() const;
        ::org::orekit::utils::TimeSpanMap$Transition getEndTransition() const;
        ::org::orekit::time::AbsoluteDate getStart() const;
        ::org::orekit::utils::TimeSpanMap$Transition getStartTransition() const;
        TimeSpanMap$Span next() const;
        TimeSpanMap$Span previous() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeSpanMap$Span);
      extern PyTypeObject *PY_TYPE(TimeSpanMap$Span);

      class t_TimeSpanMap$Span {
      public:
        PyObject_HEAD
        TimeSpanMap$Span object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeSpanMap$Span *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeSpanMap$Span&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeSpanMap$Span&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
