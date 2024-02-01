#ifndef org_orekit_propagation_events_AlignmentDetector_H
#define org_orekit_propagation_events_AlignmentDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      namespace events {
        class AlignmentDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
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
            mid_init$_97d3e3204146d0a6,
            mid_init$_1ecf54252e404e23,
            mid_init$_16205098a1d90a78,
            mid_g_b443ba1cc794b916,
            mid_getAlignAngle_9981f74b2d109da6,
            mid_getPVCoordinatesProvider_781ab98286dad7d5,
            mid_create_b9628636bdd19658,
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
