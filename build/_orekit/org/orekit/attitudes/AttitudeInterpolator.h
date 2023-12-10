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
          mid_init$_dcb9f1b6fb413a61,
          mid_getAngularInterpolator_c8e4b57f7805ef06,
          mid_getReferenceFrame_c8fe21bcdac65bf6,
          mid_interpolate_f9957124dd7f719f,
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
