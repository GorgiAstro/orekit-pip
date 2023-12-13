#ifndef org_orekit_rugged_api_Rugged_H
#define org_orekit_rugged_api_Rugged_H

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
      namespace differentiation {
        class Derivative;
      }
    }
  }
  namespace orekit {
    namespace rugged {
      namespace utils {
        class ExtendedEllipsoid;
        class DerivativeGenerator;
        class SpacecraftToObservedBody;
      }
      namespace linesensor {
        class LineSensor;
        class SensorPixel;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace api {
        class AlgorithmId;
      }
    }
    namespace frames {
      class Transform;
    }
    namespace bodies {
      class GeodeticPoint;
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
            mid_dateLocation_cb79a54660e78b3c,
            mid_dateLocation_22120ae0407ca8cb,
            mid_directLocation_61df8abbfc58115b,
            mid_directLocation_084fceafe328d082,
            mid_distanceBetweenLOS_42ebea2f799979f3,
            mid_distanceBetweenLOSderivatives_c8e3e81530539894,
            mid_getAlgorithm_81f0b03daeff021f,
            mid_getAlgorithmId_d67e2fdbea04a3ee,
            mid_getBodyToInertial_976d4bc81671ce42,
            mid_getEllipsoid_dd5ed0ce6aa0aa1f,
            mid_getInertialToBody_976d4bc81671ce42,
            mid_getLineSensor_4377f7d741e3b8b8,
            mid_getLineSensors_cb666ea1a15f5210,
            mid_getMaxDate_c325492395d89b24,
            mid_getMinDate_c325492395d89b24,
            mid_getName_1c1fa1e935d6cdcf,
            mid_getRefractionCorrection_8900d038872ca946,
            mid_getScToBody_cf686ec38ae38bec,
            mid_getScToInertial_976d4bc81671ce42,
            mid_inverseLocation_65ac31aa9f2ff8e2,
            mid_inverseLocation_de019a270691f75a,
            mid_inverseLocationDerivatives_4395b3d88792732c,
            mid_isAberrationOfLightCorrected_9ab94ac1dc23b105,
            mid_isInRange_a35647bda2901f54,
            mid_isLightTimeCorrected_9ab94ac1dc23b105,
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
