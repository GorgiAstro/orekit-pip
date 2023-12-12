#ifndef org_orekit_propagation_conversion_AbstractPropagatorBuilder_H
#define org_orekit_propagation_conversion_AbstractPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      namespace integration {
        class AdditionalDerivativesProvider;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class Orbit;
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
            mid_addAdditionalDerivativesProvider_34784b387edde43d,
            mid_deselectDynamicParameters_0640e6acf969ed28,
            mid_getAttitudeProvider_6df6b78ab9377151,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getInitialOrbitDate_7a97f7e149e79afb,
            mid_getMu_557b8123390d8d0c,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getOrbitalParametersDrivers_467d574a7997e53a,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_getPositionScale_557b8123390d8d0c,
            mid_getPropagationParametersDrivers_467d574a7997e53a,
            mid_getSelectedNormalizedParameters_a53a7513ecedada2,
            mid_resetOrbit_a9af82a1647a21f3,
            mid_setAttitudeProvider_8fa6c0c067ead7b2,
            mid_getAdditionalDerivativesProviders_0d9551367f7ecdef,
            mid_addSupportedParameters_4ccaedadb068bdeb,
            mid_setParameters_cc18240f4a737f14,
            mid_createInitialOrbit_71f9c54b5f482a59,
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
