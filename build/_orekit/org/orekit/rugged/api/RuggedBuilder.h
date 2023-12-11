#ifndef org_orekit_rugged_api_RuggedBuilder_H
#define org_orekit_rugged_api_RuggedBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class TileUpdater;
      }
      namespace api {
        class AlgorithmId;
        class RuggedBuilder;
        class InertialFrameId;
        class EllipsoidId;
        class Rugged;
        class BodyRotatingFrameId;
      }
      namespace utils {
        class ExtendedEllipsoid;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace linesensor {
        class LineSensor;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
    }
    namespace propagation {
      class Propagator;
    }
    namespace frames {
      class Frame;
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
            mid_init$_0640e6acf969ed28,
            mid_addLineSensor_fb40c7e5a4534c6a,
            mid_build_f145c77b35875136,
            mid_clearLineSensors_a0a726f990ec1fc6,
            mid_getAFilter_c2e9b2b1c0db39b3,
            mid_getAInterpolationNumber_412668abc8d889e9,
            mid_getAberrationOfLightCorrection_89b302893bdbe1f1,
            mid_getAlgorithm_58f1b48b3d6060f9,
            mid_getConstantElevation_557b8123390d8d0c,
            mid_getEllipsoid_3aefdf5430f1346a,
            mid_getInertialFrame_6c9bc0a928c56d4e,
            mid_getLightTimeCorrection_89b302893bdbe1f1,
            mid_getLineSensors_0d9551367f7ecdef,
            mid_getMaxCachedTiles_412668abc8d889e9,
            mid_getMaxDate_7a97f7e149e79afb,
            mid_getMinDate_7a97f7e149e79afb,
            mid_getName_3cffd47377eca18a,
            mid_getOvershootTolerance_557b8123390d8d0c,
            mid_getPVFilter_6c4898d6ec0c3837,
            mid_getPVInterpolationNumber_412668abc8d889e9,
            mid_getPositionsVelocities_0d9551367f7ecdef,
            mid_getQuaternions_0d9551367f7ecdef,
            mid_getRefractionCorrection_0f038fb48fafa13d,
            mid_getTStep_557b8123390d8d0c,
            mid_getTileUpdater_b42c9a6955c9850d,
            mid_setAberrationOfLightCorrection_819868aea18e30c6,
            mid_setAlgorithm_3efc53d7de6d6e4c,
            mid_setConstantElevation_492b334f8354f325,
            mid_setDigitalElevationModel_67fe5e2cbb9f9806,
            mid_setEllipsoid_61119b52c99a4e60,
            mid_setEllipsoid_93bbbb1506203afc,
            mid_setLightTimeCorrection_819868aea18e30c6,
            mid_setName_f5ffdf29129ef90a,
            mid_setRefractionCorrection_d75b73d157e160dd,
            mid_setTimeSpan_27e3db4c5346f3d8,
            mid_setTrajectory_cd20452370ae1c99,
            mid_setTrajectory_ea04c9e968c214f5,
            mid_setTrajectory_a55114fcc01d72f4,
            mid_setTrajectoryAndTimeSpan_d9fe484d57b2641a,
            mid_storeInterpolator_a093374b16e6c27d,
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
