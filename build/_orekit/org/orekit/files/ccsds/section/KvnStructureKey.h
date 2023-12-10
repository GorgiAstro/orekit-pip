#ifndef org_orekit_files_ccsds_section_KvnStructureKey_H
#define org_orekit_files_ccsds_section_KvnStructureKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class KvnStructureKey;
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

          class KvnStructureKey : public ::java::lang::Enum {
           public:
            enum {
              mid_process_6f09ff368ed52756,
              mid_valueOf_e66b49010704c2ff,
              mid_values_e650fa9e948e1781,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KvnStructureKey(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KvnStructureKey(const KvnStructureKey& obj) : ::java::lang::Enum(obj) {}

            static KvnStructureKey *DATA;
            static KvnStructureKey *META;

            jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser &) const;
            static KvnStructureKey valueOf(const ::java::lang::String &);
            static JArray< KvnStructureKey > values();
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
          extern PyType_Def PY_TYPE_DEF(KvnStructureKey);
          extern PyTypeObject *PY_TYPE(KvnStructureKey);

          class t_KvnStructureKey {
          public:
            PyObject_HEAD
            KvnStructureKey object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_KvnStructureKey *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const KvnStructureKey&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const KvnStructureKey&, PyTypeObject *);
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
