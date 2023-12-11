#ifndef org_orekit_propagation_analytical_tle_FieldTLEPropagator_H
#define org_orekit_propagation_analytical_tle_FieldTLEPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          class FieldTLE;
          class FieldTLEPropagator;
        }
      }
      class FieldSpacecraftState;
    }
    namespace utils {
      class FieldPVCoordinates;
      class ParameterDriver;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class FieldOrbit;
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
              mid_getFrame_6c9bc0a928c56d4e,
              mid_getMU_557b8123390d8d0c,
              mid_getPVCoordinates_bbdf40688b91577a,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getTLE_8561c1b354d95eb2,
              mid_propagateOrbit_ec5b52b8a8c77d72,
              mid_resetInitialState_b66c84a5711243d5,
              mid_selectExtrapolator_461e9e7bc90c878c,
              mid_selectExtrapolator_9e5610c6d756262c,
              mid_selectExtrapolator_d1ae87a7216a745b,
              mid_selectExtrapolator_cb040962839e03a8,
              mid_sxpInitialize_5d9c9afaca2e497c,
              mid_sxpPropagate_960efa47e0a8eec2,
              mid_resetIntermediateState_585702d5a402c590,
              mid_getMass_b884068a2c99f6ca,
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
