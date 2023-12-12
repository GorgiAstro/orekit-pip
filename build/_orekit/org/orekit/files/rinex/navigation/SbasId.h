#ifndef org_orekit_files_rinex_navigation_SbasId_H
#define org_orekit_files_rinex_navigation_SbasId_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class SbasId;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class SbasId : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_5ed7df7d4ce1b971,
              mid_values_79ab4c9a5b526f56,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SbasId(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SbasId(const SbasId& obj) : ::java::lang::Enum(obj) {}

            static SbasId *A_SBAS;
            static SbasId *BDSBAS;
            static SbasId *EGNOS;
            static SbasId *GAGAN;
            static SbasId *KASS;
            static SbasId *MSAS;
            static SbasId *SACCSA;
            static SbasId *SDCM;
            static SbasId *SPAN;
            static SbasId *WAAS;

            static SbasId valueOf(const ::java::lang::String &);
            static JArray< SbasId > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(SbasId);
          extern PyTypeObject *PY_TYPE(SbasId);

          class t_SbasId {
          public:
            PyObject_HEAD
            SbasId object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SbasId *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SbasId&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SbasId&, PyTypeObject *);
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
