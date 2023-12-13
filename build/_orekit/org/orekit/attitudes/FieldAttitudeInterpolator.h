#ifndef org_orekit_attitudes_FieldAttitudeInterpolator_H
#define org_orekit_attitudes_FieldAttitudeInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class FieldTimeInterpolator;
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

      class FieldAttitudeInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_d37d1e77bb1e8424,
          mid_getAngularInterpolator_9cf5e479bf3925c5,
          mid_getReferenceFrame_2c51111cc6894ba1,
          mid_interpolate_f0c30115168a83c4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAttitudeInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAttitudeInterpolator(const FieldAttitudeInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        FieldAttitudeInterpolator(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldTimeInterpolator &);

        ::org::orekit::time::FieldTimeInterpolator getAngularInterpolator() const;
        ::org::orekit::frames::Frame getReferenceFrame() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(FieldAttitudeInterpolator);
      extern PyTypeObject *PY_TYPE(FieldAttitudeInterpolator);

      class t_FieldAttitudeInterpolator {
      public:
        PyObject_HEAD
        FieldAttitudeInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAttitudeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAttitudeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAttitudeInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
