#ifndef org_orekit_files_ccsds_ndm_adm_apm_Inertia_H
#define org_orekit_files_ccsds_ndm_adm_apm_Inertia_H

#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace files {
      namespace ccsds {
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

              class Inertia : public ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_getFrame_aa70fdb14ae9305f,
                  mid_getInertiaMatrix_7116bbecdd8ceb21,
                  mid_setFrame_a455f3ff24eb0b47,
                  mid_setInertiaMatrixEntry_78e41e7b5124a628,
                  mid_validate_77e0f9a1f260e2e5,
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
