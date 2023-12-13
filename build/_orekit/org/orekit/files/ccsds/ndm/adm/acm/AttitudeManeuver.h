#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuver_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuver_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Rotation;
        }
      }
    }
  }
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getActuatorUsed_1c1fa1e935d6cdcf,
                  mid_getBeginTime_b74f83833fdad017,
                  mid_getDuration_b74f83833fdad017,
                  mid_getEndTime_b74f83833fdad017,
                  mid_getID_1c1fa1e935d6cdcf,
                  mid_getManPurpose_1c1fa1e935d6cdcf,
                  mid_getPrevID_1c1fa1e935d6cdcf,
                  mid_getTargetAttitude_ff298a39b3cae5da,
                  mid_getTargetMomFrame_69d8be1b6b0a1a94,
                  mid_getTargetMomentum_8b724f8b4fdad1a2,
                  mid_getTargetSpinRate_b74f83833fdad017,
                  mid_setActuatorUsed_734b91ac30d5f9b4,
                  mid_setBeginTime_8ba9fe7a847cecad,
                  mid_setDuration_8ba9fe7a847cecad,
                  mid_setEndTime_8ba9fe7a847cecad,
                  mid_setID_734b91ac30d5f9b4,
                  mid_setManPurpose_734b91ac30d5f9b4,
                  mid_setPrevID_734b91ac30d5f9b4,
                  mid_setTargetAttitude_f32de4638c68c05a,
                  mid_setTargetMomFrame_4755133c5c4c59be,
                  mid_setTargetMomentum_1844f891addbac57,
                  mid_setTargetSpinRate_8ba9fe7a847cecad,
                  mid_validate_8ba9fe7a847cecad,
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
