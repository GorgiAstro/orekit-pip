#ifndef org_orekit_files_ccsds_section_XmlStructureKey_H
#define org_orekit_files_ccsds_section_XmlStructureKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class XmlStructureKey;
        }
        namespace utils {
          namespace parsing {
            class AbstractConstituentParser;
          }
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
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          class XmlStructureKey : public ::java::lang::Enum {
           public:
            enum {
              mid_process_6f09ff368ed52756,
              mid_valueOf_af857aa1fe55eef0,
              mid_values_e2e167fb9c360584,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit XmlStructureKey(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            XmlStructureKey(const XmlStructureKey& obj) : ::java::lang::Enum(obj) {}

            static XmlStructureKey *body;
            static XmlStructureKey *data;
            static XmlStructureKey *header;
            static XmlStructureKey *metadata;
            static XmlStructureKey *segment;

            jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser &) const;
            static XmlStructureKey valueOf(const ::java::lang::String &);
            static JArray< XmlStructureKey > values();
          };
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(XmlStructureKey);
          extern PyTypeObject *PY_TYPE(XmlStructureKey);

          class t_XmlStructureKey {
          public:
            PyObject_HEAD
            XmlStructureKey object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_XmlStructureKey *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const XmlStructureKey&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const XmlStructureKey&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
