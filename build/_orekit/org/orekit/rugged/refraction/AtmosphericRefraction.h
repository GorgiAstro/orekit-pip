#ifndef org_orekit_rugged_refraction_AtmosphericRefraction_H
#define org_orekit_rugged_refraction_AtmosphericRefraction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        class AtmosphericComputationParameters;
      }
      namespace linesensor {
        class LineSensor;
        class SensorPixel;
      }
      namespace utils {
        class NormalizedGeodeticPoint;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
    namespace analysis {
      namespace interpolation {
        class BilinearInterpolatingFunction;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Boolean;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        class AtmosphericRefraction : public ::java::lang::Object {
         public:
          enum {
            mid_applyCorrection_1ebaacadb4fd5fdc,
            mid_computeGridCorrectionFunctions_2510fce1121ae68c,
            mid_configureCorrectionGrid_bb9ef741884b06c3,
            mid_deactivateComputation_ff7cb6c242604316,
            mid_getBifLine_1e2b7801affc4124,
            mid_getBifPixel_1e2b7801affc4124,
            mid_getComputationParameters_a4dab8a3ecc47708,
            mid_isSameContext_910b338373e83420,
            mid_mustBeComputed_eee3de00fe971136,
            mid_reactivateComputation_ff7cb6c242604316,
            mid_setGridSteps_b5d23e6c0858e8ed,
            mid_setInverseLocMargin_1ad26e8c8c0cd65b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AtmosphericRefraction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AtmosphericRefraction(const AtmosphericRefraction& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &, const ::org::orekit::rugged::intersection::IntersectionAlgorithm &) const;
          void computeGridCorrectionFunctions(const JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > &) const;
          void configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor &, jint, jint) const;
          void deactivateComputation() const;
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction getBifLine() const;
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction getBifPixel() const;
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters getComputationParameters() const;
          ::java::lang::Boolean isSameContext(const ::java::lang::String &, jint, jint) const;
          jboolean mustBeComputed() const;
          void reactivateComputation() const;
          void setGridSteps(jint, jint) const;
          void setInverseLocMargin(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        extern PyType_Def PY_TYPE_DEF(AtmosphericRefraction);
        extern PyTypeObject *PY_TYPE(AtmosphericRefraction);

        class t_AtmosphericRefraction {
        public:
          PyObject_HEAD
          AtmosphericRefraction object;
          static PyObject *wrap_Object(const AtmosphericRefraction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
