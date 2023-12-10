#ifndef org_hipparchus_stat_descriptive_rank_PSquarePercentile_H
#define org_hipparchus_stat_descriptive_rank_PSquarePercentile_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {
          class PSquarePercentile;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          class PSquarePercentile : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_77e0f9a1f260e2e5,
              mid_clear_7ae3461a92a43152,
              mid_copy_6690cd47c731f9cd,
              mid_equals_229c87223f486349,
              mid_getN_a27fc9afd27e559d,
              mid_getQuantile_456d9a2f64d6b28d,
              mid_getResult_456d9a2f64d6b28d,
              mid_hashCode_f2f64475e4580546,
              mid_increment_77e0f9a1f260e2e5,
              mid_quantile_456d9a2f64d6b28d,
              mid_toString_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PSquarePercentile(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PSquarePercentile(const PSquarePercentile& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            PSquarePercentile(jdouble);

            void clear() const;
            PSquarePercentile copy() const;
            jboolean equals(const ::java::lang::Object &) const;
            jlong getN() const;
            jdouble getQuantile() const;
            jdouble getResult() const;
            jint hashCode() const;
            void increment(jdouble) const;
            jdouble quantile() const;
            ::java::lang::String toString() const;
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
        namespace rank {
          extern PyType_Def PY_TYPE_DEF(PSquarePercentile);
          extern PyTypeObject *PY_TYPE(PSquarePercentile);

          class t_PSquarePercentile {
          public:
            PyObject_HEAD
            PSquarePercentile object;
            static PyObject *wrap_Object(const PSquarePercentile&);
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
