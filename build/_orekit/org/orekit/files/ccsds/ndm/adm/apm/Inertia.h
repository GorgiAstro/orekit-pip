#ifndef org_orekit_files_ccsds_ndm_adm_apm_Inertia_H
#define org_orekit_files_ccsds_ndm_adm_apm_Inertia_H

#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
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

              class Inertia : public ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getFrame_0fc1562b68204151,
                  mid_getInertiaMatrix_b2eebabce70526d8,
                  mid_setFrame_2c8b859a72c0094e,
                  mid_setInertiaMatrixEntry_e98d7b3e971b6087,
                  mid_validate_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Inertia(jobject obj) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Inertia(const Inertia& obj) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(obj) {}

                Inertia();

                ::org::orekit::files::ccsds::definitions::FrameFacade getFrame() const;
                ::org::hipparchus::linear::RealMatrix getInertiaMatrix() const;
                void setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setInertiaMatrixEntry(jint, jint, jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(Inertia);
              extern PyTypeObject *PY_TYPE(Inertia);

              class t_Inertia {
              public:
                PyObject_HEAD
                Inertia object;
                static PyObject *wrap_Object(const Inertia&);
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
