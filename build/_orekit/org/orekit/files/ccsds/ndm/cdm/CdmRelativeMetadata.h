#ifndef org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H

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
  }
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeSystem;
          class PocMethodFacade;
        }
        namespace ndm {
          namespace cdm {
            class ScreenVolumeShape;
            class ScreenType;
            class ScreenVolumeFrame;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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
                mid_init$_a1fa5dae97ea5ed2,
                mid_addComment_734b91ac30d5f9b4,
                mid_checkNotNull_df2b565e99c3c541,
                mid_checkScreenVolumeConditions_a1fa5dae97ea5ed2,
                mid_getApproachAngle_b74f83833fdad017,
                mid_getCollisionPercentile_4d095d7a08163110,
                mid_getCollisionProbaMethod_2ddd040a83ad32b1,
                mid_getCollisionProbability_b74f83833fdad017,
                mid_getComment_e62d3bb06d56d7e3,
                mid_getConjunctionId_1c1fa1e935d6cdcf,
                mid_getMahalanobisDistance_b74f83833fdad017,
                mid_getMaxCollisionProbability_b74f83833fdad017,
                mid_getMaxCollisionProbabilityMethod_2ddd040a83ad32b1,
                mid_getMissDistance_b74f83833fdad017,
                mid_getNextMessageEpoch_c325492395d89b24,
                mid_getPreviousMessageEpoch_c325492395d89b24,
                mid_getPreviousMessageId_1c1fa1e935d6cdcf,
                mid_getRelativePosition_8b724f8b4fdad1a2,
                mid_getRelativeSpeed_b74f83833fdad017,
                mid_getRelativeVelocity_8b724f8b4fdad1a2,
                mid_getScreenEntryTime_c325492395d89b24,
                mid_getScreenExitTime_c325492395d89b24,
                mid_getScreenPcThreshold_b74f83833fdad017,
                mid_getScreenType_b67da540ddec6964,
                mid_getScreenVolumeFrame_9c3a026fec3db9c9,
                mid_getScreenVolumeRadius_b74f83833fdad017,
                mid_getScreenVolumeShape_443628f95af03066,
                mid_getScreenVolumeX_b74f83833fdad017,
                mid_getScreenVolumeY_b74f83833fdad017,
                mid_getScreenVolumeZ_b74f83833fdad017,
                mid_getSefiCollisionProbability_b74f83833fdad017,
                mid_getSefiCollisionProbabilityMethod_2ddd040a83ad32b1,
                mid_getSefiFragmentationModel_1c1fa1e935d6cdcf,
                mid_getStartScreenPeriod_c325492395d89b24,
                mid_getStopScreenPeriod_c325492395d89b24,
                mid_getTca_c325492395d89b24,
                mid_getTimeSystem_91b7f51e80ad440f,
                mid_setApproachAngle_8ba9fe7a847cecad,
                mid_setCollisionPercentile_86a2769cb881d388,
                mid_setCollisionProbaMethod_3d87a594d72256e8,
                mid_setCollisionProbability_8ba9fe7a847cecad,
                mid_setConjunctionId_734b91ac30d5f9b4,
                mid_setMahalanobisDistance_8ba9fe7a847cecad,
                mid_setMaxCollisionProbability_8ba9fe7a847cecad,
                mid_setMaxCollisionProbabilityMethod_3d87a594d72256e8,
                mid_setMissDistance_8ba9fe7a847cecad,
                mid_setNextMessageEpoch_02135a6ef25adb4b,
                mid_setPreviousMessageEpoch_02135a6ef25adb4b,
                mid_setPreviousMessageId_734b91ac30d5f9b4,
                mid_setRelativePositionN_8ba9fe7a847cecad,
                mid_setRelativePositionR_8ba9fe7a847cecad,
                mid_setRelativePositionT_8ba9fe7a847cecad,
                mid_setRelativeSpeed_8ba9fe7a847cecad,
                mid_setRelativeVelocityN_8ba9fe7a847cecad,
                mid_setRelativeVelocityR_8ba9fe7a847cecad,
                mid_setRelativeVelocityT_8ba9fe7a847cecad,
                mid_setScreenEntryTime_02135a6ef25adb4b,
                mid_setScreenExitTime_02135a6ef25adb4b,
                mid_setScreenPcThreshold_8ba9fe7a847cecad,
                mid_setScreenType_81521600a2b31dc8,
                mid_setScreenVolumeFrame_aa1003a1d7d3878a,
                mid_setScreenVolumeRadius_8ba9fe7a847cecad,
                mid_setScreenVolumeShape_08871fc1aa7bd48b,
                mid_setScreenVolumeX_8ba9fe7a847cecad,
                mid_setScreenVolumeY_8ba9fe7a847cecad,
                mid_setScreenVolumeZ_8ba9fe7a847cecad,
                mid_setSefiCollisionProbability_8ba9fe7a847cecad,
                mid_setSefiCollisionProbabilityMethod_3d87a594d72256e8,
                mid_setSefiFragmentationModel_734b91ac30d5f9b4,
                mid_setStartScreenPeriod_02135a6ef25adb4b,
                mid_setStopScreenPeriod_02135a6ef25adb4b,
                mid_setTca_02135a6ef25adb4b,
                mid_setTimeSystem_00f5ccc3311d9b97,
                mid_validate_a1fa5dae97ea5ed2,
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
