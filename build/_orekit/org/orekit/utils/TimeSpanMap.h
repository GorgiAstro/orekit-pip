#ifndef org_orekit_utils_TimeSpanMap_H
#define org_orekit_utils_TimeSpanMap_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap$Span;
      class TimeSpanMap;
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
          mid_init$_55f3c894852c27a3,
          mid_addValidAfter_8fdd18825f40925f,
          mid_addValidBefore_8fdd18825f40925f,
          mid_addValidBetween_3d88095cff705c55,
          mid_extractRange_2917731b47ff4d6e,
          mid_get_65e8d6bf93c53df3,
          mid_getFirstSpan_5290b219f9ebfd63,
          mid_getFirstTransition_c754c29f2c04a95a,
          mid_getLastSpan_5290b219f9ebfd63,
          mid_getLastTransition_c754c29f2c04a95a,
          mid_getSpan_d9699fc4c4f11b26,
          mid_getSpansNumber_55546ef6a647f39b,
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
