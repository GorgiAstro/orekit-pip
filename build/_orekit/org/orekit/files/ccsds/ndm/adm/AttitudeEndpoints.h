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
      class TimeStampedAngularCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldAngularCoordinates;
    }
    namespace attitudes {
      class FieldAttitude;
      class AttitudeBuilder;
      class Attitude;
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
                mid_init$_a1fa5dae97ea5ed2,
                mid_build_52f3b2bb0d5542f2,
                mid_build_ac690f9e371807c4,
                mid_checkExternalFrame_717ac77f176afebd,
                mid_checkMandatoryEntriesExceptExternalFrame_f54700913c81cb36,
                mid_getExternalFrame_69d8be1b6b0a1a94,
                mid_getFrameA_69d8be1b6b0a1a94,
                mid_getFrameB_69d8be1b6b0a1a94,
                mid_getSpacecraftBodyFrame_69d8be1b6b0a1a94,
                mid_isA2b_9ab94ac1dc23b105,
                mid_isCompatibleWith_b5b6c5f51572ec5f,
                mid_isExternal2SpacecraftBody_9ab94ac1dc23b105,
                mid_setA2b_fcb96c98de6fad04,
                mid_setFrameA_4755133c5c4c59be,
                mid_setFrameB_4755133c5c4c59be,
                mid_toString_1c1fa1e935d6cdcf,
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
