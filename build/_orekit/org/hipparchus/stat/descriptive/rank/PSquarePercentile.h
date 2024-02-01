#ifndef org_hipparchus_stat_descriptive_rank_PSquarePercentile_H
#define org_hipparchus_stat_descriptive_rank_PSquarePercentile_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          class PSquarePercentile : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_1ad26e8c8c0cd65b,
              mid_clear_ff7cb6c242604316,
              mid_copy_e6a4add1a9e771f4,
              mid_equals_72faff9b05f5ed5e,
              mid_getN_42c72b98e3c2e08a,
              mid_getQuantile_9981f74b2d109da6,
              mid_getResult_9981f74b2d109da6,
              mid_hashCode_d6ab429752e7c267,
              mid_increment_1ad26e8c8c0cd65b,
              mid_quantile_9981f74b2d109da6,
              mid_toString_d2c8eb4129821f0e,
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
