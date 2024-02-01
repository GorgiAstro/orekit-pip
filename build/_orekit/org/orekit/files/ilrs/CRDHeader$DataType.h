#ifndef org_orekit_files_ilrs_CRDHeader$DataType_H
#define org_orekit_files_ilrs_CRDHeader$DataType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDHeader$DataType;
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
      namespace ilrs {

        class CRDHeader$DataType : public ::java::lang::Enum {
         public:
          enum {
            mid_getDataType_a50ea0afb412449f,
            mid_getIndicator_d6ab429752e7c267,
            mid_valueOf_c1c818f24ac72769,
            mid_values_ca2db5aa479af477,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDHeader$DataType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDHeader$DataType(const CRDHeader$DataType& obj) : ::java::lang::Enum(obj) {}

          static CRDHeader$DataType *FULL_RATE;
          static CRDHeader$DataType *NORMAL_POINT;
          static CRDHeader$DataType *SAMPLED_ENGIEERING;

          static CRDHeader$DataType getDataType(jint);
          jint getIndicator() const;
          static CRDHeader$DataType valueOf(const ::java::lang::String &);
          static JArray< CRDHeader$DataType > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CRDHeader$DataType);
        extern PyTypeObject *PY_TYPE(CRDHeader$DataType);

        class t_CRDHeader$DataType {
        public:
          PyObject_HEAD
          CRDHeader$DataType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CRDHeader$DataType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CRDHeader$DataType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CRDHeader$DataType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
