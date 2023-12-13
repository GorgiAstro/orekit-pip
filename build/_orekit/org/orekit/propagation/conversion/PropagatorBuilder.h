#ifndef org_orekit_propagation_conversion_PropagatorBuilder_H
#define org_orekit_propagation_conversion_PropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace leastsquares {
        class AbstractBatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
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
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PropagatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_buildLeastSquaresModel_1a4dd1f247347a8f,
            mid_buildPropagator_708cc138373fff03,
            mid_copy_563e3d88178dadb8,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInitialOrbitDate_c325492395d89b24,
            mid_getMu_b74f83833fdad017,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getOrbitalParametersDrivers_cfb822366e8ab425,
            mid_getPositionAngleType_c25055891f180348,
            mid_getPropagationParametersDrivers_cfb822366e8ab425,
            mid_getSelectedNormalizedParameters_25e1757a36c4dde2,
            mid_resetOrbit_69b47a274eed440d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PropagatorBuilder(const PropagatorBuilder& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          PropagatorBuilder copy() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::time::AbsoluteDate getInitialOrbitDate() const;
          jdouble getMu() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::utils::ParameterDriversList getOrbitalParametersDrivers() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          ::org::orekit::utils::ParameterDriversList getPropagationParametersDrivers() const;
          JArray< jdouble > getSelectedNormalizedParameters() const;
          void resetOrbit(const ::org::orekit::orbits::Orbit &) const;
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
        extern PyType_Def PY_TYPE_DEF(PropagatorBuilder);
        extern PyTypeObject *PY_TYPE(PropagatorBuilder);

        class t_PropagatorBuilder {
        public:
          PyObject_HEAD
          PropagatorBuilder object;
          static PyObject *wrap_Object(const PropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
