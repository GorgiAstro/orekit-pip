#ifndef org_orekit_gnss_metric_ntrip_RecordType_H
#define org_orekit_gnss_metric_ntrip_RecordType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class RecordType;
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
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class RecordType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_7cedf5e291fba3f6,
              mid_values_176b890e867e8a48,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RecordType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RecordType(const RecordType& obj) : ::java::lang::Enum(obj) {}

            static RecordType *CAS;
            static RecordType *NET;
            static RecordType *STR;

            static RecordType valueOf(const ::java::lang::String &);
            static JArray< RecordType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(RecordType);
          extern PyTypeObject *PY_TYPE(RecordType);

          class t_RecordType {
          public:
            PyObject_HEAD
            RecordType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RecordType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RecordType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RecordType&, PyTypeObject *);
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
