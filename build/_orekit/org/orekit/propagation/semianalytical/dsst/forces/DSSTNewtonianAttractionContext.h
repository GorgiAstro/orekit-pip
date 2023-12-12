#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTNewtonianAttractionContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTNewtonianAttractionContext_H

#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"

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
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class DSSTNewtonianAttractionContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_init$_5393a5d2b5753509,
                mid_getGM_557b8123390d8d0c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTNewtonianAttractionContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTNewtonianAttractionContext(const DSSTNewtonianAttractionContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              DSSTNewtonianAttractionContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, const JArray< jdouble > &);

              jdouble getGM() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTNewtonianAttractionContext);
            extern PyTypeObject *PY_TYPE(DSSTNewtonianAttractionContext);

            class t_DSSTNewtonianAttractionContext {
            public:
              PyObject_HEAD
              DSSTNewtonianAttractionContext object;
              static PyObject *wrap_Object(const DSSTNewtonianAttractionContext&);
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
