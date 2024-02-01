#ifndef org_hipparchus_stat_inference_BinomialTest_H
#define org_hipparchus_stat_inference_BinomialTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {
        class AlternativeHypothesis;
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
      namespace inference {

        class BinomialTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_binomialTest_baece8c1af9c0ccd,
            mid_binomialTest_4b81208de9d7b33c,
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
