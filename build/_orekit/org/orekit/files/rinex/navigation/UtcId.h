#ifndef org_orekit_files_rinex_navigation_UtcId_H
#define org_orekit_files_rinex_navigation_UtcId_H

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
          class UtcId;
        }
      }
    }
    namespace errors {
      class OrekitIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class UtcId : public ::java::lang::Enum {
           public:
            enum {
              mid_parseUtcId_efdc3d036c3c05a9,
              mid_valueOf_efdc3d036c3c05a9,
              mid_values_efbcf3660b9b5e05,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UtcId(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UtcId(const UtcId& obj) : ::java::lang::Enum(obj) {}

            static UtcId *GAL;
            static UtcId *IRN;
            static UtcId *NICT;
            static UtcId *NIST;
            static UtcId *NTSC;
            static UtcId *OP;
            static UtcId *SU;
            static UtcId *USNO;

            static UtcId parseUtcId(const ::java::lang::String &);
            static UtcId valueOf(const ::java::lang::String &);
            static JArray< UtcId > values();
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
          extern PyType_Def PY_TYPE_DEF(UtcId);
          extern PyTypeObject *PY_TYPE(UtcId);

          class t_UtcId {
          public:
            PyObject_HEAD
            UtcId object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_UtcId *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const UtcId&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const UtcId&, PyTypeObject *);
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
