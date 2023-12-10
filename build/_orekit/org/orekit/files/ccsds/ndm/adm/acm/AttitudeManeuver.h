#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuver_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuver_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
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
                  mid_init$_0fa09c18fee449d5,
                  mid_getActuatorUsed_11b109bd155ca898,
                  mid_getBeginTime_dff5885c2c873297,
                  mid_getDuration_dff5885c2c873297,
                  mid_getEndTime_dff5885c2c873297,
                  mid_getID_11b109bd155ca898,
                  mid_getManPurpose_11b109bd155ca898,
                  mid_getPrevID_11b109bd155ca898,
                  mid_getTargetAttitude_de86c7efc42eac14,
                  mid_getTargetMomFrame_5d5dd95b04037824,
                  mid_getTargetMomentum_d52645e0d4c07563,
                  mid_getTargetSpinRate_dff5885c2c873297,
                  mid_setActuatorUsed_d0bc48d5b00dc40c,
                  mid_setBeginTime_17db3a65980d3441,
                  mid_setDuration_17db3a65980d3441,
                  mid_setEndTime_17db3a65980d3441,
                  mid_setID_d0bc48d5b00dc40c,
                  mid_setManPurpose_d0bc48d5b00dc40c,
                  mid_setPrevID_d0bc48d5b00dc40c,
                  mid_setTargetAttitude_80a55d93aa5ecb9e,
                  mid_setTargetMomFrame_849bc9e3b38b9bcb,
                  mid_setTargetMomentum_029ff0cbf68ea054,
                  mid_setTargetSpinRate_17db3a65980d3441,
                  mid_validate_17db3a65980d3441,
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
