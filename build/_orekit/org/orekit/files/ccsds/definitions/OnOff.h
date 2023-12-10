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
              mid_isOn_e470b6d9e0d979db,
              mid_valueOf_407ee23562aadd5f,
              mid_values_8ef873722278102a,
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
