#ifndef org_orekit_propagation_events_AlignmentDetector_H
#define org_orekit_propagation_events_AlignmentDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      namespace events {
        class AlignmentDetector;
      }
      class SpacecraftState;
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
    namespace propagation {
      namespace events {

        class AlignmentDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_0f26039f723423f9,
            mid_init$_45fbe9bb503ae085,
            mid_init$_a7aae65c472927ce,
            mid_g_a17ea857ce74d258,
            mid_getAlignAngle_b74f83833fdad017,
            mid_getPVCoordinatesProvider_8a41319e47f3bd7c,
            mid_create_2b5e486a53cc56d8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AlignmentDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AlignmentDetector(const AlignmentDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          AlignmentDetector(const ::org::orekit::orbits::Orbit &, const ::org::orekit::utils::PVCoordinatesProvider &, jdouble);
          AlignmentDetector(jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::utils::PVCoordinatesProvider &, jdouble);
          AlignmentDetector(jdouble, jdouble, const ::org::orekit::utils::PVCoordinatesProvider &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getAlignAngle() const;
          ::org::orekit::utils::PVCoordinatesProvider getPVCoordinatesProvider() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(AlignmentDetector);
        extern PyTypeObject *PY_TYPE(AlignmentDetector);

        class t_AlignmentDetector {
        public:
          PyObject_HEAD
          AlignmentDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AlignmentDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AlignmentDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AlignmentDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
