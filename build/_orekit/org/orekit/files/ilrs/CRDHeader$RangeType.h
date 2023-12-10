#ifndef org_orekit_files_ilrs_CRDHeader$RangeType_H
#define org_orekit_files_ilrs_CRDHeader$RangeType_H

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
      namespace ilrs {
        class CRDHeader$RangeType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRDHeader$RangeType : public ::java::lang::Enum {
         public:
          enum {
            mid_getIndicator_570ce0828f81a2c1,
            mid_getRangeType_22475d41bb366e9e,
            mid_valueOf_489a5542e981a997,
            mid_values_d34a4affbcf89f4a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDHeader$RangeType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDHeader$RangeType(const CRDHeader$RangeType& obj) : ::java::lang::Enum(obj) {}

          static CRDHeader$RangeType *MIXED;
          static CRDHeader$RangeType *NO_RANGES;
          static CRDHeader$RangeType *ONE_WAY;
          static CRDHeader$RangeType *RECEIVED_ONLY;
          static CRDHeader$RangeType *TWO_WAY;

          jint getIndicator() const;
          static CRDHeader$RangeType getRangeType(jint);
          static CRDHeader$RangeType valueOf(const ::java::lang::String &);
          static JArray< CRDHeader$RangeType > values();
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
        extern PyType_Def PY_TYPE_DEF(CRDHeader$RangeType);
        extern PyTypeObject *PY_TYPE(CRDHeader$RangeType);

        class t_CRDHeader$RangeType {
        public:
          PyObject_HEAD
          CRDHeader$RangeType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CRDHeader$RangeType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CRDHeader$RangeType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CRDHeader$RangeType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
