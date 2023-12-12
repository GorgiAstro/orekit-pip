#ifndef org_orekit_time_FieldTimeInterpolator_H
#define org_orekit_time_FieldTimeInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeInterpolator;
      class AbsoluteDate;
      class FieldTimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class FieldTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_getExtrapolationThreshold_557b8123390d8d0c,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_38dc0c96cc60a813,
          mid_interpolate_98428073ca0c402f,
          mid_interpolate_cc27df3dc8f597ed,
          mid_interpolate_a061c10693b292f5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTimeInterpolator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTimeInterpolator(const FieldTimeInterpolator& obj) : ::java::lang::Object(obj) {}

        jdouble getExtrapolationThreshold() const;
        jint getNbInterpolationPoints() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::time::FieldTimeStamped interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Collection &) const;
        ::org::orekit::time::FieldTimeStamped interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::stream::Stream &) const;
        ::org::orekit::time::FieldTimeStamped interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Collection &) const;
        ::org::orekit::time::FieldTimeStamped interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::stream::Stream &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(FieldTimeInterpolator);
      extern PyTypeObject *PY_TYPE(FieldTimeInterpolator);

      class t_FieldTimeInterpolator {
      public:
        PyObject_HEAD
        FieldTimeInterpolator object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_FieldTimeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTimeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTimeInterpolator&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
