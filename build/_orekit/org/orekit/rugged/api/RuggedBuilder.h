#ifndef org_orekit_rugged_api_RuggedBuilder_H
#define org_orekit_rugged_api_RuggedBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace rugged {
      namespace api {
        class Rugged;
        class AlgorithmId;
        class BodyRotatingFrameId;
        class EllipsoidId;
        class RuggedBuilder;
        class InertialFrameId;
      }
      namespace refraction {
        class AtmosphericRefraction;
      }
      namespace linesensor {
        class LineSensor;
      }
      namespace utils {
        class ExtendedEllipsoid;
      }
      namespace raster {
        class TileUpdater;
      }
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
            mid_init$_ff7cb6c242604316,
            mid_addLineSensor_509fd4e7a758576e,
            mid_build_081a982fcf11ceb9,
            mid_clearLineSensors_b20cf89d3faf836e,
            mid_getAFilter_410860c8cd87dc25,
            mid_getAInterpolationNumber_d6ab429752e7c267,
            mid_getAberrationOfLightCorrection_eee3de00fe971136,
            mid_getAlgorithm_65c2eab2e30f9d2d,
            mid_getConstantElevation_9981f74b2d109da6,
            mid_getEllipsoid_bac68fc0dce2fb24,
            mid_getInertialFrame_cb151471db4570f0,
            mid_getLightTimeCorrection_eee3de00fe971136,
            mid_getLineSensors_d751c1a57012b438,
            mid_getMaxCachedTiles_d6ab429752e7c267,
            mid_getMaxDate_80e11148db499dda,
            mid_getMinDate_80e11148db499dda,
            mid_getName_d2c8eb4129821f0e,
            mid_getOvershootTolerance_9981f74b2d109da6,
            mid_getPVFilter_b9dfc27d8c56b5de,
            mid_getPVInterpolationNumber_d6ab429752e7c267,
            mid_getPositionsVelocities_d751c1a57012b438,
            mid_getQuaternions_d751c1a57012b438,
            mid_getRefractionCorrection_8a451c1ca0929e53,
            mid_getTStep_9981f74b2d109da6,
            mid_getTileUpdater_cfb26bbbcfaf5e83,
            mid_setAberrationOfLightCorrection_fe655410605a8a39,
            mid_setAlgorithm_f1fbb5e2d8caa16d,
            mid_setConstantElevation_a84f3cc81c135dc2,
            mid_setDigitalElevationModel_91358a2db18d1bf9,
            mid_setEllipsoid_1f934770a4956bbf,
            mid_setEllipsoid_5344b6eb358ce027,
            mid_setLightTimeCorrection_fe655410605a8a39,
            mid_setName_105e1eadb709d9ac,
            mid_setRefractionCorrection_aab32e69389375e6,
            mid_setTimeSpan_d7a82d387a702f32,
            mid_setTrajectory_dcc30824d40f214e,
            mid_setTrajectory_2aebaea4f78f979c,
            mid_setTrajectory_ae2bdbe1a04f4c17,
            mid_setTrajectoryAndTimeSpan_c3e750739d6274d4,
            mid_storeInterpolator_da52d6defb468793,
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
