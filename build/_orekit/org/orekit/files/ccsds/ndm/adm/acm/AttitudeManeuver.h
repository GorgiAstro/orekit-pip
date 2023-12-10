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
                  mid_init$_7ae3461a92a43152,
                  mid_getActuatorUsed_0090f7797e403f43,
                  mid_getBeginTime_456d9a2f64d6b28d,
                  mid_getDuration_456d9a2f64d6b28d,
                  mid_getEndTime_456d9a2f64d6b28d,
                  mid_getID_0090f7797e403f43,
                  mid_getManPurpose_0090f7797e403f43,
                  mid_getPrevID_0090f7797e403f43,
                  mid_getTargetAttitude_24d2e432e376f9a0,
                  mid_getTargetMomFrame_aa70fdb14ae9305f,
                  mid_getTargetMomentum_17a952530a808943,
                  mid_getTargetSpinRate_456d9a2f64d6b28d,
                  mid_setActuatorUsed_e939c6558ae8d313,
                  mid_setBeginTime_77e0f9a1f260e2e5,
                  mid_setDuration_77e0f9a1f260e2e5,
                  mid_setEndTime_77e0f9a1f260e2e5,
                  mid_setID_e939c6558ae8d313,
                  mid_setManPurpose_e939c6558ae8d313,
                  mid_setPrevID_e939c6558ae8d313,
                  mid_setTargetAttitude_897939f7cf621023,
                  mid_setTargetMomFrame_a455f3ff24eb0b47,
                  mid_setTargetMomentum_a94622407b723689,
                  mid_setTargetSpinRate_77e0f9a1f260e2e5,
                  mid_validate_77e0f9a1f260e2e5,
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
