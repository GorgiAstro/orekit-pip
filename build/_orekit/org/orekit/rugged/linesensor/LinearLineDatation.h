#ifndef org_orekit_rugged_linesensor_LinearLineDatation_H
#define org_orekit_rugged_linesensor_LinearLineDatation_H

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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        class LinearLineDatation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_574dcea0b820e53f,
            mid_getDate_f359a0110559347a,
            mid_getLine_fd347811007a6ba3,
            mid_getRate_04fd0666b613d2ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LinearLineDatation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LinearLineDatation(const LinearLineDatation& obj) : ::java::lang::Object(obj) {}

          LinearLineDatation(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble);

          ::org::orekit::time::AbsoluteDate getDate(jdouble) const;
          jdouble getLine(const ::org::orekit::time::AbsoluteDate &) const;
          jdouble getRate(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(LinearLineDatation);
        extern PyTypeObject *PY_TYPE(LinearLineDatation);

        class t_LinearLineDatation {
        public:
          PyObject_HEAD
          LinearLineDatation object;
          static PyObject *wrap_Object(const LinearLineDatation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
