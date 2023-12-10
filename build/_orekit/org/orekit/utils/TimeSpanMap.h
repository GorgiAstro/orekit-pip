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
          mid_init$_7ca0d9438822cb0b,
          mid_addValidAfter_ca4358fd12ef177a,
          mid_addValidBefore_ca4358fd12ef177a,
          mid_addValidBetween_da4ec72bdd0da05a,
          mid_extractRange_df7496d2771de2ea,
          mid_get_19bb07a4e369f4a4,
          mid_getFirstSpan_39a1e35b17737f60,
          mid_getFirstTransition_bfa1ec341cbef3d2,
          mid_getLastSpan_39a1e35b17737f60,
          mid_getLastTransition_bfa1ec341cbef3d2,
          mid_getSpan_e815c41e031d3908,
          mid_getSpansNumber_f2f64475e4580546,
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
