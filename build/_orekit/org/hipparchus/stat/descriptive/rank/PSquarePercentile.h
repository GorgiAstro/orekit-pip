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
              mid_init$_10f281d777284cea,
              mid_clear_0640e6acf969ed28,
              mid_copy_4b709ee17fb84299,
              mid_equals_221e8e85cb385209,
              mid_getN_9e26256fb0d384a2,
              mid_getQuantile_557b8123390d8d0c,
              mid_getResult_557b8123390d8d0c,
              mid_hashCode_412668abc8d889e9,
              mid_increment_10f281d777284cea,
              mid_quantile_557b8123390d8d0c,
              mid_toString_3cffd47377eca18a,
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
