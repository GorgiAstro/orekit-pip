#ifndef org_orekit_propagation_analytical_tle_FieldTLEPropagator_H
#define org_orekit_propagation_analytical_tle_FieldTLEPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          class FieldTLEPropagator;
          class FieldTLE;
        }
      }
      class FieldSpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
      class FieldPVCoordinates;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
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
              mid_getFrame_b86f9f61d97a7244,
              mid_getMU_dff5885c2c873297,
              mid_getPVCoordinates_4be26760bff65485,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getTLE_56b0e40317713723,
              mid_propagateOrbit_3de5e0312fd3e848,
              mid_resetInitialState_1463d3d0d52f94dd,
              mid_selectExtrapolator_2c3a8cfbb74b168e,
              mid_selectExtrapolator_320b8f6fd71085ef,
              mid_selectExtrapolator_3d23e0121ca554b4,
              mid_selectExtrapolator_abab29bda75d0bc7,
              mid_getMass_2a5f05be83ff251d,
              mid_resetIntermediateState_33f1c56ea7775d4e,
              mid_sxpInitialize_72479ee08453ef97,
              mid_sxpPropagate_bee5c8ff86f4e777,
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
