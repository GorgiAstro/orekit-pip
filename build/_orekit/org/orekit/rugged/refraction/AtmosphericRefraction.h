#ifndef org_orekit_rugged_refraction_AtmosphericRefraction_H
#define org_orekit_rugged_refraction_AtmosphericRefraction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace linesensor {
        class LineSensor;
        class SensorPixel;
      }
      namespace refraction {
        class AtmosphericComputationParameters;
      }
      namespace utils {
        class NormalizedGeodeticPoint;
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
            mid_applyCorrection_88676b739a4ea0ca,
            mid_computeGridCorrectionFunctions_100b59f5a1608878,
            mid_configureCorrectionGrid_6998202d78aaf9b3,
            mid_deactivateComputation_a1fa5dae97ea5ed2,
            mid_getBifLine_39d5e04e66a73298,
            mid_getBifPixel_39d5e04e66a73298,
            mid_getComputationParameters_c0286b645a347da0,
            mid_isSameContext_dd98a0a85f82fe3f,
            mid_mustBeComputed_9ab94ac1dc23b105,
            mid_reactivateComputation_a1fa5dae97ea5ed2,
            mid_setGridSteps_3313c75e3e16c428,
            mid_setInverseLocMargin_8ba9fe7a847cecad,
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
