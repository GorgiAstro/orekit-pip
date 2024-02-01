#ifndef org_hipparchus_stat_descriptive_moment_Skewness_H
#define org_hipparchus_stat_descriptive_moment_Skewness_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class Skewness;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
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
    namespace stat {
      namespace descriptive {
        namespace moment {

          class Skewness : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_clear_ff7cb6c242604316,
              mid_copy_0334ba61b9e7f8eb,
              mid_evaluate_620ea098e5f0da00,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Skewness(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Skewness(const Skewness& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            Skewness();

            void clear() const;
            Skewness copy() const;
            jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
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
        namespace moment {
          extern PyType_Def PY_TYPE_DEF(Skewness);
          extern PyTypeObject *PY_TYPE(Skewness);

          class t_Skewness {
          public:
            PyObject_HEAD
            Skewness object;
            static PyObject *wrap_Object(const Skewness&);
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
