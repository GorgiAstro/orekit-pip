#ifndef org_hipparchus_stat_inference_MannWhitneyUTest_H
#define org_hipparchus_stat_inference_MannWhitneyUTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class NaNStrategy;
        class TiesStrategy;
      }
    }
    namespace exception {
      class NullArgumentException;
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
      namespace inference {

        class MannWhitneyUTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_30686433a7523e33,
            mid_mannWhitneyU_1ce76fb6ff382da9,
            mid_mannWhitneyUTest_1ce76fb6ff382da9,
            mid_mannWhitneyUTest_6379f5334de861c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MannWhitneyUTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MannWhitneyUTest(const MannWhitneyUTest& obj) : ::java::lang::Object(obj) {}

          MannWhitneyUTest();
          MannWhitneyUTest(const ::org::hipparchus::stat::ranking::NaNStrategy &, const ::org::hipparchus::stat::ranking::TiesStrategy &);

          jdouble mannWhitneyU(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble mannWhitneyUTest(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble mannWhitneyUTest(const JArray< jdouble > &, const JArray< jdouble > &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(MannWhitneyUTest);
        extern PyTypeObject *PY_TYPE(MannWhitneyUTest);

        class t_MannWhitneyUTest {
        public:
          PyObject_HEAD
          MannWhitneyUTest object;
          static PyObject *wrap_Object(const MannWhitneyUTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
