#ifndef org_orekit_rugged_linesensor_LinearLineDatation_H
#define org_orekit_rugged_linesensor_LinearLineDatation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class LineDatation;
      }
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_7a7066686bdc7efc,
            mid_getDate_a76f1ca2cc1b76e5,
            mid_getLine_e912d21057defe63,
            mid_getRate_0ba5fed9597b693e,
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
