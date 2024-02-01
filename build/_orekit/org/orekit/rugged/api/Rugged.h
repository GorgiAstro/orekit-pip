#ifndef org_orekit_rugged_api_Rugged_H
#define org_orekit_rugged_api_Rugged_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class AlgorithmId;
      }
      namespace linesensor {
        class LineSensor;
        class SensorPixel;
      }
      namespace utils {
        class ExtendedEllipsoid;
        class DerivativeGenerator;
        class SpacecraftToObservedBody;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Transform;
    }
    namespace bodies {
      class GeodeticPoint;
    }
  }
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
            mid_dateLocation_dc12e0e6c5b4455d,
            mid_dateLocation_3791171da7cdd1eb,
            mid_directLocation_43ad5867a50451cc,
            mid_directLocation_537d8ec1682936c5,
            mid_distanceBetweenLOS_8f1cdea02beae019,
            mid_distanceBetweenLOSderivatives_064e079069cdbe83,
            mid_getAlgorithm_dc4cbf7a93096651,
            mid_getAlgorithmId_65c2eab2e30f9d2d,
            mid_getBodyToInertial_02ca17ac51b6a4b2,
            mid_getEllipsoid_bac68fc0dce2fb24,
            mid_getInertialToBody_02ca17ac51b6a4b2,
            mid_getLineSensor_3ab0865e486f5c39,
            mid_getLineSensors_3bfef5c77ceb081a,
            mid_getMaxDate_80e11148db499dda,
            mid_getMinDate_80e11148db499dda,
            mid_getName_d2c8eb4129821f0e,
            mid_getRefractionCorrection_8a451c1ca0929e53,
            mid_getScToBody_a784fa07890a0e9f,
            mid_getScToInertial_02ca17ac51b6a4b2,
            mid_inverseLocation_92e488e30346bcdc,
            mid_inverseLocation_da92dc38449d384a,
            mid_inverseLocationDerivatives_9d08c2713397ffba,
            mid_isAberrationOfLightCorrected_eee3de00fe971136,
            mid_isInRange_b16e79ba1b2830a1,
            mid_isLightTimeCorrected_eee3de00fe971136,
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
