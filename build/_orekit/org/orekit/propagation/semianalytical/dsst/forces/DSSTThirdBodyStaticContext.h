#ifndef org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyStaticContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_DSSTThirdBodyStaticContext_H

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

            class DSSTThirdBodyStaticContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_init$_12159449c454d20b,
                mid_getMaxAR3Pow_570ce0828f81a2c1,
                mid_getMaxEccPow_570ce0828f81a2c1,
                mid_getMaxFreqF_570ce0828f81a2c1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DSSTThirdBodyStaticContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DSSTThirdBodyStaticContext(const DSSTThirdBodyStaticContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              DSSTThirdBodyStaticContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &, jdouble, jdouble, const JArray< jdouble > &);

              jint getMaxAR3Pow() const;
              jint getMaxEccPow() const;
              jint getMaxFreqF() const;
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
            extern PyType_Def PY_TYPE_DEF(DSSTThirdBodyStaticContext);
            extern PyTypeObject *PY_TYPE(DSSTThirdBodyStaticContext);

            class t_DSSTThirdBodyStaticContext {
            public:
              PyObject_HEAD
              DSSTThirdBodyStaticContext object;
              static PyObject *wrap_Object(const DSSTThirdBodyStaticContext&);
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
