#ifndef org_orekit_files_ccsds_ndm_odm_CommonMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_CommonMetadataKey_H

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
            class OdmCommonMetadata;
            class CommonMetadataKey;
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

            class CommonMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_ed0894e4f39ba1e9,
                mid_valueOf_f0a630142e41faf7,
                mid_values_6a84328aebdf684c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CommonMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CommonMetadataKey(const CommonMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static CommonMetadataKey *CENTER_NAME;
              static CommonMetadataKey *OBJECT_ID;
              static CommonMetadataKey *REF_FRAME;
              static CommonMetadataKey *REF_FRAME_EPOCH;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata &) const;
              static CommonMetadataKey valueOf(const ::java::lang::String &);
              static JArray< CommonMetadataKey > values();
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
            extern PyType_Def PY_TYPE_DEF(CommonMetadataKey);
            extern PyTypeObject *PY_TYPE(CommonMetadataKey);

            class t_CommonMetadataKey {
            public:
              PyObject_HEAD
              CommonMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CommonMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CommonMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CommonMetadataKey&, PyTypeObject *);
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
