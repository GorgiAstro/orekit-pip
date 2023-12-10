#ifndef org_orekit_propagation_events_EclipseDetector_H
#define org_orekit_propagation_events_EclipseDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      namespace events {
        class EclipseDetector;
      }
      class SpacecraftState;
    }
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
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
            mid_init$_1456b99a483b5b92,
            mid_init$_8212346dfc4eeedc,
            mid_g_66a2f071e6ed0c06,
            mid_getMargin_456d9a2f64d6b28d,
            mid_getOccultationEngine_46087fa4fdbd04d6,
            mid_getTotalEclipse_e470b6d9e0d979db,
            mid_withMargin_01fa94f84695458f,
            mid_withPenumbra_7f0c6b8e674135bf,
            mid_withUmbra_7f0c6b8e674135bf,
            mid_create_746a4136f95f56a5,
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
