#ifndef org_hipparchus_stat_inference_MannWhitneyUTest_H
#define org_hipparchus_stat_inference_MannWhitneyUTest_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        class TiesStrategy;
        class NaNStrategy;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_49a3c82f9e34fc75,
            mid_mannWhitneyU_b01af8a77d4df96f,
            mid_mannWhitneyUTest_b01af8a77d4df96f,
            mid_mannWhitneyUTest_2cf76703ce30b165,
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
