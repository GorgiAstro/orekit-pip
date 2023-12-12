#ifndef org_orekit_propagation_events_InterSatDirectViewDetector_H
#define org_orekit_propagation_events_InterSatDirectViewDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class InterSatDirectViewDetector;
      }
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
            mid_init$_3ce4e2f1b1430b52,
            mid_g_1bbf81d80c47ecdd,
            mid_getCentralBody_0c55bd1adf955c4c,
            mid_getSecondary_dec199e86bf037eb,
            mid_getSkimmingAltitude_557b8123390d8d0c,
            mid_withSkimmingAltitude_d29130d5933edbf5,
            mid_create_1fdcc4c399e43d59,
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
