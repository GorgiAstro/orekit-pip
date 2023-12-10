#ifndef org_orekit_rugged_api_RuggedBuilder_H
#define org_orekit_rugged_api_RuggedBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class Rugged;
        class InertialFrameId;
        class EllipsoidId;
        class AlgorithmId;
        class RuggedBuilder;
        class BodyRotatingFrameId;
      }
      namespace raster {
        class TileUpdater;
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
      class AngularDerivativesFilter;
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace propagation {
      class Propagator;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace frames {
      class Frame;
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
            mid_init$_0fa09c18fee449d5,
            mid_addLineSensor_d46e5d4c4ec262ff,
            mid_build_a3579a23a3f3f05f,
            mid_clearLineSensors_c1850c6a9b11703c,
            mid_getAFilter_3d53ef1ca7ad5f8c,
            mid_getAInterpolationNumber_570ce0828f81a2c1,
            mid_getAberrationOfLightCorrection_b108b35ef48e27bd,
            mid_getAlgorithm_da9f33328b8f3962,
            mid_getConstantElevation_dff5885c2c873297,
            mid_getEllipsoid_0cd7cb35607f9c90,
            mid_getInertialFrame_b86f9f61d97a7244,
            mid_getLightTimeCorrection_b108b35ef48e27bd,
            mid_getLineSensors_2afa36052df4765d,
            mid_getMaxCachedTiles_570ce0828f81a2c1,
            mid_getMaxDate_85703d13e302437e,
            mid_getMinDate_85703d13e302437e,
            mid_getName_11b109bd155ca898,
            mid_getOvershootTolerance_dff5885c2c873297,
            mid_getPVFilter_16e9a7b5414faf2d,
            mid_getPVInterpolationNumber_570ce0828f81a2c1,
            mid_getPositionsVelocities_2afa36052df4765d,
            mid_getQuaternions_2afa36052df4765d,
            mid_getRefractionCorrection_8a9b3bb0455f2a2d,
            mid_getTStep_dff5885c2c873297,
            mid_getTileUpdater_6b8556435f5a4994,
            mid_setAberrationOfLightCorrection_e8c0e4822609da67,
            mid_setAlgorithm_9c10cc76da81de16,
            mid_setConstantElevation_ba7a898f5e37d3f3,
            mid_setDigitalElevationModel_10e209a6feba6833,
            mid_setEllipsoid_7a6317d70e281d65,
            mid_setEllipsoid_516a7e7aea2a14bd,
            mid_setLightTimeCorrection_e8c0e4822609da67,
            mid_setName_d0bc48d5b00dc40c,
            mid_setRefractionCorrection_79942275284be399,
            mid_setTimeSpan_26c0baa1e059a0c8,
            mid_setTrajectory_f72ae43d21f8c96d,
            mid_setTrajectory_62378cbd85368de2,
            mid_setTrajectory_6b1ad96c5d4f0da8,
            mid_setTrajectoryAndTimeSpan_49755b1a1d43b661,
            mid_storeInterpolator_fd7cb6689cfa6eeb,
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
