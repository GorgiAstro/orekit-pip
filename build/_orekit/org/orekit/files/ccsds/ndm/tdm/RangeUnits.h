#ifndef org_orekit_files_ccsds_ndm_tdm_RangeUnits_H
#define org_orekit_files_ccsds_ndm_tdm_RangeUnits_H

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
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeUnits;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class RangeUnits : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_2a634a8ba66e51d3,
                mid_values_d863b9b9ef88708a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RangeUnits(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RangeUnits(const RangeUnits& obj) : ::java::lang::Enum(obj) {}

              static RangeUnits *RU;
              static RangeUnits *km;
              static RangeUnits *s;

              static RangeUnits valueOf(const ::java::lang::String &);
              static JArray< RangeUnits > values();
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
            extern PyType_Def PY_TYPE_DEF(RangeUnits);
            extern PyTypeObject *PY_TYPE(RangeUnits);

            class t_RangeUnits {
            public:
              PyObject_HEAD
              RangeUnits object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_RangeUnits *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const RangeUnits&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const RangeUnits&, PyTypeObject *);
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
