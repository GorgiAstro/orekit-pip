#ifndef org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeSystem;
          class PocMethodFacade;
        }
        namespace ndm {
          namespace cdm {
            class ScreenType;
            class ScreenVolumeShape;
            class ScreenVolumeFrame;
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
                mid_init$_7ae3461a92a43152,
                mid_addComment_e939c6558ae8d313,
                mid_checkNotNull_d572e0718b6c83e0,
                mid_checkScreenVolumeConditions_7ae3461a92a43152,
                mid_getApproachAngle_456d9a2f64d6b28d,
                mid_getCollisionPercentile_d8ead0d90ce828b0,
                mid_getCollisionProbaMethod_49eb66b4a85e55fc,
                mid_getCollisionProbability_456d9a2f64d6b28d,
                mid_getComment_a6156df500549a58,
                mid_getConjunctionId_0090f7797e403f43,
                mid_getMahalanobisDistance_456d9a2f64d6b28d,
                mid_getMaxCollisionProbability_456d9a2f64d6b28d,
                mid_getMaxCollisionProbabilityMethod_49eb66b4a85e55fc,
                mid_getMissDistance_456d9a2f64d6b28d,
                mid_getNextMessageEpoch_aaa854c403487cf3,
                mid_getPreviousMessageEpoch_aaa854c403487cf3,
                mid_getPreviousMessageId_0090f7797e403f43,
                mid_getRelativePosition_17a952530a808943,
                mid_getRelativeSpeed_456d9a2f64d6b28d,
                mid_getRelativeVelocity_17a952530a808943,
                mid_getScreenEntryTime_aaa854c403487cf3,
                mid_getScreenExitTime_aaa854c403487cf3,
                mid_getScreenPcThreshold_456d9a2f64d6b28d,
                mid_getScreenType_8a4a31dcfdd075f2,
                mid_getScreenVolumeFrame_3eeeaad7d3fc56dd,
                mid_getScreenVolumeRadius_456d9a2f64d6b28d,
                mid_getScreenVolumeShape_930c1ae3eb90def5,
                mid_getScreenVolumeX_456d9a2f64d6b28d,
                mid_getScreenVolumeY_456d9a2f64d6b28d,
                mid_getScreenVolumeZ_456d9a2f64d6b28d,
                mid_getSefiCollisionProbability_456d9a2f64d6b28d,
                mid_getSefiCollisionProbabilityMethod_49eb66b4a85e55fc,
                mid_getSefiFragmentationModel_0090f7797e403f43,
                mid_getStartScreenPeriod_aaa854c403487cf3,
                mid_getStopScreenPeriod_aaa854c403487cf3,
                mid_getTca_aaa854c403487cf3,
                mid_getTimeSystem_8ece93c6c1ece30e,
                mid_setApproachAngle_77e0f9a1f260e2e5,
                mid_setCollisionPercentile_3b603738d1eb3233,
                mid_setCollisionProbaMethod_5d8617d8c21ef120,
                mid_setCollisionProbability_77e0f9a1f260e2e5,
                mid_setConjunctionId_e939c6558ae8d313,
                mid_setMahalanobisDistance_77e0f9a1f260e2e5,
                mid_setMaxCollisionProbability_77e0f9a1f260e2e5,
                mid_setMaxCollisionProbabilityMethod_5d8617d8c21ef120,
                mid_setMissDistance_77e0f9a1f260e2e5,
                mid_setNextMessageEpoch_e82d68cd9f886886,
                mid_setPreviousMessageEpoch_e82d68cd9f886886,
                mid_setPreviousMessageId_e939c6558ae8d313,
                mid_setRelativePositionN_77e0f9a1f260e2e5,
                mid_setRelativePositionR_77e0f9a1f260e2e5,
                mid_setRelativePositionT_77e0f9a1f260e2e5,
                mid_setRelativeSpeed_77e0f9a1f260e2e5,
                mid_setRelativeVelocityN_77e0f9a1f260e2e5,
                mid_setRelativeVelocityR_77e0f9a1f260e2e5,
                mid_setRelativeVelocityT_77e0f9a1f260e2e5,
                mid_setScreenEntryTime_e82d68cd9f886886,
                mid_setScreenExitTime_e82d68cd9f886886,
                mid_setScreenPcThreshold_77e0f9a1f260e2e5,
                mid_setScreenType_4ee5109bd2ddc3a9,
                mid_setScreenVolumeFrame_5a9c14e1949fc730,
                mid_setScreenVolumeRadius_77e0f9a1f260e2e5,
                mid_setScreenVolumeShape_982ebac41152966d,
                mid_setScreenVolumeX_77e0f9a1f260e2e5,
                mid_setScreenVolumeY_77e0f9a1f260e2e5,
                mid_setScreenVolumeZ_77e0f9a1f260e2e5,
                mid_setSefiCollisionProbability_77e0f9a1f260e2e5,
                mid_setSefiCollisionProbabilityMethod_5d8617d8c21ef120,
                mid_setSefiFragmentationModel_e939c6558ae8d313,
                mid_setStartScreenPeriod_e82d68cd9f886886,
                mid_setStopScreenPeriod_e82d68cd9f886886,
                mid_setTca_e82d68cd9f886886,
                mid_setTimeSystem_3dd15fb182523a58,
                mid_validate_7ae3461a92a43152,
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
