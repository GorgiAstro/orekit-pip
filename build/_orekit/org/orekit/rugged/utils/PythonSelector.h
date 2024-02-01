#ifndef org_orekit_rugged_utils_PythonSelector_H
#define org_orekit_rugged_utils_PythonSelector_H

#include "org/orekit/rugged/utils/Selector.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        class PythonSelector : public ::org::orekit::rugged::utils::Selector {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_selectFirst_0fc66ee74538f12c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSelector(jobject obj) : ::org::orekit::rugged::utils::Selector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSelector(const PythonSelector& obj) : ::org::orekit::rugged::utils::Selector(obj) {}

          PythonSelector();

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          jboolean selectFirst(jdouble, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(PythonSelector);
        extern PyTypeObject *PY_TYPE(PythonSelector);

        class t_PythonSelector {
        public:
          PyObject_HEAD
          PythonSelector object;
          static PyObject *wrap_Object(const PythonSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
