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
                  mid_init$_ff7cb6c242604316,
                  mid_getAngVelX_9981f74b2d109da6,
                  mid_getAngVelY_9981f74b2d109da6,
                  mid_getAngVelZ_9981f74b2d109da6,
                  mid_getEndpoints_d67fadc29cf1ce4a,
                  mid_getFrame_0fc1562b68204151,
                  mid_setAngVelX_1ad26e8c8c0cd65b,
                  mid_setAngVelY_1ad26e8c8c0cd65b,
                  mid_setAngVelZ_1ad26e8c8c0cd65b,
                  mid_setFrame_2c8b859a72c0094e,
                  mid_validate_1ad26e8c8c0cd65b,
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
