#ifndef org_orekit_files_rinex_navigation_SbasId_H
#define org_orekit_files_rinex_navigation_SbasId_H

#include "java/lang/Enum.h"

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
namespace java {
  namespace lang {
    class String;
    class Class;
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
              mid_valueOf_22b5c5331d77e2d2,
              mid_values_a796ebe7f942ce44,
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
