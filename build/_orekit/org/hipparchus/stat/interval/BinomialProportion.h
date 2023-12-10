#ifndef org_hipparchus_stat_interval_BinomialProportion_H
#define org_hipparchus_stat_interval_BinomialProportion_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {
        class ConfidenceInterval;
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
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        class BinomialProportion : public ::java::lang::Object {
         public:
          enum {
            mid_getAgrestiCoullInterval_902c51174b71d8d4,
            mid_getClopperPearsonInterval_902c51174b71d8d4,
            mid_getNormalApproximationInterval_902c51174b71d8d4,
            mid_getWilsonScoreInterval_902c51174b71d8d4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinomialProportion(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinomialProportion(const BinomialProportion& obj) : ::java::lang::Object(obj) {}

          static ::org::hipparchus::stat::interval::ConfidenceInterval getAgrestiCoullInterval(jint, jdouble, jdouble);
          static ::org::hipparchus::stat::interval::ConfidenceInterval getClopperPearsonInterval(jint, jdouble, jdouble);
          static ::org::hipparchus::stat::interval::ConfidenceInterval getNormalApproximationInterval(jint, jdouble, jdouble);
          static ::org::hipparchus::stat::interval::ConfidenceInterval getWilsonScoreInterval(jint, jdouble, jdouble);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {
        extern PyType_Def PY_TYPE_DEF(BinomialProportion);
        extern PyTypeObject *PY_TYPE(BinomialProportion);

        class t_BinomialProportion {
        public:
          PyObject_HEAD
          BinomialProportion object;
          static PyObject *wrap_Object(const BinomialProportion&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
