#ifndef org_orekit_gnss_metric_ntrip_NavigationSystem_H
#define org_orekit_gnss_metric_ntrip_NavigationSystem_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class NavigationSystem;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class NavigationSystem : public ::java::lang::Enum {
           public:
            enum {
              mid_getNavigationSystem_c510a104a52497aa,
              mid_toString_0090f7797e403f43,
              mid_valueOf_c510a104a52497aa,
              mid_values_6e8c6cc669f12c23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NavigationSystem(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NavigationSystem(const NavigationSystem& obj) : ::java::lang::Enum(obj) {}

            static NavigationSystem *BDS;
            static NavigationSystem *EMPTY;
            static NavigationSystem *GAL;
            static NavigationSystem *GLO;
            static NavigationSystem *GPS;
            static NavigationSystem *QZS;
            static NavigationSystem *SBAS;

            static NavigationSystem getNavigationSystem(const ::java::lang::String &);
            ::java::lang::String toString() const;
            static NavigationSystem valueOf(const ::java::lang::String &);
            static JArray< NavigationSystem > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(NavigationSystem);
          extern PyTypeObject *PY_TYPE(NavigationSystem);

          class t_NavigationSystem {
          public:
            PyObject_HEAD
            NavigationSystem object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NavigationSystem *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NavigationSystem&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NavigationSystem&, PyTypeObject *);
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
