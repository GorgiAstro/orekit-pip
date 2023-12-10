#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmDataSubStructureKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmDataSubStructureKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OcmParser;
              class OcmDataSubStructureKey;
            }
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
            namespace ocm {

              class OcmDataSubStructureKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_060308836bc1ab40,
                  mid_valueOf_c62790a61b373294,
                  mid_values_2040e146b7931658,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OcmDataSubStructureKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmDataSubStructureKey(const OcmDataSubStructureKey& obj) : ::java::lang::Enum(obj) {}

                static OcmDataSubStructureKey *COV;
                static OcmDataSubStructureKey *MAN;
                static OcmDataSubStructureKey *OD;
                static OcmDataSubStructureKey *PERT;
                static OcmDataSubStructureKey *PHYS;
                static OcmDataSubStructureKey *TRAJ;
                static OcmDataSubStructureKey *USER;
                static OcmDataSubStructureKey *cov;
                static OcmDataSubStructureKey *man;
                static OcmDataSubStructureKey *od;
                static OcmDataSubStructureKey *pert;
                static OcmDataSubStructureKey *phys;
                static OcmDataSubStructureKey *traj;
                static OcmDataSubStructureKey *user;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser &) const;
                static OcmDataSubStructureKey valueOf(const ::java::lang::String &);
                static JArray< OcmDataSubStructureKey > values();
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OcmDataSubStructureKey);
              extern PyTypeObject *PY_TYPE(OcmDataSubStructureKey);

              class t_OcmDataSubStructureKey {
              public:
                PyObject_HEAD
                OcmDataSubStructureKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OcmDataSubStructureKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OcmDataSubStructureKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OcmDataSubStructureKey&, PyTypeObject *);
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
