#ifndef org_orekit_time_TimeStampedDoubleHermiteInterpolator_H
#define org_orekit_time_TimeStampedDoubleHermiteInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStampedDouble;
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
    namespace time {

      class TimeStampedDoubleHermiteInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_44ed599e93e8a30c,
          mid_init$_d5322b8b512aeb26,
          mid_interpolate_18d0053526c9e5d7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedDoubleHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedDoubleHermiteInterpolator(const TimeStampedDoubleHermiteInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        TimeStampedDoubleHermiteInterpolator();
        TimeStampedDoubleHermiteInterpolator(jint);
        TimeStampedDoubleHermiteInterpolator(jint, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeStampedDoubleHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(TimeStampedDoubleHermiteInterpolator);

      class t_TimeStampedDoubleHermiteInterpolator {
      public:
        PyObject_HEAD
        TimeStampedDoubleHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedDoubleHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedDoubleHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedDoubleHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
