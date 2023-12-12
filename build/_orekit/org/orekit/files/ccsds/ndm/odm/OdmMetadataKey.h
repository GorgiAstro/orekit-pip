#ifndef org_orekit_files_ccsds_ndm_odm_OdmMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_OdmMetadataKey_H

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
          namespace odm {
            class OdmMetadataKey;
            class OdmMetadata;
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
          namespace odm {

            class OdmMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_817926ffc925014a,
                mid_valueOf_2011d501e4da0a3f,
                mid_values_97e2df4fd7b8b957,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OdmMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OdmMetadataKey(const OdmMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static OdmMetadataKey *OBJECT_NAME;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::OdmMetadata &) const;
              static OdmMetadataKey valueOf(const ::java::lang::String &);
              static JArray< OdmMetadataKey > values();
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
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(OdmMetadataKey);
            extern PyTypeObject *PY_TYPE(OdmMetadataKey);

            class t_OdmMetadataKey {
            public:
              PyObject_HEAD
              OdmMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_OdmMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const OdmMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const OdmMetadataKey&, PyTypeObject *);
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
