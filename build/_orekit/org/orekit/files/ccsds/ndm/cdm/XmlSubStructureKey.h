#ifndef org_orekit_files_ccsds_ndm_cdm_XmlSubStructureKey_H
#define org_orekit_files_ccsds_ndm_cdm_XmlSubStructureKey_H

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
          namespace cdm {
            class CdmParser;
            class XmlSubStructureKey;
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

            class XmlSubStructureKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_eca7b964a4675051,
                mid_valueOf_5370d6bade69311c,
                mid_values_0d8e5a273baf0374,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit XmlSubStructureKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              XmlSubStructureKey(const XmlSubStructureKey& obj) : ::java::lang::Enum(obj) {}

              static XmlSubStructureKey *COMMENT;
              static XmlSubStructureKey *additionalParameters;
              static XmlSubStructureKey *covarianceMatrix;
              static XmlSubStructureKey *odParameters;
              static XmlSubStructureKey *relativeMetadataData;
              static XmlSubStructureKey *relativeStateVector;
              static XmlSubStructureKey *segment;
              static XmlSubStructureKey *stateVector;
              static XmlSubStructureKey *userDefinedParameters;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::ndm::cdm::CdmParser &) const;
              static XmlSubStructureKey valueOf(const ::java::lang::String &);
              static JArray< XmlSubStructureKey > values();
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
            extern PyType_Def PY_TYPE_DEF(XmlSubStructureKey);
            extern PyTypeObject *PY_TYPE(XmlSubStructureKey);

            class t_XmlSubStructureKey {
            public:
              PyObject_HEAD
              XmlSubStructureKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_XmlSubStructureKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const XmlSubStructureKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const XmlSubStructureKey&, PyTypeObject *);
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
