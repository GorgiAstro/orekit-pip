#ifndef org_orekit_propagation_analytical_tle_FieldTLEPropagator_H
#define org_orekit_propagation_analytical_tle_FieldTLEPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace analytical {
        namespace tle {
          class FieldTLE;
          class FieldTLEPropagator;
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriver;
      class FieldPVCoordinates;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class FieldTLEPropagator : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
           public:
            enum {
              mid_getFrame_c8fe21bcdac65bf6,
              mid_getMU_456d9a2f64d6b28d,
              mid_getPVCoordinates_63e06c42f7e5a37c,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getTLE_d4ac4bf5ebf13f8b,
              mid_propagateOrbit_edf76d94987be4ff,
              mid_resetInitialState_52154b94d63e10ed,
              mid_selectExtrapolator_e4f800c7abd087d8,
              mid_selectExtrapolator_ece2b47b3bab7200,
              mid_selectExtrapolator_8efdc38299d5a549,
              mid_selectExtrapolator_59dbb519b052f24e,
              mid_getMass_7bc0fd76ee915b72,
              mid_sxpInitialize_4c337e4c1ec6f647,
              mid_sxpPropagate_ef0bb554ba052051,
              mid_resetIntermediateState_c76342d42407aa3d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTLEPropagator(jobject obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldTLEPropagator(const FieldTLEPropagator& obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {}

            ::org::orekit::frames::Frame getFrame() const;
            static jdouble getMU();
            ::org::orekit::utils::FieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::java::util::List getParametersDrivers() const;
            ::org::orekit::propagation::analytical::tle::FieldTLE getTLE() const;
            ::org::orekit::orbits::FieldOrbit propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
            static FieldTLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
            static FieldTLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::frames::Frame &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
            static FieldTLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
            static FieldTLEPropagator selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::Frame &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(FieldTLEPropagator);
          extern PyTypeObject *PY_TYPE(FieldTLEPropagator);

          class t_FieldTLEPropagator {
          public:
            PyObject_HEAD
            FieldTLEPropagator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldTLEPropagator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldTLEPropagator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldTLEPropagator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
