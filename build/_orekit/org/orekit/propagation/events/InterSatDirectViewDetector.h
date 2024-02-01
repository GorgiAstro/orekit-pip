#ifndef org_orekit_propagation_events_InterSatDirectViewDetector_H
#define org_orekit_propagation_events_InterSatDirectViewDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class InterSatDirectViewDetector;
      }
      class SpacecraftState;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class PVCoordinatesProvider;
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

        class InterSatDirectViewDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_584b06ca4271f2b5,
            mid_g_b443ba1cc794b916,
            mid_getCentralBody_dc8275c31111ad9c,
            mid_getSecondary_781ab98286dad7d5,
            mid_getSkimmingAltitude_9981f74b2d109da6,
            mid_withSkimmingAltitude_e70c0d5ce41a8a1e,
            mid_create_464d5a275df7110d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InterSatDirectViewDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InterSatDirectViewDetector(const InterSatDirectViewDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          InterSatDirectViewDetector(const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::utils::PVCoordinatesProvider &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::bodies::OneAxisEllipsoid getCentralBody() const;
          ::org::orekit::utils::PVCoordinatesProvider getSecondary() const;
          jdouble getSkimmingAltitude() const;
          InterSatDirectViewDetector withSkimmingAltitude(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(InterSatDirectViewDetector);
        extern PyTypeObject *PY_TYPE(InterSatDirectViewDetector);

        class t_InterSatDirectViewDetector {
        public:
          PyObject_HEAD
          InterSatDirectViewDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_InterSatDirectViewDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const InterSatDirectViewDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const InterSatDirectViewDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
