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
            mid_init$_0a96eb6a68fe1abe,
            mid_init$_7b2d1c02d123ea44,
            mid_g_ac6fccc69d1b2d9e,
            mid_getMargin_08d37e3f77b7239d,
            mid_getOccultationEngine_06e3ea62eb505e97,
            mid_getTotalEclipse_eee3de00fe971136,
            mid_withMargin_32cc8af9a8d19fdd,
            mid_withPenumbra_e74bbc9679c66997,
            mid_withUmbra_e74bbc9679c66997,
            mid_create_8c04d329cd9e2ad2,
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
