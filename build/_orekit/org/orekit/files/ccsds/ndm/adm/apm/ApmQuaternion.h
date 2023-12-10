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
                  mid_init$_7ae3461a92a43152,
                  mid_getEndpoints_160aadf35481229b,
                  mid_getQuaternion_db551426640930fe,
                  mid_getQuaternionDot_db551426640930fe,
                  mid_hasRates_e470b6d9e0d979db,
                  mid_setQ_987a5fb872043b12,
                  mid_setQDot_987a5fb872043b12,
                  mid_validate_77e0f9a1f260e2e5,
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
