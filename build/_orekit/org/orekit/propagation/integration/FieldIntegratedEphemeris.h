#ifndef org_orekit_propagation_integration_FieldIntegratedEphemeris_H
#define org_orekit_propagation_integration_FieldIntegratedEphemeris_H

#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      class FieldDenseOutputModel;
    }
  }
  namespace orekit {
    namespace propagation {
      class FieldBoundedPropagator;
      namespace integration {
        class FieldStateMapper;
      }
      class FieldSpacecraftState;
      class PropagationType;
      class FieldAdditionalStateProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
      class FieldArrayDictionary;
      class TimeStampedFieldPVCoordinates;
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
            mid_init$_f22820b10b676d9e,
            mid_getFrame_b86f9f61d97a7244,
            mid_getInitialState_02cea343d9f71933,
            mid_getMaxDate_51da00d5b8a3b5df,
            mid_getMinDate_51da00d5b8a3b5df,
            mid_getPVCoordinates_2cdae1c350dc3e9a,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_resetInitialState_1463d3d0d52f94dd,
            mid_propagateOrbit_3de5e0312fd3e848,
            mid_getMass_2a5f05be83ff251d,
            mid_resetIntermediateState_33f1c56ea7775d4e,
            mid_updateAdditionalStates_25e81e971666cba6,
            mid_basicPropagate_f6f1ea8aef3019eb,
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
