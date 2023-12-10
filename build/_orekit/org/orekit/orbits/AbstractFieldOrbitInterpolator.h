#ifndef org_orekit_orbits_AbstractFieldOrbitInterpolator_H
#define org_orekit_orbits_AbstractFieldOrbitInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class AbstractFieldOrbitInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_544055afce312742,
          mid_getOutputInertialFrame_c8fe21bcdac65bf6,
          mid_interpolate_7b5e6ef1fbe50083,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractFieldOrbitInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractFieldOrbitInterpolator(const AbstractFieldOrbitInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        AbstractFieldOrbitInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &);

        ::org::orekit::frames::Frame getOutputInertialFrame() const;
        ::org::orekit::orbits::FieldOrbit interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Collection &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(AbstractFieldOrbitInterpolator);
      extern PyTypeObject *PY_TYPE(AbstractFieldOrbitInterpolator);

      class t_AbstractFieldOrbitInterpolator {
      public:
        PyObject_HEAD
        AbstractFieldOrbitInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractFieldOrbitInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractFieldOrbitInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractFieldOrbitInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
