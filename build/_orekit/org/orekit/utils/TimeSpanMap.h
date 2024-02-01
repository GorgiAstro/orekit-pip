#ifndef org_orekit_utils_TimeSpanMap_H
#define org_orekit_utils_TimeSpanMap_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap$Span;
      class TimeSpanMap$Transition;
      class TimeSpanMap;
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
          mid_init$_83ee235bb1e64e94,
          mid_addValidAfter_6a96ca70f196c91a,
          mid_addValidBefore_6a96ca70f196c91a,
          mid_addValidBetween_e686ab6fdd0f2c77,
          mid_extractRange_d943d113c5f78644,
          mid_get_97aeacdc44f4297e,
          mid_getFirstSpan_ea49fa2ad441b95d,
          mid_getFirstTransition_1026700a6787ef22,
          mid_getLastSpan_ea49fa2ad441b95d,
          mid_getLastTransition_1026700a6787ef22,
          mid_getSpan_7b19e06f3155cde2,
          mid_getSpansNumber_d6ab429752e7c267,
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
