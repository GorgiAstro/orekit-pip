#ifndef org_orekit_files_ccsds_ndm_cdm_AltCovarianceType_H
#define org_orekit_files_ccsds_ndm_cdm_AltCovarianceType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class AltCovarianceType;
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

            class AltCovarianceType : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_f69492cb520c47d8,
                mid_values_ae35e7d8940d4090,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AltCovarianceType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AltCovarianceType(const AltCovarianceType& obj) : ::java::lang::Enum(obj) {}

              static AltCovarianceType *CSIG3EIGVEC3;
              static AltCovarianceType *XYZ;

              static AltCovarianceType valueOf(const ::java::lang::String &);
              static JArray< AltCovarianceType > values();
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
            extern PyType_Def PY_TYPE_DEF(AltCovarianceType);
            extern PyTypeObject *PY_TYPE(AltCovarianceType);

            class t_AltCovarianceType {
            public:
              PyObject_HEAD
              AltCovarianceType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AltCovarianceType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AltCovarianceType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AltCovarianceType&, PyTypeObject *);
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
