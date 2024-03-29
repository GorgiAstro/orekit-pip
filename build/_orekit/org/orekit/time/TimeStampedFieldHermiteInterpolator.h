#ifndef org_orekit_time_TimeStampedFieldHermiteInterpolator_H
#define org_orekit_time_TimeStampedFieldHermiteInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TimeStampedFieldHermiteInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_8fd427ab23829bf5,
          mid_init$_4320462275d66e78,
          mid_interpolate_96187d4ccdb9204c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedFieldHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedFieldHermiteInterpolator(const TimeStampedFieldHermiteInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        TimeStampedFieldHermiteInterpolator();
        TimeStampedFieldHermiteInterpolator(jint);
        TimeStampedFieldHermiteInterpolator(jint, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeStampedFieldHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(TimeStampedFieldHermiteInterpolator);

      class t_TimeStampedFieldHermiteInterpolator {
      public:
        PyObject_HEAD
        TimeStampedFieldHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedFieldHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedFieldHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedFieldHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
