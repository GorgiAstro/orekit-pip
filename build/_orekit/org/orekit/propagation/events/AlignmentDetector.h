#ifndef org_orekit_propagation_events_AlignmentDetector_H
#define org_orekit_propagation_events_AlignmentDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class AlignmentDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace orbits {
      class Orbit;
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
            mid_init$_b7d008191a2939f8,
            mid_init$_cf0e2d78b0355533,
            mid_init$_a7bf0432bc4b56f6,
            mid_g_432f3d328c15ec82,
            mid_getAlignAngle_dff5885c2c873297,
            mid_getPVCoordinatesProvider_903aca6bb4523e29,
            mid_create_df65d8dc2cbadb50,
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
