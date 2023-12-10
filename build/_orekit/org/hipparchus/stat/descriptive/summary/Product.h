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
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace summary {
          class Product;
        }
        class WeightedEvaluation;
      }
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
              mid_init$_7ae3461a92a43152,
              mid_aggregate_fbee47346230313b,
              mid_clear_7ae3461a92a43152,
              mid_copy_14204d7f8c951f8b,
              mid_evaluate_0a7ff474793a505a,
              mid_evaluate_5d62632feda90f27,
              mid_getN_a27fc9afd27e559d,
              mid_getResult_456d9a2f64d6b28d,
              mid_increment_77e0f9a1f260e2e5,
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
