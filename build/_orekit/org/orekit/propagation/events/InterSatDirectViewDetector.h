#ifndef org_orekit_propagation_events_InterSatDirectViewDetector_H
#define org_orekit_propagation_events_InterSatDirectViewDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class InterSatDirectViewDetector;
      }
      class SpacecraftState;
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
            mid_init$_2914d3f2dff5be5b,
            mid_g_66a2f071e6ed0c06,
            mid_getCentralBody_940814a1dcab100a,
            mid_getSecondary_7044cb1966c8a481,
            mid_getSkimmingAltitude_456d9a2f64d6b28d,
            mid_withSkimmingAltitude_683ec414e5815668,
            mid_create_efcd54409f078844,
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
