#ifndef org_orekit_propagation_events_EclipseDetector_H
#define org_orekit_propagation_events_EclipseDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
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
            mid_init$_e2f8d857b11c9024,
            mid_init$_1718479cc62dba49,
            mid_g_432f3d328c15ec82,
            mid_getMargin_dff5885c2c873297,
            mid_getOccultationEngine_a79c04d8e5243995,
            mid_getTotalEclipse_b108b35ef48e27bd,
            mid_withMargin_7ac491b8edb69a1e,
            mid_withPenumbra_6b92ae008e2e8637,
            mid_withUmbra_6b92ae008e2e8637,
            mid_create_0007ba63619445b3,
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
