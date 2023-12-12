#ifndef org_orekit_attitudes_AttitudeInterpolator_H
#define org_orekit_attitudes_AttitudeInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
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
    namespace attitudes {

      class AttitudeInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_c36c97d7752fb40b,
          mid_getAngularInterpolator_1bb20e7ea407bfce,
          mid_getReferenceFrame_6c9bc0a928c56d4e,
          mid_interpolate_78991927dd03b0da,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AttitudeInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AttitudeInterpolator(const AttitudeInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        AttitudeInterpolator(const ::org::orekit::frames::Frame &, const ::org::orekit::time::TimeInterpolator &);

        ::org::orekit::time::TimeInterpolator getAngularInterpolator() const;
        ::org::orekit::frames::Frame getReferenceFrame() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(AttitudeInterpolator);
      extern PyTypeObject *PY_TYPE(AttitudeInterpolator);

      class t_AttitudeInterpolator {
      public:
        PyObject_HEAD
        AttitudeInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AttitudeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AttitudeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AttitudeInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
