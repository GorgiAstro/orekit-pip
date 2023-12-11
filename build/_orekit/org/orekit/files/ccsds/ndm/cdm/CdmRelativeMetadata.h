#ifndef org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class ScreenVolumeShape;
            class ScreenType;
            class ScreenVolumeFrame;
          }
        }
        namespace definitions {
          class TimeSystem;
          class PocMethodFacade;
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
                mid_init$_0640e6acf969ed28,
                mid_addComment_f5ffdf29129ef90a,
                mid_checkNotNull_95e2f439e3918f51,
                mid_checkScreenVolumeConditions_0640e6acf969ed28,
                mid_getApproachAngle_557b8123390d8d0c,
                mid_getCollisionPercentile_1b41cf9ebf653611,
                mid_getCollisionProbaMethod_33122f5a676c9ebb,
                mid_getCollisionProbability_557b8123390d8d0c,
                mid_getComment_0d9551367f7ecdef,
                mid_getConjunctionId_3cffd47377eca18a,
                mid_getMahalanobisDistance_557b8123390d8d0c,
                mid_getMaxCollisionProbability_557b8123390d8d0c,
                mid_getMaxCollisionProbabilityMethod_33122f5a676c9ebb,
                mid_getMissDistance_557b8123390d8d0c,
                mid_getNextMessageEpoch_7a97f7e149e79afb,
                mid_getPreviousMessageEpoch_7a97f7e149e79afb,
                mid_getPreviousMessageId_3cffd47377eca18a,
                mid_getRelativePosition_f88961cca75a2c0a,
                mid_getRelativeSpeed_557b8123390d8d0c,
                mid_getRelativeVelocity_f88961cca75a2c0a,
                mid_getScreenEntryTime_7a97f7e149e79afb,
                mid_getScreenExitTime_7a97f7e149e79afb,
                mid_getScreenPcThreshold_557b8123390d8d0c,
                mid_getScreenType_5ee5e7f48ab31b92,
                mid_getScreenVolumeFrame_8ac667bf5c4e7023,
                mid_getScreenVolumeRadius_557b8123390d8d0c,
                mid_getScreenVolumeShape_c6cf0c4d1af7e9b9,
                mid_getScreenVolumeX_557b8123390d8d0c,
                mid_getScreenVolumeY_557b8123390d8d0c,
                mid_getScreenVolumeZ_557b8123390d8d0c,
                mid_getSefiCollisionProbability_557b8123390d8d0c,
                mid_getSefiCollisionProbabilityMethod_33122f5a676c9ebb,
                mid_getSefiFragmentationModel_3cffd47377eca18a,
                mid_getStartScreenPeriod_7a97f7e149e79afb,
                mid_getStopScreenPeriod_7a97f7e149e79afb,
                mid_getTca_7a97f7e149e79afb,
                mid_getTimeSystem_d0d0dc777cc1d8f8,
                mid_setApproachAngle_10f281d777284cea,
                mid_setCollisionPercentile_ec63cb8a58ef5a54,
                mid_setCollisionProbaMethod_24f4275bd75d1e11,
                mid_setCollisionProbability_10f281d777284cea,
                mid_setConjunctionId_f5ffdf29129ef90a,
                mid_setMahalanobisDistance_10f281d777284cea,
                mid_setMaxCollisionProbability_10f281d777284cea,
                mid_setMaxCollisionProbabilityMethod_24f4275bd75d1e11,
                mid_setMissDistance_10f281d777284cea,
                mid_setNextMessageEpoch_20affcbd28542333,
                mid_setPreviousMessageEpoch_20affcbd28542333,
                mid_setPreviousMessageId_f5ffdf29129ef90a,
                mid_setRelativePositionN_10f281d777284cea,
                mid_setRelativePositionR_10f281d777284cea,
                mid_setRelativePositionT_10f281d777284cea,
                mid_setRelativeSpeed_10f281d777284cea,
                mid_setRelativeVelocityN_10f281d777284cea,
                mid_setRelativeVelocityR_10f281d777284cea,
                mid_setRelativeVelocityT_10f281d777284cea,
                mid_setScreenEntryTime_20affcbd28542333,
                mid_setScreenExitTime_20affcbd28542333,
                mid_setScreenPcThreshold_10f281d777284cea,
                mid_setScreenType_5f8f3fff9ebb0d5f,
                mid_setScreenVolumeFrame_91aabd8787541b18,
                mid_setScreenVolumeRadius_10f281d777284cea,
                mid_setScreenVolumeShape_c79d3dc23a8b505b,
                mid_setScreenVolumeX_10f281d777284cea,
                mid_setScreenVolumeY_10f281d777284cea,
                mid_setScreenVolumeZ_10f281d777284cea,
                mid_setSefiCollisionProbability_10f281d777284cea,
                mid_setSefiCollisionProbabilityMethod_24f4275bd75d1e11,
                mid_setSefiFragmentationModel_f5ffdf29129ef90a,
                mid_setStartScreenPeriod_20affcbd28542333,
                mid_setStopScreenPeriod_20affcbd28542333,
                mid_setTca_20affcbd28542333,
                mid_setTimeSystem_dcfc8f760c17d3b6,
                mid_validate_0640e6acf969ed28,
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
