#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmQuaternion_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmQuaternion_H

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
      }
    }
  }
  namespace hipparchus {
    namespace complex {
      class Quaternion;
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

              class ApmQuaternion : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getEndpoints_c60ad1d207bc8e06,
                  mid_getQuaternion_6890e724ec73e493,
                  mid_getQuaternionDot_6890e724ec73e493,
                  mid_hasRates_9ab94ac1dc23b105,
                  mid_setQ_d5322b8b512aeb26,
                  mid_setQDot_d5322b8b512aeb26,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ApmQuaternion(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ApmQuaternion(const ApmQuaternion& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                ApmQuaternion();

                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints getEndpoints() const;
                ::org::hipparchus::complex::Quaternion getQuaternion() const;
                ::org::hipparchus::complex::Quaternion getQuaternionDot() const;
                jboolean hasRates() const;
                void setQ(jint, jdouble) const;
                void setQDot(jint, jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(ApmQuaternion);
              extern PyTypeObject *PY_TYPE(ApmQuaternion);

              class t_ApmQuaternion {
              public:
                PyObject_HEAD
                ApmQuaternion object;
                static PyObject *wrap_Object(const ApmQuaternion&);
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
