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
          mid_init$_ff7cb6c242604316,
          mid_init$_8fd427ab23829bf5,
          mid_init$_4320462275d66e78,
          mid_interpolate_314de1f0ffc0db99,
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
