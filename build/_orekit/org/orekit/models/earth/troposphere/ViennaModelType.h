#ifndef org_orekit_models_earth_troposphere_ViennaModelType_H
#define org_orekit_models_earth_troposphere_ViennaModelType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class ViennaModelType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          class ViennaModelType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_7a885eb1c989bb47,
              mid_values_e6df3b8046caec9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ViennaModelType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ViennaModelType(const ViennaModelType& obj) : ::java::lang::Enum(obj) {}

            static ViennaModelType *VIENNA_ONE;
            static ViennaModelType *VIENNA_THREE;

            static ViennaModelType valueOf(const ::java::lang::String &);
            static JArray< ViennaModelType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          extern PyType_Def PY_TYPE_DEF(ViennaModelType);
          extern PyTypeObject *PY_TYPE(ViennaModelType);

          class t_ViennaModelType {
          public:
            PyObject_HEAD
            ViennaModelType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ViennaModelType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ViennaModelType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ViennaModelType&, PyTypeObject *);
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
