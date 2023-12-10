#ifndef org_hipparchus_stat_descriptive_summary_Product_H
#define org_hipparchus_stat_descriptive_summary_Product_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace summary {
          class Product;
        }
        class WeightedEvaluation;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          class Product : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_aggregate_2142388604881136,
              mid_clear_0fa09c18fee449d5,
              mid_copy_2710c30fb5f7bb06,
              mid_evaluate_556bede10daac330,
              mid_evaluate_2634be61548fc62b,
              mid_getN_492808a339bfa35f,
              mid_getResult_dff5885c2c873297,
              mid_increment_17db3a65980d3441,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Product(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Product(const Product& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Product();

            void aggregate(const Product &) const;
            void clear() const;
            Product copy() const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
            jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jint, jint) const;
            jlong getN() const;
            jdouble getResult() const;
            void increment(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {
          extern PyType_Def PY_TYPE_DEF(Product);
          extern PyTypeObject *PY_TYPE(Product);

          class t_Product {
          public:
            PyObject_HEAD
            Product object;
            static PyObject *wrap_Object(const Product&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
