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
                  mid_init$_ff7cb6c242604316,
                  mid_getEndpoints_d67fadc29cf1ce4a,
                  mid_getQuaternion_c78679230082648b,
                  mid_getQuaternionDot_c78679230082648b,
                  mid_hasRates_eee3de00fe971136,
                  mid_setQ_4320462275d66e78,
                  mid_setQDot_4320462275d66e78,
                  mid_validate_1ad26e8c8c0cd65b,
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
