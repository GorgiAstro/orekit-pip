#ifndef org_orekit_utils_TimeSpanMap_H
#define org_orekit_utils_TimeSpanMap_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
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

      class TimeSpanMap : public ::java::lang::Object {
       public:
        enum {
          mid_init$_009757f2c0fd9090,
          mid_addValidAfter_04cc60d9baa266b3,
          mid_addValidBefore_04cc60d9baa266b3,
          mid_addValidBetween_625d73dd0fdd755c,
          mid_extractRange_cdee4c9b841a225d,
          mid_get_d8f5ff8bb8636023,
          mid_getFirstSpan_2a24ed7b7f6cbca3,
          mid_getFirstTransition_b2de56d896f89501,
          mid_getLastSpan_2a24ed7b7f6cbca3,
          mid_getLastTransition_b2de56d896f89501,
          mid_getSpan_320d9b9cba67eeb8,
          mid_getSpansNumber_412668abc8d889e9,
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
