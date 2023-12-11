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
                  mid_init$_0640e6acf969ed28,
                  mid_getActuatorUsed_3cffd47377eca18a,
                  mid_getBeginTime_557b8123390d8d0c,
                  mid_getDuration_557b8123390d8d0c,
                  mid_getEndTime_557b8123390d8d0c,
                  mid_getID_3cffd47377eca18a,
                  mid_getManPurpose_3cffd47377eca18a,
                  mid_getPrevID_3cffd47377eca18a,
                  mid_getTargetAttitude_1e0dc1a6788897b9,
                  mid_getTargetMomFrame_98f5fcaff3e3f9d2,
                  mid_getTargetMomentum_f88961cca75a2c0a,
                  mid_getTargetSpinRate_557b8123390d8d0c,
                  mid_setActuatorUsed_f5ffdf29129ef90a,
                  mid_setBeginTime_10f281d777284cea,
                  mid_setDuration_10f281d777284cea,
                  mid_setEndTime_10f281d777284cea,
                  mid_setID_f5ffdf29129ef90a,
                  mid_setManPurpose_f5ffdf29129ef90a,
                  mid_setPrevID_f5ffdf29129ef90a,
                  mid_setTargetAttitude_cffe2196131a8abb,
                  mid_setTargetMomFrame_f55eee1236275bb1,
                  mid_setTargetMomentum_2810d2bec90e7b1c,
                  mid_setTargetSpinRate_10f281d777284cea,
                  mid_validate_10f281d777284cea,
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
