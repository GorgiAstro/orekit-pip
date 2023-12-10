#ifndef org_hipparchus_stat_descriptive_moment_SecondMoment_H
#define org_hipparchus_stat_descriptive_moment_SecondMoment_H

#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        class AggregatableStatistic;
        namespace moment {
          class SecondMoment;
        }
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
              mid_init$_0fa09c18fee449d5,
              mid_aggregate_7d2491dc61f6c936,
              mid_clear_0fa09c18fee449d5,
              mid_copy_f10a88f3e717b4d8,
              mid_getResult_dff5885c2c873297,
              mid_increment_17db3a65980d3441,
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
