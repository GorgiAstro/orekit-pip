#ifndef org_orekit_orbits_AbstractOrbitInterpolator_H
#define org_orekit_orbits_AbstractOrbitInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class AbstractOrbitInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_2ee482a4c6f42d96,
          mid_checkOrbitsConsistency_f72f53318f80c525,
          mid_getOutputInertialFrame_b86f9f61d97a7244,
          mid_interpolate_df64ba85d4130bf6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractOrbitInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractOrbitInterpolator(const AbstractOrbitInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        AbstractOrbitInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &);

        static void checkOrbitsConsistency(const ::java::util::Collection &);
        ::org::orekit::frames::Frame getOutputInertialFrame() const;
        ::org::orekit::orbits::Orbit interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Collection &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(AbstractOrbitInterpolator);
      extern PyTypeObject *PY_TYPE(AbstractOrbitInterpolator);

      class t_AbstractOrbitInterpolator {
      public:
        PyObject_HEAD
        AbstractOrbitInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractOrbitInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractOrbitInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractOrbitInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
