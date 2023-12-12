#ifndef org_orekit_propagation_events_FieldEclipseDetector_H
#define org_orekit_propagation_events_FieldEclipseDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
    }
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEclipseDetector;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
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

        class FieldEclipseDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_9b6fc1cd358f2cd2,
            mid_init$_aa9a75272aa75b60,
            mid_g_de1c2d709eb2829c,
            mid_getMargin_613c8f46c659f636,
            mid_getOccultationEngine_fed7baa95ffa6698,
            mid_getTotalEclipse_89b302893bdbe1f1,
            mid_withMargin_51df47e11579db04,
            mid_withPenumbra_e6d3ee8fd4b41dad,
            mid_withUmbra_e6d3ee8fd4b41dad,
            mid_create_9e9987a8275a8085,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEclipseDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEclipseDetector(const FieldEclipseDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldEclipseDetector(const ::org::hipparchus::Field &, const ::org::orekit::utils::OccultationEngine &);
          FieldEclipseDetector(const ::org::hipparchus::Field &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::hipparchus::CalculusFieldElement getMargin() const;
          ::org::orekit::utils::OccultationEngine getOccultationEngine() const;
          jboolean getTotalEclipse() const;
          FieldEclipseDetector withMargin(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldEclipseDetector withPenumbra() const;
          FieldEclipseDetector withUmbra() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEclipseDetector);
        extern PyTypeObject *PY_TYPE(FieldEclipseDetector);

        class t_FieldEclipseDetector {
        public:
          PyObject_HEAD
          FieldEclipseDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEclipseDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEclipseDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEclipseDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
