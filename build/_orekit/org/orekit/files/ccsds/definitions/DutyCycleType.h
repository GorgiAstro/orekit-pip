#ifndef org_orekit_files_ccsds_definitions_DutyCycleType_H
#define org_orekit_files_ccsds_definitions_DutyCycleType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class DutyCycleType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class DutyCycleType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_811734fd48298b7e,
              mid_values_550894adaa639e40,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DutyCycleType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DutyCycleType(const DutyCycleType& obj) : ::java::lang::Enum(obj) {}

            static DutyCycleType *CONTINUOUS;
            static DutyCycleType *TIME;
            static DutyCycleType *TIME_AND_ANGLE;

            static DutyCycleType valueOf(const ::java::lang::String &);
            static JArray< DutyCycleType > values();
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
          extern PyType_Def PY_TYPE_DEF(DutyCycleType);
          extern PyTypeObject *PY_TYPE(DutyCycleType);

          class t_DutyCycleType {
          public:
            PyObject_HEAD
            DutyCycleType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DutyCycleType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DutyCycleType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DutyCycleType&, PyTypeObject *);
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
