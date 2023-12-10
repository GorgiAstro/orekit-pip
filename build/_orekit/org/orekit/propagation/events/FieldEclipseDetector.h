#ifndef org_orekit_propagation_events_FieldEclipseDetector_H
#define org_orekit_propagation_events_FieldEclipseDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
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
        class FieldEclipseDetector;
      }
      class FieldSpacecraftState;
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

        class FieldEclipseDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_4d5ea8a562078a81,
            mid_init$_1bf89e9c93e81794,
            mid_g_41a008afe53da855,
            mid_getMargin_eba8e72a22c984ac,
            mid_getOccultationEngine_a79c04d8e5243995,
            mid_getTotalEclipse_b108b35ef48e27bd,
            mid_withMargin_dc9df869634ffc65,
            mid_withPenumbra_4914423b50a4170c,
            mid_withUmbra_4914423b50a4170c,
            mid_create_13c93b03c50400ac,
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
