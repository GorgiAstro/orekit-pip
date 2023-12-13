#ifndef org_orekit_files_ccsds_ndm_adm_apm_AngularVelocity_H
#define org_orekit_files_ccsds_ndm_adm_apm_AngularVelocity_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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

              class AngularVelocity : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getAngVelX_b74f83833fdad017,
                  mid_getAngVelY_b74f83833fdad017,
                  mid_getAngVelZ_b74f83833fdad017,
                  mid_getEndpoints_c60ad1d207bc8e06,
                  mid_getFrame_69d8be1b6b0a1a94,
                  mid_setAngVelX_8ba9fe7a847cecad,
                  mid_setAngVelY_8ba9fe7a847cecad,
                  mid_setAngVelZ_8ba9fe7a847cecad,
                  mid_setFrame_4755133c5c4c59be,
                  mid_validate_8ba9fe7a847cecad,
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
