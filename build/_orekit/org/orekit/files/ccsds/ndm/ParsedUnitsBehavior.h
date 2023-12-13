#ifndef org_orekit_files_ccsds_ndm_ParsedUnitsBehavior_H
#define org_orekit_files_ccsds_ndm_ParsedUnitsBehavior_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParsedUnitsBehavior;
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          class ParsedUnitsBehavior : public ::java::lang::Enum {
           public:
            enum {
              mid_select_950d7f19836d06e5,
              mid_valueOf_58cfe10c82037514,
              mid_values_9998cd0e4f55bdc4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParsedUnitsBehavior(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParsedUnitsBehavior(const ParsedUnitsBehavior& obj) : ::java::lang::Enum(obj) {}

            static ParsedUnitsBehavior *CONVERT_COMPATIBLE;
            static ParsedUnitsBehavior *IGNORE_PARSED;
            static ParsedUnitsBehavior *STRICT_COMPLIANCE;

            ::org::orekit::utils::units::Unit select(const ::org::orekit::utils::units::Unit &, const ::org::orekit::utils::units::Unit &) const;
            static ParsedUnitsBehavior valueOf(const ::java::lang::String &);
            static JArray< ParsedUnitsBehavior > values();
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
        namespace ndm {
          extern PyType_Def PY_TYPE_DEF(ParsedUnitsBehavior);
          extern PyTypeObject *PY_TYPE(ParsedUnitsBehavior);

          class t_ParsedUnitsBehavior {
          public:
            PyObject_HEAD
            ParsedUnitsBehavior object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ParsedUnitsBehavior *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ParsedUnitsBehavior&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ParsedUnitsBehavior&, PyTypeObject *);
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
