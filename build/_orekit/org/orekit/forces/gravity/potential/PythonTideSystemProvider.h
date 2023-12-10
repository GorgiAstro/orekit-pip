#ifndef org_orekit_forces_gravity_potential_PythonTideSystemProvider_H
#define org_orekit_forces_gravity_potential_PythonTideSystemProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class TideSystemProvider;
          class TideSystem;
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
    namespace forces {
      namespace gravity {
        namespace potential {

          class PythonTideSystemProvider : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_finalize_0fa09c18fee449d5,
              mid_getTideSystem_c68abf1ca1fc273e,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
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
