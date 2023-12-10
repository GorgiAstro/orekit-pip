#ifndef org_orekit_rugged_api_RuggedBuilder_H
#define org_orekit_rugged_api_RuggedBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace api {
        class InertialFrameId;
        class RuggedBuilder;
        class Rugged;
        class BodyRotatingFrameId;
        class AlgorithmId;
        class EllipsoidId;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace utils {
        class ExtendedEllipsoid;
      }
      namespace raster {
        class TileUpdater;
      }
      namespace linesensor {
        class LineSensor;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class Propagator;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class OutputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        class RuggedBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_addLineSensor_900fe4fdbc2a5cf7,
            mid_build_aadda624fd91f07a,
            mid_clearLineSensors_e8cc04433d529305,
            mid_getAFilter_c14c1c09874639c8,
            mid_getAInterpolationNumber_f2f64475e4580546,
            mid_getAberrationOfLightCorrection_e470b6d9e0d979db,
            mid_getAlgorithm_41b1271dfac9173f,
            mid_getConstantElevation_456d9a2f64d6b28d,
            mid_getEllipsoid_98afe253151ec70a,
            mid_getInertialFrame_c8fe21bcdac65bf6,
            mid_getLightTimeCorrection_e470b6d9e0d979db,
            mid_getLineSensors_a6156df500549a58,
            mid_getMaxCachedTiles_f2f64475e4580546,
            mid_getMaxDate_aaa854c403487cf3,
            mid_getMinDate_aaa854c403487cf3,
            mid_getName_0090f7797e403f43,
            mid_getOvershootTolerance_456d9a2f64d6b28d,
            mid_getPVFilter_237181d932324188,
            mid_getPVInterpolationNumber_f2f64475e4580546,
            mid_getPositionsVelocities_a6156df500549a58,
            mid_getQuaternions_a6156df500549a58,
            mid_getRefractionCorrection_c5c91b8d86c254a9,
            mid_getTStep_456d9a2f64d6b28d,
            mid_getTileUpdater_cb6dc666348d6832,
            mid_setAberrationOfLightCorrection_7ba1d09925a1c2e8,
            mid_setAlgorithm_b19fe62e744ebdf7,
            mid_setConstantElevation_d31a2345d73f0c17,
            mid_setDigitalElevationModel_0351ba82c61d43d5,
            mid_setEllipsoid_bca1427d03728ac9,
            mid_setEllipsoid_15657880b2b72a4c,
            mid_setLightTimeCorrection_7ba1d09925a1c2e8,
            mid_setName_e939c6558ae8d313,
            mid_setRefractionCorrection_1221c81a5ec5d14c,
            mid_setTimeSpan_1408e731ef5a18be,
            mid_setTrajectory_515223da82db6561,
            mid_setTrajectory_26cce329645c86d6,
            mid_setTrajectory_6e1eab6eae6713b3,
            mid_setTrajectoryAndTimeSpan_355e8a475ffc4525,
            mid_storeInterpolator_255f64cf1272816f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuggedBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuggedBuilder(const RuggedBuilder& obj) : ::java::lang::Object(obj) {}

          RuggedBuilder();

          RuggedBuilder addLineSensor(const ::org::orekit::rugged::linesensor::LineSensor &) const;
          ::org::orekit::rugged::api::Rugged build() const;
          RuggedBuilder clearLineSensors() const;
          ::org::orekit::utils::AngularDerivativesFilter getAFilter() const;
          jint getAInterpolationNumber() const;
          jboolean getAberrationOfLightCorrection() const;
          ::org::orekit::rugged::api::AlgorithmId getAlgorithm() const;
          jdouble getConstantElevation() const;
          ::org::orekit::rugged::utils::ExtendedEllipsoid getEllipsoid() const;
          ::org::orekit::frames::Frame getInertialFrame() const;
          jboolean getLightTimeCorrection() const;
          ::java::util::List getLineSensors() const;
          jint getMaxCachedTiles() const;
          ::org::orekit::time::AbsoluteDate getMaxDate() const;
          ::org::orekit::time::AbsoluteDate getMinDate() const;
          ::java::lang::String getName() const;
          jdouble getOvershootTolerance() const;
          ::org::orekit::utils::CartesianDerivativesFilter getPVFilter() const;
          jint getPVInterpolationNumber() const;
          ::java::util::List getPositionsVelocities() const;
          ::java::util::List getQuaternions() const;
          ::org::orekit::rugged::refraction::AtmosphericRefraction getRefractionCorrection() const;
          jdouble getTStep() const;
          ::org::orekit::rugged::raster::TileUpdater getTileUpdater() const;
          RuggedBuilder setAberrationOfLightCorrection(jboolean) const;
          RuggedBuilder setAlgorithm(const ::org::orekit::rugged::api::AlgorithmId &) const;
          RuggedBuilder setConstantElevation(jdouble) const;
          RuggedBuilder setDigitalElevationModel(const ::org::orekit::rugged::raster::TileUpdater &, jint) const;
          RuggedBuilder setEllipsoid(const ::org::orekit::bodies::OneAxisEllipsoid &) const;
          RuggedBuilder setEllipsoid(const ::org::orekit::rugged::api::EllipsoidId &, const ::org::orekit::rugged::api::BodyRotatingFrameId &) const;
          RuggedBuilder setLightTimeCorrection(jboolean) const;
          void setName(const ::java::lang::String &) const;
          RuggedBuilder setRefractionCorrection(const ::org::orekit::rugged::refraction::AtmosphericRefraction &) const;
          RuggedBuilder setTimeSpan(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble) const;
          RuggedBuilder setTrajectory(jdouble, jint, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &, const ::org::orekit::propagation::Propagator &) const;
          RuggedBuilder setTrajectory(const ::org::orekit::rugged::api::InertialFrameId &, const ::java::util::List &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::java::util::List &, jint, const ::org::orekit::utils::AngularDerivativesFilter &) const;
          RuggedBuilder setTrajectory(const ::org::orekit::frames::Frame &, const ::java::util::List &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::java::util::List &, jint, const ::org::orekit::utils::AngularDerivativesFilter &) const;
          RuggedBuilder setTrajectoryAndTimeSpan(const ::java::io::InputStream &) const;
          void storeInterpolator(const ::java::io::OutputStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(RuggedBuilder);
        extern PyTypeObject *PY_TYPE(RuggedBuilder);

        class t_RuggedBuilder {
        public:
          PyObject_HEAD
          RuggedBuilder object;
          static PyObject *wrap_Object(const RuggedBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
