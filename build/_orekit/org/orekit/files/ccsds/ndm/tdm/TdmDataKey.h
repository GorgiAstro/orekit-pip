#ifndef org_orekit_files_ccsds_ndm_tdm_TdmDataKey_H
#define org_orekit_files_ccsds_ndm_tdm_TdmDataKey_H

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
          namespace tdm {
            class TdmDataKey;
            class ObservationsBlock;
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
          namespace tdm {

            class TdmDataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_1696be5353f5ec5d,
                mid_valueOf_801e99a0474a36cb,
                mid_values_5ebc4968bb5ef672,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TdmDataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TdmDataKey(const TdmDataKey& obj) : ::java::lang::Enum(obj) {}

              static TdmDataKey *COMMENT;
              static TdmDataKey *EPOCH;
              static TdmDataKey *observation;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock &) const;
              static TdmDataKey valueOf(const ::java::lang::String &);
              static JArray< TdmDataKey > values();
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
            extern PyType_Def PY_TYPE_DEF(TdmDataKey);
            extern PyTypeObject *PY_TYPE(TdmDataKey);

            class t_TdmDataKey {
            public:
              PyObject_HEAD
              TdmDataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TdmDataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TdmDataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TdmDataKey&, PyTypeObject *);
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
