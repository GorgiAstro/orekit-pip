#ifndef org_hipparchus_stat_inference_BinomialTest_H
#define org_hipparchus_stat_inference_BinomialTest_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        class AlternativeHypothesis;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        class BinomialTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_binomialTest_ef14050dc3cba91c,
            mid_binomialTest_4cd1fa164d4ccb63,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinomialTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinomialTest(const BinomialTest& obj) : ::java::lang::Object(obj) {}

          BinomialTest();

          jdouble binomialTest(jint, jint, jdouble, const ::org::hipparchus::stat::inference::AlternativeHypothesis &) const;
          jboolean binomialTest(jint, jint, jdouble, const ::org::hipparchus::stat::inference::AlternativeHypothesis &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        extern PyType_Def PY_TYPE_DEF(BinomialTest);
        extern PyTypeObject *PY_TYPE(BinomialTest);

        class t_BinomialTest {
        public:
          PyObject_HEAD
          BinomialTest object;
          static PyObject *wrap_Object(const BinomialTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
