#ifndef org_orekit_files_ccsds_ndm_adm_AttitudeEndpoints_H
#define org_orekit_files_ccsds_ndm_adm_AttitudeEndpoints_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
        namespace ndm {
          namespace adm {
            class AttitudeEndpoints;
          }
        }
      }
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
      class TimeStampedFieldAngularCoordinates;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class FieldAttitude;
      class AttitudeBuilder;
      class Attitude;
    }
  }
}
namespace java {
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
          namespace adm {

            class AttitudeEndpoints : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_build_16f6708eb1cda684,
                mid_build_11d80d4c91effa8b,
                mid_checkExternalFrame_46ccf4dfaef9abfa,
                mid_checkMandatoryEntriesExceptExternalFrame_4e5c1103238b9e37,
                mid_getExternalFrame_0fc1562b68204151,
                mid_getFrameA_0fc1562b68204151,
                mid_getFrameB_0fc1562b68204151,
                mid_getSpacecraftBodyFrame_0fc1562b68204151,
                mid_isA2b_eee3de00fe971136,
                mid_isCompatibleWith_1bd54c9a3aa91939,
                mid_isExternal2SpacecraftBody_eee3de00fe971136,
                mid_setA2b_b35db77cae58639e,
                mid_setFrameA_2c8b859a72c0094e,
                mid_setFrameB_2c8b859a72c0094e,
                mid_toString_d2c8eb4129821f0e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AttitudeEndpoints(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AttitudeEndpoints(const AttitudeEndpoints& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *A2B;
              static ::java::lang::String *B2A;

              AttitudeEndpoints();

              ::org::orekit::attitudes::FieldAttitude build(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates &) const;
              ::org::orekit::attitudes::Attitude build(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::utils::TimeStampedAngularCoordinates &) const;
              void checkExternalFrame(const ::java::lang::Enum &, const ::java::lang::Enum &) const;
              void checkMandatoryEntriesExceptExternalFrame(jdouble, const ::java::lang::Enum &, const ::java::lang::Enum &, const ::java::lang::Enum &) const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getExternalFrame() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getFrameA() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getFrameB() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getSpacecraftBodyFrame() const;
              jboolean isA2b() const;
              jboolean isCompatibleWith(const AttitudeEndpoints &) const;
              jboolean isExternal2SpacecraftBody() const;
              void setA2b(jboolean) const;
              void setFrameA(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
              void setFrameB(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
              ::java::lang::String toString() const;
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
          namespace adm {
            extern PyType_Def PY_TYPE_DEF(AttitudeEndpoints);
            extern PyTypeObject *PY_TYPE(AttitudeEndpoints);

            class t_AttitudeEndpoints {
            public:
              PyObject_HEAD
              AttitudeEndpoints object;
              static PyObject *wrap_Object(const AttitudeEndpoints&);
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
