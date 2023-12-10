#ifndef org_orekit_propagation_events_FieldElevationDetector_H
#define org_orekit_propagation_events_FieldElevationDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace frames {
      class TopocentricFrame;
    }
    namespace propagation {
      namespace events {
        class FieldElevationDetector;
      }
      class FieldSpacecraftState;
    }
    namespace models {
      class AtmosphericRefractionModel;
    }
    namespace utils {
      class ElevationMask;
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

        class FieldElevationDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_3d7271a8ea288af2,
            mid_init$_28fe72372b8ccb78,
            mid_g_41a008afe53da855,
            mid_getElevationMask_a2b53d9e5ddb8a2d,
            mid_getMinElevation_dff5885c2c873297,
            mid_getRefractionModel_d9410499a2583f14,
            mid_getTopocentricFrame_e17d4157ae504252,
            mid_withConstantElevation_d52caa8299348415,
            mid_withElevationMask_3cb4267e55a79185,
            mid_withRefraction_81ee95c06209bf51,
            mid_create_3709f95b71d31737,
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
