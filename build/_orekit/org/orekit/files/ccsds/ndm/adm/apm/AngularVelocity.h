#ifndef org_orekit_files_ccsds_ndm_adm_apm_AngularVelocity_H
#define org_orekit_files_ccsds_ndm_adm_apm_AngularVelocity_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
                  mid_init$_7ae3461a92a43152,
                  mid_getAngVelX_456d9a2f64d6b28d,
                  mid_getAngVelY_456d9a2f64d6b28d,
                  mid_getAngVelZ_456d9a2f64d6b28d,
                  mid_getEndpoints_160aadf35481229b,
                  mid_getFrame_aa70fdb14ae9305f,
                  mid_setAngVelX_77e0f9a1f260e2e5,
                  mid_setAngVelY_77e0f9a1f260e2e5,
                  mid_setAngVelZ_77e0f9a1f260e2e5,
                  mid_setFrame_a455f3ff24eb0b47,
                  mid_validate_77e0f9a1f260e2e5,
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
