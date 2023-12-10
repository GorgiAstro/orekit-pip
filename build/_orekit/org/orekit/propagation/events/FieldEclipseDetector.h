#ifndef org_orekit_propagation_events_FieldEclipseDetector_H
#define org_orekit_propagation_events_FieldEclipseDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEclipseDetector;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class OccultationEngine;
      class ExtendedPVCoordinatesProvider;
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
            mid_init$_3efd530a0f52f364,
            mid_init$_f5f8b7afd5a04314,
            mid_g_cc79c2733879de35,
            mid_getMargin_e6d4d3215c30992a,
            mid_getOccultationEngine_46087fa4fdbd04d6,
            mid_getTotalEclipse_e470b6d9e0d979db,
            mid_withMargin_d5dbbb4d93239f46,
            mid_withPenumbra_6ba4340e79e92d45,
            mid_withUmbra_6ba4340e79e92d45,
            mid_create_6e92307659afced2,
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
