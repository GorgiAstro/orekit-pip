#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuver_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuver_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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
          namespace adm {
            namespace acm {

              class AttitudeManeuver : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getActuatorUsed_d2c8eb4129821f0e,
                  mid_getBeginTime_9981f74b2d109da6,
                  mid_getDuration_9981f74b2d109da6,
                  mid_getEndTime_9981f74b2d109da6,
                  mid_getID_d2c8eb4129821f0e,
                  mid_getManPurpose_d2c8eb4129821f0e,
                  mid_getPrevID_d2c8eb4129821f0e,
                  mid_getTargetAttitude_4d68cff5f6e4403a,
                  mid_getTargetMomFrame_0fc1562b68204151,
                  mid_getTargetMomentum_032312bdeb3f2f93,
                  mid_getTargetSpinRate_9981f74b2d109da6,
                  mid_setActuatorUsed_105e1eadb709d9ac,
                  mid_setBeginTime_1ad26e8c8c0cd65b,
                  mid_setDuration_1ad26e8c8c0cd65b,
                  mid_setEndTime_1ad26e8c8c0cd65b,
                  mid_setID_105e1eadb709d9ac,
                  mid_setManPurpose_105e1eadb709d9ac,
                  mid_setPrevID_105e1eadb709d9ac,
                  mid_setTargetAttitude_c7213d7f3b4952c4,
                  mid_setTargetMomFrame_2c8b859a72c0094e,
                  mid_setTargetMomentum_30f8886dfb88a63c,
                  mid_setTargetSpinRate_1ad26e8c8c0cd65b,
                  mid_validate_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeManeuver(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeManeuver(const AttitudeManeuver& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AttitudeManeuver();

                ::java::lang::String getActuatorUsed() const;
                jdouble getBeginTime() const;
                jdouble getDuration() const;
                jdouble getEndTime() const;
                ::java::lang::String getID() const;
                ::java::lang::String getManPurpose() const;
                ::java::lang::String getPrevID() const;
                ::org::hipparchus::geometry::euclidean::threed::Rotation getTargetAttitude() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getTargetMomFrame() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getTargetMomentum() const;
                jdouble getTargetSpinRate() const;
                void setActuatorUsed(const ::java::lang::String &) const;
                void setBeginTime(jdouble) const;
                void setDuration(jdouble) const;
                void setEndTime(jdouble) const;
                void setID(const ::java::lang::String &) const;
                void setManPurpose(const ::java::lang::String &) const;
                void setPrevID(const ::java::lang::String &) const;
                void setTargetAttitude(const ::org::hipparchus::geometry::euclidean::threed::Rotation &) const;
                void setTargetMomFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setTargetMomentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
                void setTargetSpinRate(jdouble) const;
                void validate(jdouble) const;
              };
            }
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudeManeuver);
              extern PyTypeObject *PY_TYPE(AttitudeManeuver);

              class t_AttitudeManeuver {
              public:
                PyObject_HEAD
                AttitudeManeuver object;
                static PyObject *wrap_Object(const AttitudeManeuver&);
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
}

#endif
