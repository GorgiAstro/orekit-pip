#ifndef org_orekit_estimation_sequential_UnivariateProcessNoise_H
#define org_orekit_estimation_sequential_UnivariateProcessNoise_H

#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOFType;
    }
    namespace orbits {
      class PositionAngleType;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
    namespace linear {
      class RealMatrix;
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
            mid_init$_1e001b156a10ad6c,
            mid_init$_4aef5b207af85e2e,
            mid_getLofCartesianOrbitalParametersEvolution_5b53c549b006d2aa,
            mid_getLofType_f183bcc89f4a1412,
            mid_getMeasurementsParametersEvolution_5b53c549b006d2aa,
            mid_getPositionAngleType_c25055891f180348,
            mid_getProcessNoiseMatrix_18b28191c1378912,
            mid_getPropagationParametersEvolution_5b53c549b006d2aa,
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
