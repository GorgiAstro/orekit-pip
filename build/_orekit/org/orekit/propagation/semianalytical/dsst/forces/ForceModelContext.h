#ifndef org_orekit_propagation_semianalytical_dsst_forces_ForceModelContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_ForceModelContext_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class ForceModelContext : public ::java::lang::Object {
             public:
              enum {
                mid_getAuxiliaryElements_cb6ec8282f1342d0,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ForceModelContext(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ForceModelContext(const ForceModelContext& obj) : ::java::lang::Object(obj) {}

              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements getAuxiliaryElements() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            extern PyType_Def PY_TYPE_DEF(ForceModelContext);
            extern PyTypeObject *PY_TYPE(ForceModelContext);

            class t_ForceModelContext {
            public:
              PyObject_HEAD
              ForceModelContext object;
              static PyObject *wrap_Object(const ForceModelContext&);
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

#endif
