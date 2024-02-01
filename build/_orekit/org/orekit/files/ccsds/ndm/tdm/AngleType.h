#ifndef org_orekit_files_ccsds_ndm_tdm_AngleType_H
#define org_orekit_files_ccsds_ndm_tdm_AngleType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class AngleType;
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

            class AngleType : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_0b174540f4bb7778,
                mid_values_0e3cd1e9753e2a4e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AngleType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AngleType(const AngleType& obj) : ::java::lang::Enum(obj) {}

              static AngleType *AZEL;
              static AngleType *RADEC;
              static AngleType *XEYN;
              static AngleType *XSYE;

              static AngleType valueOf(const ::java::lang::String &);
              static JArray< AngleType > values();
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
            extern PyType_Def PY_TYPE_DEF(AngleType);
            extern PyTypeObject *PY_TYPE(AngleType);

            class t_AngleType {
            public:
              PyObject_HEAD
              AngleType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AngleType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AngleType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AngleType&, PyTypeObject *);
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
