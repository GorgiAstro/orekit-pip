#ifndef org_hipparchus_optim_univariate_UnivariatePointValuePair_H
#define org_hipparchus_optim_univariate_UnivariatePointValuePair_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        class UnivariatePointValuePair : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ab23f4ae0fb33968,
            mid_getPoint_557b8123390d8d0c,
            mid_getValue_557b8123390d8d0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariatePointValuePair(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariatePointValuePair(const UnivariatePointValuePair& obj) : ::java::lang::Object(obj) {}

          UnivariatePointValuePair(jdouble, jdouble);

          jdouble getPoint() const;
          jdouble getValue() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        extern PyType_Def PY_TYPE_DEF(UnivariatePointValuePair);
        extern PyTypeObject *PY_TYPE(UnivariatePointValuePair);

        class t_UnivariatePointValuePair {
        public:
          PyObject_HEAD
          UnivariatePointValuePair object;
          static PyObject *wrap_Object(const UnivariatePointValuePair&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
