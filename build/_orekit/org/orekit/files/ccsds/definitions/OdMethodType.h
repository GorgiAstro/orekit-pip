#ifndef org_orekit_files_ccsds_definitions_OdMethodType_H
#define org_orekit_files_ccsds_definitions_OdMethodType_H

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
          class OdMethodType;
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

          class OdMethodType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_2302266ffdb97b74,
              mid_values_e15e8adbc1722994,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OdMethodType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OdMethodType(const OdMethodType& obj) : ::java::lang::Enum(obj) {}

            static OdMethodType *BWLS;
            static OdMethodType *EKF;
            static OdMethodType *SF;
            static OdMethodType *SRIF;
            static OdMethodType *SSEM;

            static OdMethodType valueOf(const ::java::lang::String &);
            static JArray< OdMethodType > values();
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
          extern PyType_Def PY_TYPE_DEF(OdMethodType);
          extern PyTypeObject *PY_TYPE(OdMethodType);

          class t_OdMethodType {
          public:
            PyObject_HEAD
            OdMethodType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_OdMethodType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const OdMethodType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const OdMethodType&, PyTypeObject *);
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
