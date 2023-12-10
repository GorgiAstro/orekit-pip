#ifndef org_orekit_rugged_api_Rugged_H
#define org_orekit_rugged_api_Rugged_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class ExtendedEllipsoid;
        class SpacecraftToObservedBody;
        class DerivativeGenerator;
      }
      namespace api {
        class AlgorithmId;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace linesensor {
        class LineSensor;
        class SensorPixel;
      }
    }
    namespace frames {
      class Transform;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_dateLocation_4b5bd8dfc4d95546,
            mid_dateLocation_0a9c33ee5240487c,
            mid_directLocation_0f95dc097405fc15,
            mid_directLocation_8bbd71e6fb48822c,
            mid_distanceBetweenLOS_e3b68595272c4802,
            mid_distanceBetweenLOSderivatives_0566b28b56fff79b,
            mid_getAlgorithm_ba405a20d038fdfa,
            mid_getAlgorithmId_da9f33328b8f3962,
            mid_getBodyToInertial_687985c59478d29c,
            mid_getEllipsoid_0cd7cb35607f9c90,
            mid_getInertialToBody_687985c59478d29c,
            mid_getLineSensor_c2bbc89b7ea3d3c3,
            mid_getLineSensors_37528d110cff6b74,
            mid_getMaxDate_85703d13e302437e,
            mid_getMinDate_85703d13e302437e,
            mid_getName_11b109bd155ca898,
            mid_getRefractionCorrection_8a9b3bb0455f2a2d,
            mid_getScToBody_688fb4be4b33225a,
            mid_getScToInertial_687985c59478d29c,
            mid_inverseLocation_9cfd359020f7e00c,
            mid_inverseLocation_a03b661721787aa2,
            mid_inverseLocationDerivatives_f6f19c5a49ccc008,
            mid_isAberrationOfLightCorrected_b108b35ef48e27bd,
            mid_isInRange_db6d81809797ddaa,
            mid_isLightTimeCorrected_b108b35ef48e27bd,
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
