#ifndef org_hipparchus_optim_univariate_SearchInterval_H
#define org_hipparchus_optim_univariate_SearchInterval_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        class SearchInterval : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ab23f4ae0fb33968,
            mid_init$_87096e3fd8086100,
            mid_getMax_557b8123390d8d0c,
            mid_getMin_557b8123390d8d0c,
            mid_getStartValue_557b8123390d8d0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearchInterval(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearchInterval(const SearchInterval& obj) : ::java::lang::Object(obj) {}

          SearchInterval(jdouble, jdouble);
          SearchInterval(jdouble, jdouble, jdouble);

          jdouble getMax() const;
          jdouble getMin() const;
          jdouble getStartValue() const;
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
        extern PyType_Def PY_TYPE_DEF(SearchInterval);
        extern PyTypeObject *PY_TYPE(SearchInterval);

        class t_SearchInterval {
        public:
          PyObject_HEAD
          SearchInterval object;
          static PyObject *wrap_Object(const SearchInterval&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
