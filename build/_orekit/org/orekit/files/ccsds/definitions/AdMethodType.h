#ifndef org_orekit_files_ccsds_definitions_AdMethodType_H
#define org_orekit_files_ccsds_definitions_AdMethodType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class AdMethodType;
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

          class AdMethodType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_66c583535c162a19,
              mid_values_36d66a4cda74f573,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AdMethodType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AdMethodType(const AdMethodType& obj) : ::java::lang::Enum(obj) {}

            static AdMethodType *BATCH;
            static AdMethodType *EKF;
            static AdMethodType *FILTER_SMOOTHER;
            static AdMethodType *QUEST;
            static AdMethodType *Q_METHOD;
            static AdMethodType *TRIAD;

            static AdMethodType valueOf(const ::java::lang::String &);
            static JArray< AdMethodType > values();
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
          extern PyType_Def PY_TYPE_DEF(AdMethodType);
          extern PyTypeObject *PY_TYPE(AdMethodType);

          class t_AdMethodType {
          public:
            PyObject_HEAD
            AdMethodType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AdMethodType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AdMethodType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AdMethodType&, PyTypeObject *);
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
