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
            mid_init$_19ffed36940b07e1,
            mid_init$_81366f164ddc07cb,
            mid_g_b443ba1cc794b916,
            mid_getMargin_9981f74b2d109da6,
            mid_getOccultationEngine_06e3ea62eb505e97,
            mid_getTotalEclipse_eee3de00fe971136,
            mid_withMargin_33964b00c0809563,
            mid_withPenumbra_6a8b740679ff741d,
            mid_withUmbra_6a8b740679ff741d,
            mid_create_344da2a0a01f36e4,
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
