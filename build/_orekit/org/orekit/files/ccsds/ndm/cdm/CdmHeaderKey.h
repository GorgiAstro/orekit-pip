#ifndef org_orekit_files_ccsds_ndm_cdm_CdmHeaderKey_H
#define org_orekit_files_ccsds_ndm_cdm_CdmHeaderKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
        namespace ndm {
          namespace cdm {
            class CdmHeader;
            class CdmHeaderKey;
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

            class CdmHeaderKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_67121ab4d9b3519d,
                mid_valueOf_609d0da771ba4943,
                mid_values_0f777799d9c5548e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmHeaderKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmHeaderKey(const CdmHeaderKey& obj) : ::java::lang::Enum(obj) {}

              static CdmHeaderKey *CLASSIFICATION;
              static CdmHeaderKey *MESSAGE_FOR;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader &) const;
              static CdmHeaderKey valueOf(const ::java::lang::String &);
              static JArray< CdmHeaderKey > values();
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
            extern PyType_Def PY_TYPE_DEF(CdmHeaderKey);
            extern PyTypeObject *PY_TYPE(CdmHeaderKey);

            class t_CdmHeaderKey {
            public:
              PyObject_HEAD
              CdmHeaderKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CdmHeaderKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CdmHeaderKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CdmHeaderKey&, PyTypeObject *);
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
