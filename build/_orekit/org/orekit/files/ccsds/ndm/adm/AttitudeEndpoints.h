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
      class TimeStampedFieldAngularCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Frame;
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
                mid_init$_0640e6acf969ed28,
                mid_build_4329b81cdba13b7b,
                mid_build_76e687ee866bdc48,
                mid_checkExternalFrame_a149591111ac16ba,
                mid_checkMandatoryEntriesExceptExternalFrame_220b7e9d21985607,
                mid_getExternalFrame_98f5fcaff3e3f9d2,
                mid_getFrameA_98f5fcaff3e3f9d2,
                mid_getFrameB_98f5fcaff3e3f9d2,
                mid_getSpacecraftBodyFrame_98f5fcaff3e3f9d2,
                mid_isA2b_89b302893bdbe1f1,
                mid_isCompatibleWith_9b08e60715a7a476,
                mid_isExternal2SpacecraftBody_89b302893bdbe1f1,
                mid_setA2b_ed2afdb8506b9742,
                mid_setFrameA_f55eee1236275bb1,
                mid_setFrameB_f55eee1236275bb1,
                mid_toString_3cffd47377eca18a,
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
