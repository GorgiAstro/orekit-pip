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
            mid_init$_0640e6acf969ed28,
            mid_addDataBlock_8144a496fd0af892,
            mid_formatIntegerOrNaN_637f0334ff6ee92d,
            mid_getComments_0d9551367f7ecdef,
            mid_getDataBlocks_0d9551367f7ecdef,
            mid_handleNaN_60bb1b490b673cbf,
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
