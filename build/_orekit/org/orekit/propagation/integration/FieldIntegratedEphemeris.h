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
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class PropagationType;
      namespace integration {
        class FieldStateMapper;
      }
      class FieldAdditionalStateProvider;
      class FieldSpacecraftState;
      class FieldBoundedPropagator;
    }
    namespace utils {
      class FieldArrayDictionary;
      class ParameterDriver;
      class TimeStampedFieldPVCoordinates;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class FieldIntegratedEphemeris : public ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_5a0fc6c09d7cf9a1,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInitialState_fba6d56f8dbc98d0,
            mid_getMaxDate_fa23a4301b9c83e7,
            mid_getMinDate_fa23a4301b9c83e7,
            mid_getPVCoordinates_294c5c99690f2356,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_resetInitialState_54d9efbf99822980,
            mid_getMass_140b8964300ddedf,
            mid_updateAdditionalStates_370b1acde6244b7e,
            mid_basicPropagate_70fecd201ca47d3b,
            mid_resetIntermediateState_871885b409df9d57,
            mid_propagateOrbit_f34a7a94e111b112,
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
