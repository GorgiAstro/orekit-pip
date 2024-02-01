#ifndef org_orekit_rugged_linesensor_PythonLineDatation_H
#define org_orekit_rugged_linesensor_PythonLineDatation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace linesensor {
        class LineDatation;
      }
    }
  }
}
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
      namespace linesensor {

        class PythonLineDatation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getDate_d2854c25a21df51f,
            mid_getLine_209f08246d708042,
            mid_getRate_bf28ed64d6e8576b,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonLineDatation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonLineDatation(const PythonLineDatation& obj) : ::java::lang::Object(obj) {}

          PythonLineDatation();

          void finalize() const;
          ::org::orekit::time::AbsoluteDate getDate(jdouble) const;
          jdouble getLine(const ::org::orekit::time::AbsoluteDate &) const;
          jdouble getRate(jdouble) const;
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
    namespace rugged {
      namespace linesensor {
        extern PyType_Def PY_TYPE_DEF(PythonLineDatation);
        extern PyTypeObject *PY_TYPE(PythonLineDatation);

        class t_PythonLineDatation {
        public:
          PyObject_HEAD
          PythonLineDatation object;
          static PyObject *wrap_Object(const PythonLineDatation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
