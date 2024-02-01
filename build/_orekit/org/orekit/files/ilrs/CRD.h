#ifndef org_orekit_files_ilrs_CRD_H
#define org_orekit_files_ilrs_CRD_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRD$CRDDataBlock;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRD : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_addDataBlock_6220e04f8e74b4dd,
            mid_formatIntegerOrNaN_43e3765e4d074a90,
            mid_getComments_d751c1a57012b438,
            mid_getDataBlocks_d751c1a57012b438,
            mid_handleNaN_95277969d373e11f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD(const CRD& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *STR_NAN;
          static ::java::lang::String *STR_VALUE_NOT_AVAILABLE;

          CRD();

          void addDataBlock(const ::org::orekit::files::ilrs::CRD$CRDDataBlock &) const;
          static ::java::lang::String formatIntegerOrNaN(jint, jint);
          ::java::util::List getComments() const;
          ::java::util::List getDataBlocks() const;
          static ::java::lang::String handleNaN(const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(CRD);
        extern PyTypeObject *PY_TYPE(CRD);

        class t_CRD {
        public:
          PyObject_HEAD
          CRD object;
          static PyObject *wrap_Object(const CRD&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
