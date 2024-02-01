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
      class FieldAdditionalStateProvider;
      namespace integration {
        class FieldStateMapper;
      }
      class FieldBoundedPropagator;
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldArrayDictionary;
      class TimeStampedFieldPVCoordinates;
      class ParameterDriver;
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
            mid_init$_07450e81a75653f5,
            mid_getFrame_cb151471db4570f0,
            mid_getInitialState_a74be2e38786f3b6,
            mid_getMaxDate_1fea28374011eef5,
            mid_getMinDate_1fea28374011eef5,
            mid_getPVCoordinates_1b1a4229447f7bf7,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_resetInitialState_8062511934471166,
            mid_getMass_cf010978f3c5a913,
            mid_updateAdditionalStates_59bc90ab93a43079,
            mid_propagateOrbit_78985b34baac5c8e,
            mid_basicPropagate_fb689a9c0f30b938,
            mid_resetIntermediateState_e90aea08a7a0ab5e,
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
