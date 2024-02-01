#ifndef org_hipparchus_stat_descriptive_moment_SecondMoment_H
#define org_hipparchus_stat_descriptive_moment_SecondMoment_H

#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          class SecondMoment;
        }
        class AggregatableStatistic;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          class SecondMoment : public ::org::hipparchus::stat::descriptive::moment::FirstMoment {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_aggregate_4f0cd4b99215b675,
              mid_clear_ff7cb6c242604316,
              mid_copy_acd8fdabd379ed95,
              mid_getResult_9981f74b2d109da6,
              mid_increment_1ad26e8c8c0cd65b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SecondMoment(jobject obj) : ::org::hipparchus::stat::descriptive::moment::FirstMoment(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SecondMoment(const SecondMoment& obj) : ::org::hipparchus::stat::descriptive::moment::FirstMoment(obj) {}

            SecondMoment();

            void aggregate(const SecondMoment &) const;
            void clear() const;
            SecondMoment copy() const;
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
          extern PyType_Def PY_TYPE_DEF(SecondMoment);
          extern PyTypeObject *PY_TYPE(SecondMoment);

          class t_SecondMoment {
          public:
            PyObject_HEAD
            SecondMoment object;
            static PyObject *wrap_Object(const SecondMoment&);
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
