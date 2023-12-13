#ifndef org_hipparchus_stat_descriptive_UnivariateStatistic_H
#define org_hipparchus_stat_descriptive_UnivariateStatistic_H

#include "org/hipparchus/util/MathArrays$Function.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class UnivariateStatistic;
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
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        class UnivariateStatistic : public ::org::hipparchus::util::MathArrays$Function {
         public:
          enum {
            mid_copy_04f2e677f90ab735,
            mid_evaluate_b060e4326765ccf1,
            mid_evaluate_1567a80062adb31b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateStatistic(jobject obj) : ::org::hipparchus::util::MathArrays$Function(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateStatistic(const UnivariateStatistic& obj) : ::org::hipparchus::util::MathArrays$Function(obj) {}

          UnivariateStatistic copy() const;
          jdouble evaluate(const JArray< jdouble > &) const;
          jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        extern PyType_Def PY_TYPE_DEF(UnivariateStatistic);
        extern PyTypeObject *PY_TYPE(UnivariateStatistic);

        class t_UnivariateStatistic {
        public:
          PyObject_HEAD
          UnivariateStatistic object;
          static PyObject *wrap_Object(const UnivariateStatistic&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
