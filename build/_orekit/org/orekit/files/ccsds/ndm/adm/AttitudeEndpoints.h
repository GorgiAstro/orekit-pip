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
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class AttitudeBuilder;
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class TimeStampedFieldAngularCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
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
                mid_init$_7ae3461a92a43152,
                mid_build_46e50d643ce38532,
                mid_build_d2838fa0adea33de,
                mid_checkExternalFrame_54f8b33237256597,
                mid_checkMandatoryEntriesExceptExternalFrame_31cc8d94746b3642,
                mid_getExternalFrame_aa70fdb14ae9305f,
                mid_getFrameA_aa70fdb14ae9305f,
                mid_getFrameB_aa70fdb14ae9305f,
                mid_getSpacecraftBodyFrame_aa70fdb14ae9305f,
                mid_isA2b_e470b6d9e0d979db,
                mid_isCompatibleWith_734f05c752609c53,
                mid_isExternal2SpacecraftBody_e470b6d9e0d979db,
                mid_setA2b_50a2e0b139e80a58,
                mid_setFrameA_a455f3ff24eb0b47,
                mid_setFrameB_a455f3ff24eb0b47,
                mid_toString_0090f7797e403f43,
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
