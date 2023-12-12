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
            mid_init$_0640e6acf969ed28,
            mid_binomialTest_d7ff5d93e82bbe26,
            mid_binomialTest_088090df4f38c4c6,
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
