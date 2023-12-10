#ifndef org_orekit_rugged_refraction_AtmosphericRefraction_H
#define org_orekit_rugged_refraction_AtmosphericRefraction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        class AtmosphericComputationParameters;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace utils {
        class NormalizedGeodeticPoint;
      }
      namespace linesensor {
        class LineSensor;
        class SensorPixel;
      }
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        class BilinearInterpolatingFunction;
      }
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Boolean;
    class Class;
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
            mid_applyCorrection_a813ead3ffa4bffb,
            mid_computeGridCorrectionFunctions_2d22bd225207563d,
            mid_configureCorrectionGrid_5bf94bc89b069b4b,
            mid_deactivateComputation_0fa09c18fee449d5,
            mid_getBifLine_bc9d2a40b3c347ee,
            mid_getBifPixel_bc9d2a40b3c347ee,
            mid_getComputationParameters_cf83411fa86caecb,
            mid_isSameContext_20cc85eae3931b01,
            mid_mustBeComputed_b108b35ef48e27bd,
            mid_reactivateComputation_0fa09c18fee449d5,
            mid_setGridSteps_6f37635c3285dbdf,
            mid_setInverseLocMargin_17db3a65980d3441,
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
