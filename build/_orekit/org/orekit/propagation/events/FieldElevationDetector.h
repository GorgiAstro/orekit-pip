#ifndef org_orekit_propagation_events_FieldElevationDetector_H
#define org_orekit_propagation_events_FieldElevationDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace models {
      class AtmosphericRefractionModel;
    }
    namespace propagation {
      namespace events {
        class FieldElevationDetector;
      }
      class FieldSpacecraftState;
    }
    namespace frames {
      class TopocentricFrame;
    }
    namespace utils {
      class ElevationMask;
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
            mid_init$_c973085a7c4e0fab,
            mid_init$_8f6abd8bda6d7bf0,
            mid_g_2203631097e94c79,
            mid_getElevationMask_ff9e909fac3867c7,
            mid_getMinElevation_b74f83833fdad017,
            mid_getRefractionModel_27f78fdf143ae88f,
            mid_getTopocentricFrame_c2b113ddceb69262,
            mid_withConstantElevation_fa443b12dce07dda,
            mid_withElevationMask_4169e22902c46375,
            mid_withRefraction_29e4a87242e1e2b4,
            mid_create_2e347afec08846f1,
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
