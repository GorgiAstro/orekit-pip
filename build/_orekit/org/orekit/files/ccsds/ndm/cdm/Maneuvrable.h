#ifndef org_orekit_files_ccsds_ndm_cdm_Maneuvrable_H
#define org_orekit_files_ccsds_ndm_cdm_Maneuvrable_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class Maneuvrable;
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
          namespace cdm {

            class Maneuvrable : public ::java::lang::Enum {
             public:
              enum {
                mid_getEnum_c48bbcf271102c5c,
                mid_getValue_1c1fa1e935d6cdcf,
                mid_toString_1c1fa1e935d6cdcf,
                mid_valueOf_c48bbcf271102c5c,
                mid_values_2ccb0c302483ecc6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Maneuvrable(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Maneuvrable(const Maneuvrable& obj) : ::java::lang::Enum(obj) {}

              static Maneuvrable *NO;
              static Maneuvrable *N_A;
              static Maneuvrable *YES;

              static Maneuvrable getEnum(const ::java::lang::String &);
              ::java::lang::String getValue() const;
              ::java::lang::String toString() const;
              static Maneuvrable valueOf(const ::java::lang::String &);
              static JArray< Maneuvrable > values();
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(Maneuvrable);
            extern PyTypeObject *PY_TYPE(Maneuvrable);

            class t_Maneuvrable {
            public:
              PyObject_HEAD
              Maneuvrable object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_Maneuvrable *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const Maneuvrable&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const Maneuvrable&, PyTypeObject *);
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
