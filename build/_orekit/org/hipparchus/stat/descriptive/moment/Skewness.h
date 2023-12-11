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
              mid_init$_0640e6acf969ed28,
              mid_clear_0640e6acf969ed28,
              mid_copy_39d94353cfc666bc,
              mid_evaluate_9eeeb1ae977f525d,
              mid_getN_9e26256fb0d384a2,
              mid_getResult_557b8123390d8d0c,
              mid_increment_10f281d777284cea,
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
