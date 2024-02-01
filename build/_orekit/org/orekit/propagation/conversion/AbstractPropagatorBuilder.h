#ifndef org_orekit_propagation_conversion_AbstractPropagatorBuilder_H
#define org_orekit_propagation_conversion_AbstractPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace integration {
        class AdditionalDerivativesProvider;
      }
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class AbstractPropagatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_addAdditionalDerivativesProvider_0b9db0c63a43ba8a,
            mid_deselectDynamicParameters_ff7cb6c242604316,
            mid_getAttitudeProvider_2f73d1f4460b8d6c,
            mid_getFrame_cb151471db4570f0,
            mid_getInitialOrbitDate_80e11148db499dda,
            mid_getMu_9981f74b2d109da6,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getOrbitalParametersDrivers_7c5a416c83e442be,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getPositionScale_9981f74b2d109da6,
            mid_getPropagationParametersDrivers_7c5a416c83e442be,
            mid_getSelectedNormalizedParameters_be783177b060994b,
            mid_resetOrbit_17534ef58ef3aaef,
            mid_setAttitudeProvider_fddd0a7d9f33bafa,
            mid_getAdditionalDerivativesProviders_d751c1a57012b438,
            mid_createInitialOrbit_fb241cd44f6e41bc,
            mid_setParameters_a71c45509eaf92d1,
            mid_addSupportedParameters_aa335fea495d60e0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractPropagatorBuilder(const AbstractPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

          void addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider &) const;
          void deselectDynamicParameters() const;
          ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::time::AbsoluteDate getInitialOrbitDate() const;
          jdouble getMu() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::utils::ParameterDriversList getOrbitalParametersDrivers() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          jdouble getPositionScale() const;
          ::org::orekit::utils::ParameterDriversList getPropagationParametersDrivers() const;
          JArray< jdouble > getSelectedNormalizedParameters() const;
          void resetOrbit(const ::org::orekit::orbits::Orbit &) const;
          void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(AbstractPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(AbstractPropagatorBuilder);

        class t_AbstractPropagatorBuilder {
        public:
          PyObject_HEAD
          AbstractPropagatorBuilder object;
          static PyObject *wrap_Object(const AbstractPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
