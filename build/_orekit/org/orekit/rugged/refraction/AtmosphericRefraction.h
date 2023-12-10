#ifndef org_orekit_rugged_refraction_AtmosphericRefraction_H
#define org_orekit_rugged_refraction_AtmosphericRefraction_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace rugged {
      namespace refraction {
        class AtmosphericComputationParameters;
      }
      namespace utils {
        class NormalizedGeodeticPoint;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace linesensor {
        class SensorPixel;
        class LineSensor;
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
            mid_applyCorrection_af1abae4bdd3a766,
            mid_computeGridCorrectionFunctions_641321ef7bfd456d,
            mid_configureCorrectionGrid_75c5b898b43a4df8,
            mid_deactivateComputation_7ae3461a92a43152,
            mid_getBifLine_4c147bc5204adc4e,
            mid_getBifPixel_4c147bc5204adc4e,
            mid_getComputationParameters_9bd2b05eb139639e,
            mid_isSameContext_5e194cdef3826029,
            mid_mustBeComputed_e470b6d9e0d979db,
            mid_reactivateComputation_7ae3461a92a43152,
            mid_setGridSteps_8dbc1129a3c2557a,
            mid_setInverseLocMargin_77e0f9a1f260e2e5,
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
