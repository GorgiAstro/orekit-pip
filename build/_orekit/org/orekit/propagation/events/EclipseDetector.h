#ifndef org_orekit_propagation_events_EclipseDetector_H
#define org_orekit_propagation_events_EclipseDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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
            mid_init$_98d17cd2942d5a00,
            mid_init$_f54f987ffc77d8f9,
            mid_g_a17ea857ce74d258,
            mid_getMargin_b74f83833fdad017,
            mid_getOccultationEngine_cf1cac2b0ace2d84,
            mid_getTotalEclipse_9ab94ac1dc23b105,
            mid_withMargin_b8ad17ca08f1a64c,
            mid_withPenumbra_a74f8090f9a10174,
            mid_withUmbra_a74f8090f9a10174,
            mid_create_73841b33fb389194,
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
