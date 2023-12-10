#ifndef org_orekit_forces_gravity_potential_TideSystem_H
#define org_orekit_forces_gravity_potential_TideSystem_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
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

          class TideSystem : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_4bc8f27efb8cfbb6,
              mid_values_0d5df8554e1bc479,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TideSystem(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TideSystem(const TideSystem& obj) : ::java::lang::Enum(obj) {}

            static TideSystem *TIDE_FREE;
            static TideSystem *UNKNOWN;
            static TideSystem *ZERO_TIDE;

            static TideSystem valueOf(const ::java::lang::String &);
            static JArray< TideSystem > values();
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
          extern PyType_Def PY_TYPE_DEF(TideSystem);
          extern PyTypeObject *PY_TYPE(TideSystem);

          class t_TideSystem {
          public:
            PyObject_HEAD
            TideSystem object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TideSystem *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TideSystem&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TideSystem&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
