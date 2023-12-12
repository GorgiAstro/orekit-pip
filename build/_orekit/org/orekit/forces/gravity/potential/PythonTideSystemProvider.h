#ifndef org_orekit_forces_gravity_potential_PythonTideSystemProvider_H
#define org_orekit_forces_gravity_potential_PythonTideSystemProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class TideSystem;
          class TideSystemProvider;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonTideSystemProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getTideSystem_7d9a2a298dcb49fa,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonTideSystemProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonTideSystemProvider(const PythonTideSystemProvider& obj) : ::java::lang::Object(obj) {}

            PythonTideSystemProvider();

            void finalize() const;
            ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          extern PyType_Def PY_TYPE_DEF(PythonTideSystemProvider);
          extern PyTypeObject *PY_TYPE(PythonTideSystemProvider);

          class t_PythonTideSystemProvider {
          public:
            PyObject_HEAD
            PythonTideSystemProvider object;
            static PyObject *wrap_Object(const PythonTideSystemProvider&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
