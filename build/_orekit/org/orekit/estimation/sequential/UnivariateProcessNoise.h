#ifndef org_orekit_estimation_sequential_UnivariateProcessNoise_H
#define org_orekit_estimation_sequential_UnivariateProcessNoise_H

#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
    }
    namespace frames {
      class LOFType;
    }
    namespace propagation {
      class SpacecraftState;
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
    namespace estimation {
      namespace sequential {

        class UnivariateProcessNoise : public ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider {
         public:
          enum {
            mid_init$_da56bfb3586596d3,
            mid_init$_8b85f6a74f87586c,
            mid_getLofCartesianOrbitalParametersEvolution_21d51b42b1c70b62,
            mid_getLofType_2ef6889b4bcd6216,
            mid_getMeasurementsParametersEvolution_21d51b42b1c70b62,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getProcessNoiseMatrix_70abd86226561523,
            mid_getPropagationParametersEvolution_21d51b42b1c70b62,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateProcessNoise(jobject obj) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateProcessNoise(const UnivariateProcessNoise& obj) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(obj) {}

          UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::frames::LOFType &, const ::org::orekit::orbits::PositionAngleType &, const JArray< ::org::hipparchus::analysis::UnivariateFunction > &, const JArray< ::org::hipparchus::analysis::UnivariateFunction > &);
          UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::frames::LOFType &, const ::org::orekit::orbits::PositionAngleType &, const JArray< ::org::hipparchus::analysis::UnivariateFunction > &, const JArray< ::org::hipparchus::analysis::UnivariateFunction > &, const JArray< ::org::hipparchus::analysis::UnivariateFunction > &);

          JArray< ::org::hipparchus::analysis::UnivariateFunction > getLofCartesianOrbitalParametersEvolution() const;
          ::org::orekit::frames::LOFType getLofType() const;
          JArray< ::org::hipparchus::analysis::UnivariateFunction > getMeasurementsParametersEvolution() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          ::org::hipparchus::linear::RealMatrix getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::SpacecraftState &) const;
          JArray< ::org::hipparchus::analysis::UnivariateFunction > getPropagationParametersEvolution() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        extern PyType_Def PY_TYPE_DEF(UnivariateProcessNoise);
        extern PyTypeObject *PY_TYPE(UnivariateProcessNoise);

        class t_UnivariateProcessNoise {
        public:
          PyObject_HEAD
          UnivariateProcessNoise object;
          static PyObject *wrap_Object(const UnivariateProcessNoise&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
