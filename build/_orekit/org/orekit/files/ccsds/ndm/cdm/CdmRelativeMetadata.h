#ifndef org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class PocMethodFacade;
          class TimeSystem;
        }
        namespace ndm {
          namespace cdm {
            class ScreenVolumeFrame;
            class ScreenVolumeShape;
            class ScreenType;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Enum;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class CdmRelativeMetadata : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_addComment_105e1eadb709d9ac,
                mid_checkNotNull_411d07b76862de9e,
                mid_checkScreenVolumeConditions_ff7cb6c242604316,
                mid_getApproachAngle_9981f74b2d109da6,
                mid_getCollisionPercentile_d6f20bd740dd34cd,
                mid_getCollisionProbaMethod_baad9ef664f2bcc1,
                mid_getCollisionProbability_9981f74b2d109da6,
                mid_getComment_d751c1a57012b438,
                mid_getConjunctionId_d2c8eb4129821f0e,
                mid_getMahalanobisDistance_9981f74b2d109da6,
                mid_getMaxCollisionProbability_9981f74b2d109da6,
                mid_getMaxCollisionProbabilityMethod_baad9ef664f2bcc1,
                mid_getMissDistance_9981f74b2d109da6,
                mid_getNextMessageEpoch_80e11148db499dda,
                mid_getPreviousMessageEpoch_80e11148db499dda,
                mid_getPreviousMessageId_d2c8eb4129821f0e,
                mid_getRelativePosition_032312bdeb3f2f93,
                mid_getRelativeSpeed_9981f74b2d109da6,
                mid_getRelativeVelocity_032312bdeb3f2f93,
                mid_getScreenEntryTime_80e11148db499dda,
                mid_getScreenExitTime_80e11148db499dda,
                mid_getScreenPcThreshold_9981f74b2d109da6,
                mid_getScreenType_6e349dec37c190ab,
                mid_getScreenVolumeFrame_359670cdfaf2ef9f,
                mid_getScreenVolumeRadius_9981f74b2d109da6,
                mid_getScreenVolumeShape_d36e87427b729d63,
                mid_getScreenVolumeX_9981f74b2d109da6,
                mid_getScreenVolumeY_9981f74b2d109da6,
                mid_getScreenVolumeZ_9981f74b2d109da6,
                mid_getSefiCollisionProbability_9981f74b2d109da6,
                mid_getSefiCollisionProbabilityMethod_baad9ef664f2bcc1,
                mid_getSefiFragmentationModel_d2c8eb4129821f0e,
                mid_getStartScreenPeriod_80e11148db499dda,
                mid_getStopScreenPeriod_80e11148db499dda,
                mid_getTca_80e11148db499dda,
                mid_getTimeSystem_d72479bc3d5515c9,
                mid_setApproachAngle_1ad26e8c8c0cd65b,
                mid_setCollisionPercentile_d43202153dd284f7,
                mid_setCollisionProbaMethod_d8c763a258b3e9ce,
                mid_setCollisionProbability_1ad26e8c8c0cd65b,
                mid_setConjunctionId_105e1eadb709d9ac,
                mid_setMahalanobisDistance_1ad26e8c8c0cd65b,
                mid_setMaxCollisionProbability_1ad26e8c8c0cd65b,
                mid_setMaxCollisionProbabilityMethod_d8c763a258b3e9ce,
                mid_setMissDistance_1ad26e8c8c0cd65b,
                mid_setNextMessageEpoch_8497861b879c83f7,
                mid_setPreviousMessageEpoch_8497861b879c83f7,
                mid_setPreviousMessageId_105e1eadb709d9ac,
                mid_setRelativePositionN_1ad26e8c8c0cd65b,
                mid_setRelativePositionR_1ad26e8c8c0cd65b,
                mid_setRelativePositionT_1ad26e8c8c0cd65b,
                mid_setRelativeSpeed_1ad26e8c8c0cd65b,
                mid_setRelativeVelocityN_1ad26e8c8c0cd65b,
                mid_setRelativeVelocityR_1ad26e8c8c0cd65b,
                mid_setRelativeVelocityT_1ad26e8c8c0cd65b,
                mid_setScreenEntryTime_8497861b879c83f7,
                mid_setScreenExitTime_8497861b879c83f7,
                mid_setScreenPcThreshold_1ad26e8c8c0cd65b,
                mid_setScreenType_2e7985de48ca6858,
                mid_setScreenVolumeFrame_81622fe57e510b2d,
                mid_setScreenVolumeRadius_1ad26e8c8c0cd65b,
                mid_setScreenVolumeShape_cd2532e6943870e6,
                mid_setScreenVolumeX_1ad26e8c8c0cd65b,
                mid_setScreenVolumeY_1ad26e8c8c0cd65b,
                mid_setScreenVolumeZ_1ad26e8c8c0cd65b,
                mid_setSefiCollisionProbability_1ad26e8c8c0cd65b,
                mid_setSefiCollisionProbabilityMethod_d8c763a258b3e9ce,
                mid_setSefiFragmentationModel_105e1eadb709d9ac,
                mid_setStartScreenPeriod_8497861b879c83f7,
                mid_setStopScreenPeriod_8497861b879c83f7,
                mid_setTca_8497861b879c83f7,
                mid_setTimeSystem_a052efb9a150bad4,
                mid_validate_ff7cb6c242604316,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmRelativeMetadata(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmRelativeMetadata(const CdmRelativeMetadata& obj) : ::java::lang::Object(obj) {}

              CdmRelativeMetadata();

              void addComment(const ::java::lang::String &) const;
              void checkNotNull(const ::java::lang::Object &, const ::java::lang::Enum &) const;
              void checkScreenVolumeConditions() const;
              jdouble getApproachAngle() const;
              JArray< jint > getCollisionPercentile() const;
              ::org::orekit::files::ccsds::definitions::PocMethodFacade getCollisionProbaMethod() const;
              jdouble getCollisionProbability() const;
              ::java::util::List getComment() const;
              ::java::lang::String getConjunctionId() const;
              jdouble getMahalanobisDistance() const;
              jdouble getMaxCollisionProbability() const;
              ::org::orekit::files::ccsds::definitions::PocMethodFacade getMaxCollisionProbabilityMethod() const;
              jdouble getMissDistance() const;
              ::org::orekit::time::AbsoluteDate getNextMessageEpoch() const;
              ::org::orekit::time::AbsoluteDate getPreviousMessageEpoch() const;
              ::java::lang::String getPreviousMessageId() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getRelativePosition() const;
              jdouble getRelativeSpeed() const;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D getRelativeVelocity() const;
              ::org::orekit::time::AbsoluteDate getScreenEntryTime() const;
              ::org::orekit::time::AbsoluteDate getScreenExitTime() const;
              jdouble getScreenPcThreshold() const;
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType getScreenType() const;
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame getScreenVolumeFrame() const;
              jdouble getScreenVolumeRadius() const;
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape getScreenVolumeShape() const;
              jdouble getScreenVolumeX() const;
              jdouble getScreenVolumeY() const;
              jdouble getScreenVolumeZ() const;
              jdouble getSefiCollisionProbability() const;
              ::org::orekit::files::ccsds::definitions::PocMethodFacade getSefiCollisionProbabilityMethod() const;
              ::java::lang::String getSefiFragmentationModel() const;
              ::org::orekit::time::AbsoluteDate getStartScreenPeriod() const;
              ::org::orekit::time::AbsoluteDate getStopScreenPeriod() const;
              ::org::orekit::time::AbsoluteDate getTca() const;
              ::org::orekit::files::ccsds::definitions::TimeSystem getTimeSystem() const;
              void setApproachAngle(jdouble) const;
              void setCollisionPercentile(const JArray< jint > &) const;
              void setCollisionProbaMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade &) const;
              void setCollisionProbability(jdouble) const;
              void setConjunctionId(const ::java::lang::String &) const;
              void setMahalanobisDistance(jdouble) const;
              void setMaxCollisionProbability(jdouble) const;
              void setMaxCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade &) const;
              void setMissDistance(jdouble) const;
              void setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setPreviousMessageId(const ::java::lang::String &) const;
              void setRelativePositionN(jdouble) const;
              void setRelativePositionR(jdouble) const;
              void setRelativePositionT(jdouble) const;
              void setRelativeSpeed(jdouble) const;
              void setRelativeVelocityN(jdouble) const;
              void setRelativeVelocityR(jdouble) const;
              void setRelativeVelocityT(jdouble) const;
              void setScreenEntryTime(const ::org::orekit::time::AbsoluteDate &) const;
              void setScreenExitTime(const ::org::orekit::time::AbsoluteDate &) const;
              void setScreenPcThreshold(jdouble) const;
              void setScreenType(const ::org::orekit::files::ccsds::ndm::cdm::ScreenType &) const;
              void setScreenVolumeFrame(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame &) const;
              void setScreenVolumeRadius(jdouble) const;
              void setScreenVolumeShape(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape &) const;
              void setScreenVolumeX(jdouble) const;
              void setScreenVolumeY(jdouble) const;
              void setScreenVolumeZ(jdouble) const;
              void setSefiCollisionProbability(jdouble) const;
              void setSefiCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade &) const;
              void setSefiFragmentationModel(const ::java::lang::String &) const;
              void setStartScreenPeriod(const ::org::orekit::time::AbsoluteDate &) const;
              void setStopScreenPeriod(const ::org::orekit::time::AbsoluteDate &) const;
              void setTca(const ::org::orekit::time::AbsoluteDate &) const;
              void setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem &) const;
              void validate() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(CdmRelativeMetadata);
            extern PyTypeObject *PY_TYPE(CdmRelativeMetadata);

            class t_CdmRelativeMetadata {
            public:
              PyObject_HEAD
              CdmRelativeMetadata object;
              static PyObject *wrap_Object(const CdmRelativeMetadata&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
