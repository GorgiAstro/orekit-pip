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
                mid_init$_0fa09c18fee449d5,
                mid_addComment_d0bc48d5b00dc40c,
                mid_checkNotNull_dcb614849fe787ea,
                mid_checkScreenVolumeConditions_0fa09c18fee449d5,
                mid_getApproachAngle_dff5885c2c873297,
                mid_getCollisionPercentile_d0635cea09dc178c,
                mid_getCollisionProbaMethod_1dc70063264cd4f8,
                mid_getCollisionProbability_dff5885c2c873297,
                mid_getComment_2afa36052df4765d,
                mid_getConjunctionId_11b109bd155ca898,
                mid_getMahalanobisDistance_dff5885c2c873297,
                mid_getMaxCollisionProbability_dff5885c2c873297,
                mid_getMaxCollisionProbabilityMethod_1dc70063264cd4f8,
                mid_getMissDistance_dff5885c2c873297,
                mid_getNextMessageEpoch_85703d13e302437e,
                mid_getPreviousMessageEpoch_85703d13e302437e,
                mid_getPreviousMessageId_11b109bd155ca898,
                mid_getRelativePosition_d52645e0d4c07563,
                mid_getRelativeSpeed_dff5885c2c873297,
                mid_getRelativeVelocity_d52645e0d4c07563,
                mid_getScreenEntryTime_85703d13e302437e,
                mid_getScreenExitTime_85703d13e302437e,
                mid_getScreenPcThreshold_dff5885c2c873297,
                mid_getScreenType_4c3c84cfd1df633b,
                mid_getScreenVolumeFrame_c9526cd35a34ff41,
                mid_getScreenVolumeRadius_dff5885c2c873297,
                mid_getScreenVolumeShape_edfe08671412204c,
                mid_getScreenVolumeX_dff5885c2c873297,
                mid_getScreenVolumeY_dff5885c2c873297,
                mid_getScreenVolumeZ_dff5885c2c873297,
                mid_getSefiCollisionProbability_dff5885c2c873297,
                mid_getSefiCollisionProbabilityMethod_1dc70063264cd4f8,
                mid_getSefiFragmentationModel_11b109bd155ca898,
                mid_getStartScreenPeriod_85703d13e302437e,
                mid_getStopScreenPeriod_85703d13e302437e,
                mid_getTca_85703d13e302437e,
                mid_getTimeSystem_ee0a6b60b63a969e,
                mid_setApproachAngle_17db3a65980d3441,
                mid_setCollisionPercentile_d147d7ce001e2d45,
                mid_setCollisionProbaMethod_e2c3decdacf83401,
                mid_setCollisionProbability_17db3a65980d3441,
                mid_setConjunctionId_d0bc48d5b00dc40c,
                mid_setMahalanobisDistance_17db3a65980d3441,
                mid_setMaxCollisionProbability_17db3a65980d3441,
                mid_setMaxCollisionProbabilityMethod_e2c3decdacf83401,
                mid_setMissDistance_17db3a65980d3441,
                mid_setNextMessageEpoch_600a2a61652bc473,
                mid_setPreviousMessageEpoch_600a2a61652bc473,
                mid_setPreviousMessageId_d0bc48d5b00dc40c,
                mid_setRelativePositionN_17db3a65980d3441,
                mid_setRelativePositionR_17db3a65980d3441,
                mid_setRelativePositionT_17db3a65980d3441,
                mid_setRelativeSpeed_17db3a65980d3441,
                mid_setRelativeVelocityN_17db3a65980d3441,
                mid_setRelativeVelocityR_17db3a65980d3441,
                mid_setRelativeVelocityT_17db3a65980d3441,
                mid_setScreenEntryTime_600a2a61652bc473,
                mid_setScreenExitTime_600a2a61652bc473,
                mid_setScreenPcThreshold_17db3a65980d3441,
                mid_setScreenType_e50a1364ae4b8842,
                mid_setScreenVolumeFrame_d95c2fcff45bc246,
                mid_setScreenVolumeRadius_17db3a65980d3441,
                mid_setScreenVolumeShape_32ea11c65ba738be,
                mid_setScreenVolumeX_17db3a65980d3441,
                mid_setScreenVolumeY_17db3a65980d3441,
                mid_setScreenVolumeZ_17db3a65980d3441,
                mid_setSefiCollisionProbability_17db3a65980d3441,
                mid_setSefiCollisionProbabilityMethod_e2c3decdacf83401,
                mid_setSefiFragmentationModel_d0bc48d5b00dc40c,
                mid_setStartScreenPeriod_600a2a61652bc473,
                mid_setStopScreenPeriod_600a2a61652bc473,
                mid_setTca_600a2a61652bc473,
                mid_setTimeSystem_08d7048316d8d7b2,
                mid_validate_0fa09c18fee449d5,
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
