#ifndef org_orekit_files_ccsds_definitions_OnOff_H
#define org_orekit_files_ccsds_definitions_OnOff_H

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
          class OnOff;
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

          class OnOff : public ::java::lang::Enum {
           public:
            enum {
              mid_isOn_b108b35ef48e27bd,
              mid_valueOf_2fa16bd229e33be8,
              mid_values_fa00b235f66b4b90,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnOff(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnOff(const OnOff& obj) : ::java::lang::Enum(obj) {}

            static OnOff *OFF;
            static OnOff *ON;

            jboolean isOn() const;
            static OnOff valueOf(const ::java::lang::String &);
            static JArray< OnOff > values();
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
          extern PyType_Def PY_TYPE_DEF(OnOff);
          extern PyTypeObject *PY_TYPE(OnOff);

          class t_OnOff {
          public:
            PyObject_HEAD
            OnOff object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OnOff *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OnOff&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OnOff&, PyTypeObject *);
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
