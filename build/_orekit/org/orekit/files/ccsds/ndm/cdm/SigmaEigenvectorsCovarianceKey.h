#ifndef org_orekit_files_ccsds_ndm_cdm_SigmaEigenvectorsCovarianceKey_H
#define org_orekit_files_ccsds_ndm_cdm_SigmaEigenvectorsCovarianceKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class SigmaEigenvectorsCovariance;
            class SigmaEigenvectorsCovarianceKey;
          }
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class SigmaEigenvectorsCovarianceKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_5f8131a06e185f49,
                mid_valueOf_7a2bddddfb2bfaf3,
                mid_values_4d58d7c18eb97df4,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SigmaEigenvectorsCovarianceKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SigmaEigenvectorsCovarianceKey(const SigmaEigenvectorsCovarianceKey& obj) : ::java::lang::Enum(obj) {}

              static SigmaEigenvectorsCovarianceKey *COMMENT;
              static SigmaEigenvectorsCovarianceKey *CSIG3EIGVEC3;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance &) const;
              static SigmaEigenvectorsCovarianceKey valueOf(const ::java::lang::String &);
              static JArray< SigmaEigenvectorsCovarianceKey > values();
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
            extern PyType_Def PY_TYPE_DEF(SigmaEigenvectorsCovarianceKey);
            extern PyTypeObject *PY_TYPE(SigmaEigenvectorsCovarianceKey);

            class t_SigmaEigenvectorsCovarianceKey {
            public:
              PyObject_HEAD
              SigmaEigenvectorsCovarianceKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_SigmaEigenvectorsCovarianceKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const SigmaEigenvectorsCovarianceKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const SigmaEigenvectorsCovarianceKey&, PyTypeObject *);
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
