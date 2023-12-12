#ifndef org_orekit_propagation_events_EclipseDetector_H
#define org_orekit_propagation_events_EclipseDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
    }
    namespace propagation {
      namespace events {
        class EclipseDetector;
      }
      class SpacecraftState;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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

        class EclipseDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_0ef01684d428ac9c,
            mid_init$_96b8e1d4ccad7364,
            mid_g_1bbf81d80c47ecdd,
            mid_getMargin_557b8123390d8d0c,
            mid_getOccultationEngine_fed7baa95ffa6698,
            mid_getTotalEclipse_89b302893bdbe1f1,
            mid_withMargin_a1fde6d5872cd52e,
            mid_withPenumbra_76e14f3742e5da58,
            mid_withUmbra_76e14f3742e5da58,
            mid_create_c1aaa24ee2ef77a7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EclipseDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EclipseDetector(const EclipseDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          EclipseDetector(const ::org::orekit::utils::OccultationEngine &);
          EclipseDetector(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          jdouble getMargin() const;
          ::org::orekit::utils::OccultationEngine getOccultationEngine() const;
          jboolean getTotalEclipse() const;
          EclipseDetector withMargin(jdouble) const;
          EclipseDetector withPenumbra() const;
          EclipseDetector withUmbra() const;
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
        extern PyType_Def PY_TYPE_DEF(EclipseDetector);
        extern PyTypeObject *PY_TYPE(EclipseDetector);

        class t_EclipseDetector {
        public:
          PyObject_HEAD
          EclipseDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EclipseDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EclipseDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EclipseDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
