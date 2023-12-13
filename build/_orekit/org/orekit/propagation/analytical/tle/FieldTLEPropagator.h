#ifndef org_orekit_propagation_analytical_tle_FieldTLEPropagator_H
#define org_orekit_propagation_analytical_tle_FieldTLEPropagator_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
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
              mid_getFrame_2c51111cc6894ba1,
              mid_getMU_b74f83833fdad017,
              mid_getPVCoordinates_9d94392a8a6273fa,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getTLE_6b300e1e872aa544,
              mid_propagateOrbit_f34a7a94e111b112,
              mid_resetInitialState_54d9efbf99822980,
              mid_selectExtrapolator_d26eb822374e5cdc,
              mid_selectExtrapolator_99422df6de0d8c34,
              mid_selectExtrapolator_b801e0b1aca569c9,
              mid_selectExtrapolator_8b98c2aeb28b2aaf,
              mid_getMass_140b8964300ddedf,
              mid_resetIntermediateState_871885b409df9d57,
              mid_sxpInitialize_8b0f7facc8a6a46e,
              mid_sxpPropagate_1d66803ed368a800,
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
