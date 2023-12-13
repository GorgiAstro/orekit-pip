#ifndef org_orekit_rugged_linesensor_LineDatation_H
#define org_orekit_rugged_linesensor_LineDatation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        class LineDatation : public ::java::lang::Object {
         public:
          enum {
            mid_getDate_f359a0110559347a,
            mid_getLine_fd347811007a6ba3,
            mid_getRate_04fd0666b613d2ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LineDatation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LineDatation(const LineDatation& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(LineDatation);
        extern PyTypeObject *PY_TYPE(LineDatation);

        class t_LineDatation {
        public:
          PyObject_HEAD
          LineDatation object;
          static PyObject *wrap_Object(const LineDatation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
