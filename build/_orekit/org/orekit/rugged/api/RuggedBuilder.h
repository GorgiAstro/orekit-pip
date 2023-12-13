#ifndef org_orekit_rugged_api_RuggedBuilder_H
#define org_orekit_rugged_api_RuggedBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class Rugged;
        class BodyRotatingFrameId;
        class AlgorithmId;
        class EllipsoidId;
        class InertialFrameId;
        class RuggedBuilder;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace linesensor {
        class LineSensor;
      }
      namespace raster {
        class TileUpdater;
      }
      namespace utils {
        class ExtendedEllipsoid;
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace propagation {
      class Propagator;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_addLineSensor_0d8e791d27df30bb,
            mid_build_d1370324fdb0128e,
            mid_clearLineSensors_a819b78907e17758,
            mid_getAFilter_33d67d456ec94a0c,
            mid_getAInterpolationNumber_55546ef6a647f39b,
            mid_getAberrationOfLightCorrection_9ab94ac1dc23b105,
            mid_getAlgorithm_d67e2fdbea04a3ee,
            mid_getConstantElevation_b74f83833fdad017,
            mid_getEllipsoid_dd5ed0ce6aa0aa1f,
            mid_getInertialFrame_2c51111cc6894ba1,
            mid_getLightTimeCorrection_9ab94ac1dc23b105,
            mid_getLineSensors_e62d3bb06d56d7e3,
            mid_getMaxCachedTiles_55546ef6a647f39b,
            mid_getMaxDate_c325492395d89b24,
            mid_getMinDate_c325492395d89b24,
            mid_getName_1c1fa1e935d6cdcf,
            mid_getOvershootTolerance_b74f83833fdad017,
            mid_getPVFilter_63bfdcc4b7a0536c,
            mid_getPVInterpolationNumber_55546ef6a647f39b,
            mid_getPositionsVelocities_e62d3bb06d56d7e3,
            mid_getQuaternions_e62d3bb06d56d7e3,
            mid_getRefractionCorrection_8900d038872ca946,
            mid_getTStep_b74f83833fdad017,
            mid_getTileUpdater_06701919241ec92b,
            mid_setAberrationOfLightCorrection_c4b4349a45ce869c,
            mid_setAlgorithm_0bd5e77ba3003ea0,
            mid_setConstantElevation_6bc60695d30ad32c,
            mid_setDigitalElevationModel_c0fa168f413d2840,
            mid_setEllipsoid_71122413bcbc38f5,
            mid_setEllipsoid_c60a06d336f1055b,
            mid_setLightTimeCorrection_c4b4349a45ce869c,
            mid_setName_734b91ac30d5f9b4,
            mid_setRefractionCorrection_000f48d3733ca0b3,
            mid_setTimeSpan_13b72ea77da20cee,
            mid_setTrajectory_64f033ee6d5257f0,
            mid_setTrajectory_1f518b3389bc6ba7,
            mid_setTrajectory_e178eb4a30dc0818,
            mid_setTrajectoryAndTimeSpan_81d47db2d250d02e,
            mid_storeInterpolator_9601da1efb310931,
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
