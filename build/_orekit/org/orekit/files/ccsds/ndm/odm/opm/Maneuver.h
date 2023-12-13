#ifndef org_orekit_files_ccsds_ndm_odm_opm_Maneuver_H
#define org_orekit_files_ccsds_ndm_odm_opm_Maneuver_H

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
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              class Maneuver : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_completed_9ab94ac1dc23b105,
                  mid_getDV_8b724f8b4fdad1a2,
                  mid_getDeltaMass_b74f83833fdad017,
                  mid_getDuration_b74f83833fdad017,
                  mid_getEpochIgnition_c325492395d89b24,
                  mid_getReferenceFrame_69d8be1b6b0a1a94,
                  mid_setDV_d5322b8b512aeb26,
                  mid_setDeltaMass_8ba9fe7a847cecad,
                  mid_setDuration_8ba9fe7a847cecad,
                  mid_setEpochIgnition_02135a6ef25adb4b,
                  mid_setReferenceFrame_4755133c5c4c59be,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Maneuver(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Maneuver(const Maneuver& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                Maneuver();

                jboolean completed() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getDV() const;
                jdouble getDeltaMass() const;
                jdouble getDuration() const;
                ::org::orekit::time::AbsoluteDate getEpochIgnition() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getReferenceFrame() const;
                void setDV(jint, jdouble) const;
                void setDeltaMass(jdouble) const;
                void setDuration(jdouble) const;
                void setEpochIgnition(const ::org::orekit::time::AbsoluteDate &) const;
                void setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
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
          namespace odm {
            namespace opm {
              extern PyType_Def PY_TYPE_DEF(Maneuver);
              extern PyTypeObject *PY_TYPE(Maneuver);

              class t_Maneuver {
              public:
                PyObject_HEAD
                Maneuver object;
                static PyObject *wrap_Object(const Maneuver&);
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
