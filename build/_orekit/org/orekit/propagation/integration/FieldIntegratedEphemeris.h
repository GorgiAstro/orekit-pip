#ifndef org_orekit_propagation_integration_FieldIntegratedEphemeris_H
#define org_orekit_propagation_integration_FieldIntegratedEphemeris_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class FieldStateMapper;
      }
      class FieldBoundedPropagator;
      class PropagationType;
      class FieldSpacecraftState;
      class FieldAdditionalStateProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldArrayDictionary;
      class ParameterDriver;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      class FieldDenseOutputModel;
    }
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
            mid_init$_17e9d8e90cccc843,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getInitialState_a553824829fc2514,
            mid_getMaxDate_09b0a926600dfc14,
            mid_getMinDate_09b0a926600dfc14,
            mid_getPVCoordinates_0e277b7d6a64b75a,
            mid_getParametersDrivers_a6156df500549a58,
            mid_resetInitialState_52154b94d63e10ed,
            mid_getMass_7bc0fd76ee915b72,
            mid_resetIntermediateState_c76342d42407aa3d,
            mid_propagateOrbit_edf76d94987be4ff,
            mid_basicPropagate_85b5a3e9101d7c1f,
            mid_updateAdditionalStates_db7b9ef879f5b135,
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
