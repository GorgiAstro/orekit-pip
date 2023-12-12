#ifndef org_orekit_files_ccsds_ndm_adm_apm_AngularVelocity_H
#define org_orekit_files_ccsds_ndm_adm_apm_AngularVelocity_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AttitudeEndpoints;
          }
        }
        namespace definitions {
          class FrameFacade;
        }
      }
    }
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

              class AngularVelocity : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getAngVelX_557b8123390d8d0c,
                  mid_getAngVelY_557b8123390d8d0c,
                  mid_getAngVelZ_557b8123390d8d0c,
                  mid_getEndpoints_c66f753ddee38944,
                  mid_getFrame_98f5fcaff3e3f9d2,
                  mid_setAngVelX_10f281d777284cea,
                  mid_setAngVelY_10f281d777284cea,
                  mid_setAngVelZ_10f281d777284cea,
                  mid_setFrame_f55eee1236275bb1,
                  mid_validate_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AngularVelocity(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AngularVelocity(const AngularVelocity& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AngularVelocity();

                jdouble getAngVelX() const;
                jdouble getAngVelY() const;
                jdouble getAngVelZ() const;
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints getEndpoints() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getFrame() const;
                void setAngVelX(jdouble) const;
                void setAngVelY(jdouble) const;
                void setAngVelZ(jdouble) const;
                void setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
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
              extern PyType_Def PY_TYPE_DEF(AngularVelocity);
              extern PyTypeObject *PY_TYPE(AngularVelocity);

              class t_AngularVelocity {
              public:
                PyObject_HEAD
                AngularVelocity object;
                static PyObject *wrap_Object(const AngularVelocity&);
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
