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
      namespace events {
        class FieldEclipseDetector;
      }
      class FieldSpacecraftState;
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
            mid_init$_3979746d0d706f9d,
            mid_init$_fc567f1ee9fa3873,
            mid_g_2203631097e94c79,
            mid_getMargin_81520b552cb3fa26,
            mid_getOccultationEngine_cf1cac2b0ace2d84,
            mid_getTotalEclipse_9ab94ac1dc23b105,
            mid_withMargin_1023bd88f375494d,
            mid_withPenumbra_44191736a65d260e,
            mid_withUmbra_44191736a65d260e,
            mid_create_51c949e45e1de493,
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
