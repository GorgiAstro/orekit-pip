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
                  mid_init$_0fa09c18fee449d5,
                  mid_getFrame_5d5dd95b04037824,
                  mid_getInertiaMatrix_688b496048ff947b,
                  mid_setFrame_849bc9e3b38b9bcb,
                  mid_setInertiaMatrixEntry_1506189166690b5e,
                  mid_validate_17db3a65980d3441,
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
