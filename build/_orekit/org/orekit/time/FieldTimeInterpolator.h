#ifndef org_orekit_time_FieldTimeInterpolator_H
#define org_orekit_time_FieldTimeInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class FieldTimeInterpolator;
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
          mid_getExtrapolationThreshold_9981f74b2d109da6,
          mid_getNbInterpolationPoints_d6ab429752e7c267,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_3e3236a5fd16fc74,
          mid_interpolate_5e47610c970258e7,
          mid_interpolate_f4186cd94813d116,
          mid_interpolate_ecda3df535f73158,
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
