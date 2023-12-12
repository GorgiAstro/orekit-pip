#ifndef org_orekit_files_ccsds_ndm_adm_apm_Maneuver_H
#define org_orekit_files_ccsds_ndm_adm_apm_Maneuver_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
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
          namespace adm {
            namespace apm {

              class Maneuver : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getDeltaMass_557b8123390d8d0c,
                  mid_getDuration_557b8123390d8d0c,
                  mid_getEpochStart_7a97f7e149e79afb,
                  mid_getFrame_98f5fcaff3e3f9d2,
                  mid_getTorque_f88961cca75a2c0a,
                  mid_setDeltaMass_10f281d777284cea,
                  mid_setDuration_10f281d777284cea,
                  mid_setEpochStart_20affcbd28542333,
                  mid_setFrame_f55eee1236275bb1,
                  mid_setTorque_89aad365fb0ed8da,
                  mid_validate_10f281d777284cea,
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

                jdouble getDeltaMass() const;
                jdouble getDuration() const;
                ::org::orekit::time::AbsoluteDate getEpochStart() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getFrame() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getTorque() const;
                void setDeltaMass(jdouble) const;
                void setDuration(jdouble) const;
                void setEpochStart(const ::org::orekit::time::AbsoluteDate &) const;
                void setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setTorque(jint, jdouble) const;
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
            namespace apm {
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
