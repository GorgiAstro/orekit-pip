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
            mid_init$_28738e8e2908a758,
            mid_init$_7ba0066c3da684ac,
            mid_getLofCartesianOrbitalParametersEvolution_d3d345fa5646ea3c,
            mid_getLofType_fc5c5809abf07d72,
            mid_getMeasurementsParametersEvolution_d3d345fa5646ea3c,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_getProcessNoiseMatrix_158686209bf6089c,
            mid_getPropagationParametersEvolution_d3d345fa5646ea3c,
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
