#ifndef org_orekit_files_ilrs_PythonILRSHeader_H
#define org_orekit_files_ilrs_PythonILRSHeader_H

#include "org/orekit/files/ilrs/ILRSHeader.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class PythonILRSHeader : public ::org::orekit::files::ilrs::ILRSHeader {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonILRSHeader(jobject obj) : ::org::orekit::files::ilrs::ILRSHeader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonILRSHeader(const PythonILRSHeader& obj) : ::org::orekit::files::ilrs::ILRSHeader(obj) {}

          PythonILRSHeader();

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonILRSHeader);
        extern PyTypeObject *PY_TYPE(PythonILRSHeader);

        class t_PythonILRSHeader {
        public:
          PyObject_HEAD
          PythonILRSHeader object;
          static PyObject *wrap_Object(const PythonILRSHeader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
