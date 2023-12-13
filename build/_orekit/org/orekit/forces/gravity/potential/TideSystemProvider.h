#ifndef org_orekit_forces_gravity_potential_TideSystemProvider_H
#define org_orekit_forces_gravity_potential_TideSystemProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          class TideSystem;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          class TideSystemProvider : public ::java::lang::Object {
           public:
            enum {
              mid_getTideSystem_b2b14af197a8eaf6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TideSystemProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TideSystemProvider(const TideSystemProvider& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
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
          extern PyType_Def PY_TYPE_DEF(TideSystemProvider);
          extern PyTypeObject *PY_TYPE(TideSystemProvider);

          class t_TideSystemProvider {
          public:
            PyObject_HEAD
            TideSystemProvider object;
            static PyObject *wrap_Object(const TideSystemProvider&);
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
