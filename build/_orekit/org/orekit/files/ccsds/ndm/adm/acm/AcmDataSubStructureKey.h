#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmDataSubStructureKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmDataSubStructureKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AcmParser;
              class AcmDataSubStructureKey;
            }
          }
        }
        namespace utils {
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
          namespace adm {
            namespace acm {

              class AcmDataSubStructureKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_fbaf0d209c4ad042,
                  mid_valueOf_8768fcaf767e62f1,
                  mid_values_17552994656f8b79,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmDataSubStructureKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmDataSubStructureKey(const AcmDataSubStructureKey& obj) : ::java::lang::Enum(obj) {}

                static AcmDataSubStructureKey *AD;
                static AcmDataSubStructureKey *ATT;
                static AcmDataSubStructureKey *COV;
                static AcmDataSubStructureKey *MAN;
                static AcmDataSubStructureKey *PHYS;
                static AcmDataSubStructureKey *USER;
                static AcmDataSubStructureKey *ad;
                static AcmDataSubStructureKey *att;
                static AcmDataSubStructureKey *cov;
                static AcmDataSubStructureKey *man;
                static AcmDataSubStructureKey *phys;
                static AcmDataSubStructureKey *user;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser &) const;
                static AcmDataSubStructureKey valueOf(const ::java::lang::String &);
                static JArray< AcmDataSubStructureKey > values();
              };
            }
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AcmDataSubStructureKey);
              extern PyTypeObject *PY_TYPE(AcmDataSubStructureKey);

              class t_AcmDataSubStructureKey {
              public:
                PyObject_HEAD
                AcmDataSubStructureKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AcmDataSubStructureKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AcmDataSubStructureKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AcmDataSubStructureKey&, PyTypeObject *);
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
}

#endif
