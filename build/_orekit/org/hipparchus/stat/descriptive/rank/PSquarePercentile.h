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
              mid_init$_8ba9fe7a847cecad,
              mid_clear_a1fa5dae97ea5ed2,
              mid_copy_3bda7fe784041369,
              mid_equals_460c5e2d9d51c6cc,
              mid_getN_6c0ce7e438e5ded4,
              mid_getQuantile_b74f83833fdad017,
              mid_getResult_b74f83833fdad017,
              mid_hashCode_55546ef6a647f39b,
              mid_increment_8ba9fe7a847cecad,
              mid_quantile_b74f83833fdad017,
              mid_toString_1c1fa1e935d6cdcf,
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
