#ifndef org_orekit_propagation_events_InterSatDirectViewDetector_H
#define org_orekit_propagation_events_InterSatDirectViewDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace propagation {
      namespace events {
        class InterSatDirectViewDetector;
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

        class InterSatDirectViewDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_947a15dba0f7c30c,
            mid_g_a17ea857ce74d258,
            mid_getCentralBody_dd5c4288aa5a3dd8,
            mid_getSecondary_8a41319e47f3bd7c,
            mid_getSkimmingAltitude_b74f83833fdad017,
            mid_withSkimmingAltitude_bb5897b316ea28b5,
            mid_create_3371e3313c6813ea,
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
