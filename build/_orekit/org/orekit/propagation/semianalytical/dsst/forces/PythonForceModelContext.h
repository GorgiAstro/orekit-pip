#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonForceModelContext_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonForceModelContext_H

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
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class PythonForceModelContext : public ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext {
             public:
              enum {
                mid_init$_a95aaab9d04f30fd,
                mid_finalize_0640e6acf969ed28,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonForceModelContext(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonForceModelContext(const PythonForceModelContext& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(obj) {}

              PythonForceModelContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &);

              void finalize() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonForceModelContext);
            extern PyTypeObject *PY_TYPE(PythonForceModelContext);

            class t_PythonForceModelContext {
            public:
              PyObject_HEAD
              PythonForceModelContext object;
              static PyObject *wrap_Object(const PythonForceModelContext&);
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
