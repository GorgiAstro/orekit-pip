#ifndef org_orekit_files_ccsds_definitions_YesNoUnknown_H
#define org_orekit_files_ccsds_definitions_YesNoUnknown_H

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
        namespace definitions {
          class YesNoUnknown;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class YesNoUnknown : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_32a386c88741ddc8,
              mid_values_fca4bc813a82fac6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit YesNoUnknown(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            YesNoUnknown(const YesNoUnknown& obj) : ::java::lang::Enum(obj) {}

            static YesNoUnknown *NO;
            static YesNoUnknown *UNKOWN;
            static YesNoUnknown *YES;

            static YesNoUnknown valueOf(const ::java::lang::String &);
            static JArray< YesNoUnknown > values();
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
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(YesNoUnknown);
          extern PyTypeObject *PY_TYPE(YesNoUnknown);

          class t_YesNoUnknown {
          public:
            PyObject_HEAD
            YesNoUnknown object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_YesNoUnknown *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const YesNoUnknown&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const YesNoUnknown&, PyTypeObject *);
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
