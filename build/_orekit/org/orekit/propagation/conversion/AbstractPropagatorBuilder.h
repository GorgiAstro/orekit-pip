#ifndef org_orekit_propagation_conversion_AbstractPropagatorBuilder_H
#define org_orekit_propagation_conversion_AbstractPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      namespace integration {
        class AdditionalDerivativesProvider;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_addAdditionalDerivativesProvider_3192623a36e6dd4e,
            mid_deselectDynamicParameters_0fa09c18fee449d5,
            mid_getAttitudeProvider_a904f3d015a354a0,
            mid_getFrame_b86f9f61d97a7244,
            mid_getInitialOrbitDate_85703d13e302437e,
            mid_getMu_dff5885c2c873297,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getOrbitalParametersDrivers_bd51074bfd9d41da,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_getPositionScale_dff5885c2c873297,
            mid_getPropagationParametersDrivers_bd51074bfd9d41da,
            mid_getSelectedNormalizedParameters_60c7040667a7dc5c,
            mid_resetOrbit_6219f6b430651d68,
            mid_setAttitudeProvider_3cff7c75ea06698c,
            mid_getAdditionalDerivativesProviders_2afa36052df4765d,
            mid_createInitialOrbit_cde5690bfa4f9649,
            mid_addSupportedParameters_de3e021e7266b71e,
            mid_setParameters_fa9d415d19f69361,
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
