#ifndef org_orekit_files_ccsds_ndm_adm_AttitudeEndpoints_H
#define org_orekit_files_ccsds_ndm_adm_AttitudeEndpoints_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeBuilder;
      class Attitude;
      class FieldAttitude;
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldAngularCoordinates;
    }
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
    namespace frames {
      class Frame;
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
                mid_init$_0fa09c18fee449d5,
                mid_build_32e9a4ac991f1702,
                mid_build_54b3b52d9ecd9e48,
                mid_checkExternalFrame_11b1ff867c62ed90,
                mid_checkMandatoryEntriesExceptExternalFrame_928242bba88ff831,
                mid_getExternalFrame_5d5dd95b04037824,
                mid_getFrameA_5d5dd95b04037824,
                mid_getFrameB_5d5dd95b04037824,
                mid_getSpacecraftBodyFrame_5d5dd95b04037824,
                mid_isA2b_b108b35ef48e27bd,
                mid_isCompatibleWith_8b4c4011cac9576a,
                mid_isExternal2SpacecraftBody_b108b35ef48e27bd,
                mid_setA2b_bd04c9335fb9e4cf,
                mid_setFrameA_849bc9e3b38b9bcb,
                mid_setFrameB_849bc9e3b38b9bcb,
                mid_toString_11b109bd155ca898,
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
