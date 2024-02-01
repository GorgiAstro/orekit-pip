#ifndef org_orekit_propagation_analytical_tle_FieldTLEPropagator_H
#define org_orekit_propagation_analytical_tle_FieldTLEPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class FieldPVCoordinates;
      class ParameterDriver;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class FieldTLEPropagator;
          class FieldTLE;
        }
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace frames {
      class Frame;
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
              mid_getFrame_cb151471db4570f0,
              mid_getMU_9981f74b2d109da6,
              mid_getPVCoordinates_4ef316d943d48c55,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getTLE_f2ca7288b87b2f7c,
              mid_propagateOrbit_78985b34baac5c8e,
              mid_resetInitialState_8062511934471166,
              mid_selectExtrapolator_2f7a1e2c44d03382,
              mid_selectExtrapolator_b0f4204af1b344f4,
              mid_selectExtrapolator_56cd94c915049917,
              mid_selectExtrapolator_910643d05d65b410,
              mid_getMass_cf010978f3c5a913,
              mid_resetIntermediateState_e90aea08a7a0ab5e,
              mid_sxpInitialize_77e61a645c496adc,
              mid_sxpPropagate_8556964e7b03aae6,
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
