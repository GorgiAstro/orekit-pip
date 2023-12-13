#ifndef org_orekit_files_ccsds_ndm_tdm_CorrectionApplied_H
#define org_orekit_files_ccsds_ndm_tdm_CorrectionApplied_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class CorrectionApplied;
          }
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
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class CorrectionApplied : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_f6417342984ad32f,
                mid_values_0dcafd59278b6c8a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CorrectionApplied(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CorrectionApplied(const CorrectionApplied& obj) : ::java::lang::Enum(obj) {}

              static CorrectionApplied *NO;
              static CorrectionApplied *YES;

              static CorrectionApplied valueOf(const ::java::lang::String &);
              static JArray< CorrectionApplied > values();
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(CorrectionApplied);
            extern PyTypeObject *PY_TYPE(CorrectionApplied);

            class t_CorrectionApplied {
            public:
              PyObject_HEAD
              CorrectionApplied object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CorrectionApplied *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CorrectionApplied&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CorrectionApplied&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
