#ifndef org_orekit_orbits_AbstractOrbitInterpolator_H
#define org_orekit_orbits_AbstractOrbitInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
    }
    namespace frames {
      class Frame;
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

      class AbstractOrbitInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_4a8b614955ad3a54,
          mid_checkOrbitsConsistency_82af91bc8dfb5029,
          mid_getOutputInertialFrame_cb151471db4570f0,
          mid_interpolate_628961fcda1acbe8,
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
