#ifndef org_orekit_propagation_events_FieldElevationDetector_H
#define org_orekit_propagation_events_FieldElevationDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldElevationDetector;
      }
    }
    namespace utils {
      class ElevationMask;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace models {
      class AtmosphericRefractionModel;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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

        class FieldElevationDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_5ad0e9bb8a1deb62,
            mid_init$_d8af0e993415b2eb,
            mid_g_de1c2d709eb2829c,
            mid_getElevationMask_d8e21ec66d7f6ed7,
            mid_getMinElevation_557b8123390d8d0c,
            mid_getRefractionModel_9124ab694682a769,
            mid_getTopocentricFrame_2bb3e750d93d59cc,
            mid_withConstantElevation_b9a578648b0acaab,
            mid_withElevationMask_7455425acfa093e7,
            mid_withRefraction_8bb5322c8d1891db,
            mid_create_27ce6ca4fbdc0588,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldElevationDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldElevationDetector(const FieldElevationDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldElevationDetector(const ::org::hipparchus::Field &, const ::org::orekit::frames::TopocentricFrame &);
          FieldElevationDetector(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::TopocentricFrame &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::utils::ElevationMask getElevationMask() const;
          jdouble getMinElevation() const;
          ::org::orekit::models::AtmosphericRefractionModel getRefractionModel() const;
          ::org::orekit::frames::TopocentricFrame getTopocentricFrame() const;
          FieldElevationDetector withConstantElevation(jdouble) const;
          FieldElevationDetector withElevationMask(const ::org::orekit::utils::ElevationMask &) const;
          FieldElevationDetector withRefraction(const ::org::orekit::models::AtmosphericRefractionModel &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldElevationDetector);
        extern PyTypeObject *PY_TYPE(FieldElevationDetector);

        class t_FieldElevationDetector {
        public:
          PyObject_HEAD
          FieldElevationDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldElevationDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldElevationDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldElevationDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
