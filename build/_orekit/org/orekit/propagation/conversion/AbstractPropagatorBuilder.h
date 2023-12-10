#ifndef org_orekit_propagation_conversion_AbstractPropagatorBuilder_H
#define org_orekit_propagation_conversion_AbstractPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
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
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_addAdditionalDerivativesProvider_de58ca8034102d77,
            mid_deselectDynamicParameters_7ae3461a92a43152,
            mid_getAttitudeProvider_5cce95036ae870ba,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getInitialOrbitDate_aaa854c403487cf3,
            mid_getMu_456d9a2f64d6b28d,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getOrbitalParametersDrivers_eb9e6df280c6daa0,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_getPositionScale_456d9a2f64d6b28d,
            mid_getPropagationParametersDrivers_eb9e6df280c6daa0,
            mid_getSelectedNormalizedParameters_7cdc325af0834901,
            mid_resetOrbit_e5b8a6a44355183e,
            mid_setAttitudeProvider_8109c1a27d4471d3,
            mid_getAdditionalDerivativesProviders_a6156df500549a58,
            mid_addSupportedParameters_65de9727799c5641,
            mid_createInitialOrbit_551bf685780e3c1f,
            mid_setParameters_ebc26dcaf4761286,
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
