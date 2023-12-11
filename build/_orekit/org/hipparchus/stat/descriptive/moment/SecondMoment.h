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
              mid_init$_0640e6acf969ed28,
              mid_aggregate_b42241ac9de9fb3c,
              mid_clear_0640e6acf969ed28,
              mid_copy_c2d7ba6b29d60a37,
              mid_getResult_557b8123390d8d0c,
              mid_increment_10f281d777284cea,
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
