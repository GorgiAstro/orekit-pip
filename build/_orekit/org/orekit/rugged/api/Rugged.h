#ifndef org_orekit_rugged_api_Rugged_H
#define org_orekit_rugged_api_Rugged_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class DerivativeGenerator;
        class ExtendedEllipsoid;
        class SpacecraftToObservedBody;
      }
      namespace api {
        class AlgorithmId;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace linesensor {
        class SensorPixel;
        class LineSensor;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Transform;
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
      namespace differentiation {
        class Derivative;
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
            mid_dateLocation_2c41494519aab02c,
            mid_dateLocation_9d3e14a06d0b2344,
            mid_directLocation_6b3e9bc65f70f68b,
            mid_directLocation_70b9e0efe6611035,
            mid_distanceBetweenLOS_b88fa7195e9e7517,
            mid_distanceBetweenLOSderivatives_982b0f0601e6abd4,
            mid_getAlgorithm_0d3941fface9e0dd,
            mid_getAlgorithmId_41b1271dfac9173f,
            mid_getBodyToInertial_d55545a64ea4a9a7,
            mid_getEllipsoid_98afe253151ec70a,
            mid_getInertialToBody_d55545a64ea4a9a7,
            mid_getLineSensor_09ab37db90b051e6,
            mid_getLineSensors_cfcfd130f9013e3e,
            mid_getMaxDate_aaa854c403487cf3,
            mid_getMinDate_aaa854c403487cf3,
            mid_getName_0090f7797e403f43,
            mid_getRefractionCorrection_c5c91b8d86c254a9,
            mid_getScToBody_38f80fac5aafac2a,
            mid_getScToInertial_d55545a64ea4a9a7,
            mid_inverseLocation_f77004ec6f045f2e,
            mid_inverseLocation_3b69cb1d1085b47e,
            mid_inverseLocationDerivatives_9169f46e89806c98,
            mid_isAberrationOfLightCorrected_e470b6d9e0d979db,
            mid_isInRange_ee2067c5768b6768,
            mid_isLightTimeCorrected_e470b6d9e0d979db,
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
