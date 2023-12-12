#ifndef org_orekit_propagation_integration_FieldIntegratedEphemeris_H
#define org_orekit_propagation_integration_FieldIntegratedEphemeris_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
      class FieldSpacecraftState;
      namespace integration {
        class FieldStateMapper;
      }
      class FieldAdditionalStateProvider;
      class FieldBoundedPropagator;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldArrayDictionary;
      class ParameterDriver;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace ode {
      class FieldDenseOutputModel;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class FieldIntegratedEphemeris : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_abb29bc47afd3aba,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getInitialState_381b3e011cde018d,
            mid_getMaxDate_f1fe4daf77c66560,
            mid_getMinDate_f1fe4daf77c66560,
            mid_getPVCoordinates_4ac52e75113a03db,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_resetInitialState_b66c84a5711243d5,
            mid_propagateOrbit_ec5b52b8a8c77d72,
            mid_resetIntermediateState_585702d5a402c590,
            mid_getMass_b884068a2c99f6ca,
            mid_updateAdditionalStates_4f12774dd382c6f4,
            mid_basicPropagate_5324cbf9e5ce58fe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldIntegratedEphemeris(jobject obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldIntegratedEphemeris(const FieldIntegratedEphemeris& obj) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(obj) {}

          FieldIntegratedEphemeris(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::propagation::integration::FieldStateMapper &, const ::org::orekit::propagation::PropagationType &, const ::org::hipparchus::ode::FieldDenseOutputModel &, const ::org::orekit::utils::FieldArrayDictionary &, const ::java::util::List &, const JArray< ::java::lang::String > &, const JArray< jint > &);

          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::propagation::FieldSpacecraftState getInitialState() const;
          ::org::orekit::time::FieldAbsoluteDate getMaxDate() const;
          ::org::orekit::time::FieldAbsoluteDate getMinDate() const;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
          ::java::util::List getParametersDrivers() const;
          void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(FieldIntegratedEphemeris);
        extern PyTypeObject *PY_TYPE(FieldIntegratedEphemeris);

        class t_FieldIntegratedEphemeris {
        public:
          PyObject_HEAD
          FieldIntegratedEphemeris object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldIntegratedEphemeris *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldIntegratedEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldIntegratedEphemeris&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
