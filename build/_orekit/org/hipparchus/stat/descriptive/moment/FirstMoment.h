#ifndef org_hipparchus_stat_descriptive_moment_FirstMoment_H
#define org_hipparchus_stat_descriptive_moment_FirstMoment_H

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class FirstMoment;
        }
      }
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

          class FirstMoment : public ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic {
           public:
            enum {
              mid_clear_ff7cb6c242604316,
              mid_copy_94cbffb9a31e17bb,
              mid_getN_42c72b98e3c2e08a,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
              mid_aggregate_43fa94dba5c449e7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FirstMoment(jobject obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FirstMoment(const FirstMoment& obj) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(obj) {}

            void clear() const;
            FirstMoment copy() const;
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
          extern PyType_Def PY_TYPE_DEF(FirstMoment);
          extern PyTypeObject *PY_TYPE(FirstMoment);

          class t_FirstMoment {
          public:
            PyObject_HEAD
            FirstMoment object;
            static PyObject *wrap_Object(const FirstMoment&);
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
