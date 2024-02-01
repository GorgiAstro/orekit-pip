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
    namespace models {
      class AtmosphericRefractionModel;
    }
    namespace utils {
      class ElevationMask;
    }
    namespace frames {
      class TopocentricFrame;
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

        class FieldElevationDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_436068c1e3731f99,
            mid_init$_81061941a46d050d,
            mid_g_ac6fccc69d1b2d9e,
            mid_getElevationMask_6e01f84e52d7314a,
            mid_getMinElevation_9981f74b2d109da6,
            mid_getRefractionModel_426fe98fa4f4b893,
            mid_getTopocentricFrame_d0e5c3c9d5578806,
            mid_withConstantElevation_fef41422b7c30441,
            mid_withElevationMask_a25b97231c4f33fc,
            mid_withRefraction_0ec508eb922ace36,
            mid_create_513df2e4a69421da,
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
