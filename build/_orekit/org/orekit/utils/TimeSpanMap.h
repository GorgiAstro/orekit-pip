#ifndef org_orekit_utils_TimeSpanMap_H
#define org_orekit_utils_TimeSpanMap_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class TimeSpanMap$Span;
      class TimeSpanMap$Transition;
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

      class TimeSpanMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_2990946c992aafed,
          mid_addValidAfter_578e66beacb8428a,
          mid_addValidBefore_578e66beacb8428a,
          mid_addValidBetween_0c095adb91e280c3,
          mid_extractRange_56889532bb31616d,
          mid_get_5b827b6e0497f87e,
          mid_getFirstSpan_971209c2bf2033e7,
          mid_getFirstTransition_75c9888155918ff9,
          mid_getLastSpan_971209c2bf2033e7,
          mid_getLastTransition_75c9888155918ff9,
          mid_getSpan_561a18a65c5f000d,
          mid_getSpansNumber_570ce0828f81a2c1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeSpanMap(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeSpanMap(const TimeSpanMap& obj) : ::java::lang::Object(obj) {}

        TimeSpanMap(const ::java::lang::Object &);

        ::org::orekit::utils::TimeSpanMap$Span addValidAfter(const ::java::lang::Object &, const ::org::orekit::time::AbsoluteDate &, jboolean) const;
        ::org::orekit::utils::TimeSpanMap$Span addValidBefore(const ::java::lang::Object &, const ::org::orekit::time::AbsoluteDate &, jboolean) const;
        ::org::orekit::utils::TimeSpanMap$Span addValidBetween(const ::java::lang::Object &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
        TimeSpanMap extractRange(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
        ::java::lang::Object get$(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeSpanMap$Span getFirstSpan() const;
        ::org::orekit::utils::TimeSpanMap$Transition getFirstTransition() const;
        ::org::orekit::utils::TimeSpanMap$Span getLastSpan() const;
        ::org::orekit::utils::TimeSpanMap$Transition getLastTransition() const;
        ::org::orekit::utils::TimeSpanMap$Span getSpan(const ::org::orekit::time::AbsoluteDate &) const;
        jint getSpansNumber() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeSpanMap);
      extern PyTypeObject *PY_TYPE(TimeSpanMap);

      class t_TimeSpanMap {
      public:
        PyObject_HEAD
        TimeSpanMap object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeSpanMap *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeSpanMap&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeSpanMap&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
