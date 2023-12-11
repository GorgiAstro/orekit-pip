#ifndef org_hipparchus_stat_inference_WilcoxonSignedRankTest_H
#define org_hipparchus_stat_inference_WilcoxonSignedRankTest_H

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
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathIllegalStateException;
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

        class WilcoxonSignedRankTest : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_08eff940a3336a45,
            mid_wilcoxonSignedRank_628a76297e217f13,
            mid_wilcoxonSignedRankTest_81226d0b24750fea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WilcoxonSignedRankTest(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WilcoxonSignedRankTest(const WilcoxonSignedRankTest& obj) : ::java::lang::Object(obj) {}

          WilcoxonSignedRankTest();
          WilcoxonSignedRankTest(const ::org::hipparchus::stat::ranking::NaNStrategy &, const ::org::hipparchus::stat::ranking::TiesStrategy &);

          jdouble wilcoxonSignedRank(const JArray< jdouble > &, const JArray< jdouble > &) const;
          jdouble wilcoxonSignedRankTest(const JArray< jdouble > &, const JArray< jdouble > &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(WilcoxonSignedRankTest);
        extern PyTypeObject *PY_TYPE(WilcoxonSignedRankTest);

        class t_WilcoxonSignedRankTest {
        public:
          PyObject_HEAD
          WilcoxonSignedRankTest object;
          static PyObject *wrap_Object(const WilcoxonSignedRankTest&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
