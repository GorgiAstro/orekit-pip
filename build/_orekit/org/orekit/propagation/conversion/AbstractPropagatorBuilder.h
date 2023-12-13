#ifndef org_orekit_propagation_conversion_AbstractPropagatorBuilder_H
#define org_orekit_propagation_conversion_AbstractPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriversList;
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
    namespace frames {
      class Frame;
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
            mid_addAdditionalDerivativesProvider_687860a192ef3b84,
            mid_deselectDynamicParameters_a1fa5dae97ea5ed2,
            mid_getAttitudeProvider_331f12bb6017243b,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInitialOrbitDate_c325492395d89b24,
            mid_getMu_b74f83833fdad017,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getOrbitalParametersDrivers_cfb822366e8ab425,
            mid_getPositionAngleType_c25055891f180348,
            mid_getPositionScale_b74f83833fdad017,
            mid_getPropagationParametersDrivers_cfb822366e8ab425,
            mid_getSelectedNormalizedParameters_25e1757a36c4dde2,
            mid_resetOrbit_69b47a274eed440d,
            mid_setAttitudeProvider_8e4d3ea100bc0095,
            mid_setParameters_ab69da052b88f50c,
            mid_createInitialOrbit_b6e68c5f730fb347,
            mid_addSupportedParameters_0e7c3032c7c93ed3,
            mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3,
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
