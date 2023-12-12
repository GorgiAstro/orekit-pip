#ifndef org_orekit_rugged_refraction_AtmosphericRefraction_H
#define org_orekit_rugged_refraction_AtmosphericRefraction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
      namespace linesensor {
        class SensorPixel;
        class LineSensor;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace refraction {
        class AtmosphericComputationParameters;
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
            mid_applyCorrection_981eb3dc755df9fc,
            mid_computeGridCorrectionFunctions_7f8f3b09c1fc49ca,
            mid_configureCorrectionGrid_03c83376fa653679,
            mid_deactivateComputation_0640e6acf969ed28,
            mid_getBifLine_21978c3787844e9d,
            mid_getBifPixel_21978c3787844e9d,
            mid_getComputationParameters_68f95f8b3d5bc1b9,
            mid_isSameContext_81615cd59e7dd174,
            mid_mustBeComputed_89b302893bdbe1f1,
            mid_reactivateComputation_0640e6acf969ed28,
            mid_setGridSteps_a84c9a223722150c,
            mid_setInverseLocMargin_10f281d777284cea,
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
