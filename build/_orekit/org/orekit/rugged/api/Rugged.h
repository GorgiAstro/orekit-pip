#ifndef org_orekit_rugged_api_Rugged_H
#define org_orekit_rugged_api_Rugged_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Derivative;
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
  namespace orekit {
    namespace rugged {
      namespace api {
        class AlgorithmId;
      }
      namespace utils {
        class ExtendedEllipsoid;
        class SpacecraftToObservedBody;
        class DerivativeGenerator;
      }
      namespace linesensor {
        class SensorPixel;
        class LineSensor;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace frames {
      class Transform;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        class Rugged : public ::java::lang::Object {
         public:
          enum {
            mid_dateLocation_03c804cd85b6a606,
            mid_dateLocation_4c87d707b4cb76cf,
            mid_directLocation_ebdd52895fb08f8a,
            mid_directLocation_5aa64d851a121163,
            mid_distanceBetweenLOS_dba97cfe7c1da25e,
            mid_distanceBetweenLOSderivatives_ff26bf7eeebd9c0d,
            mid_getAlgorithm_a215ec96f5ff8add,
            mid_getAlgorithmId_58f1b48b3d6060f9,
            mid_getBodyToInertial_df04e3927954349e,
            mid_getEllipsoid_3aefdf5430f1346a,
            mid_getInertialToBody_df04e3927954349e,
            mid_getLineSensor_65cfb823e2102f32,
            mid_getLineSensors_12ee61573a18f417,
            mid_getMaxDate_7a97f7e149e79afb,
            mid_getMinDate_7a97f7e149e79afb,
            mid_getName_3cffd47377eca18a,
            mid_getRefractionCorrection_0f038fb48fafa13d,
            mid_getScToBody_90cfcff71c037e63,
            mid_getScToInertial_df04e3927954349e,
            mid_inverseLocation_f5527ee705393f53,
            mid_inverseLocation_1b54f398bbbd19ba,
            mid_inverseLocationDerivatives_27a17ae8dc61e6d2,
            mid_isAberrationOfLightCorrected_89b302893bdbe1f1,
            mid_isInRange_981023bfa4a8a093,
            mid_isLightTimeCorrected_89b302893bdbe1f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Rugged(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Rugged(const Rugged& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::time::AbsoluteDate dateLocation(const ::java::lang::String &, const ::org::orekit::bodies::GeodeticPoint &, jint, jint) const;
          ::org::orekit::time::AbsoluteDate dateLocation(const ::java::lang::String &, jdouble, jdouble, jint, jint) const;
          JArray< ::org::orekit::bodies::GeodeticPoint > directLocation(const ::java::lang::String &, jdouble) const;
          ::org::orekit::bodies::GeodeticPoint directLocation(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          JArray< jdouble > distanceBetweenLOS(const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::rugged::utils::SpacecraftToObservedBody &, const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > distanceBetweenLOSderivatives(const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::rugged::utils::SpacecraftToObservedBody &, const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
          ::org::orekit::rugged::intersection::IntersectionAlgorithm getAlgorithm() const;
          ::org::orekit::rugged::api::AlgorithmId getAlgorithmId() const;
          ::org::orekit::frames::Transform getBodyToInertial(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::rugged::utils::ExtendedEllipsoid getEllipsoid() const;
          ::org::orekit::frames::Transform getInertialToBody(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::rugged::linesensor::LineSensor getLineSensor(const ::java::lang::String &) const;
          ::java::util::Collection getLineSensors() const;
          ::org::orekit::time::AbsoluteDate getMaxDate() const;
          ::org::orekit::time::AbsoluteDate getMinDate() const;
          ::java::lang::String getName() const;
          ::org::orekit::rugged::refraction::AtmosphericRefraction getRefractionCorrection() const;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody getScToBody() const;
          ::org::orekit::frames::Transform getScToInertial(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::rugged::linesensor::SensorPixel inverseLocation(const ::java::lang::String &, const ::org::orekit::bodies::GeodeticPoint &, jint, jint) const;
          ::org::orekit::rugged::linesensor::SensorPixel inverseLocation(const ::java::lang::String &, jdouble, jdouble, jint, jint) const;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > inverseLocationDerivatives(const ::java::lang::String &, const ::org::orekit::bodies::GeodeticPoint &, jint, jint, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
          jboolean isAberrationOfLightCorrected() const;
          jboolean isInRange(const ::org::orekit::time::AbsoluteDate &) const;
          jboolean isLightTimeCorrected() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        extern PyType_Def PY_TYPE_DEF(Rugged);
        extern PyTypeObject *PY_TYPE(Rugged);

        class t_Rugged {
        public:
          PyObject_HEAD
          Rugged object;
          static PyObject *wrap_Object(const Rugged&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
