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
              mid_init$_17db3a65980d3441,
              mid_clear_0fa09c18fee449d5,
              mid_copy_1c9028170adaf4fe,
              mid_equals_65c7d273e80d497a,
              mid_getN_492808a339bfa35f,
              mid_getQuantile_dff5885c2c873297,
              mid_getResult_dff5885c2c873297,
              mid_hashCode_570ce0828f81a2c1,
              mid_increment_17db3a65980d3441,
              mid_quantile_dff5885c2c873297,
              mid_toString_11b109bd155ca898,
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
