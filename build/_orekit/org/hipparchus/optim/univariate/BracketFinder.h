#ifndef org_hipparchus_optim_univariate_BracketFinder_H
#define org_hipparchus_optim_univariate_BracketFinder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          class GoalType;
        }
      }
    }
    namespace analysis {
      class UnivariateFunction;
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
    namespace optim {
      namespace univariate {

        class BracketFinder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_18b1ce6f78e2ded3,
            mid_getEvaluations_f2f64475e4580546,
            mid_getFHi_456d9a2f64d6b28d,
            mid_getFLo_456d9a2f64d6b28d,
            mid_getFMid_456d9a2f64d6b28d,
            mid_getHi_456d9a2f64d6b28d,
            mid_getLo_456d9a2f64d6b28d,
            mid_getMaxEvaluations_f2f64475e4580546,
            mid_getMid_456d9a2f64d6b28d,
            mid_search_5a3ad5111e4a82d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BracketFinder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BracketFinder(const BracketFinder& obj) : ::java::lang::Object(obj) {}

          BracketFinder();
          BracketFinder(jdouble, jint);

          jint getEvaluations() const;
          jdouble getFHi() const;
          jdouble getFLo() const;
          jdouble getFMid() const;
          jdouble getHi() const;
          jdouble getLo() const;
          jint getMaxEvaluations() const;
          jdouble getMid() const;
          void search(const ::org::hipparchus::analysis::UnivariateFunction &, const ::org::hipparchus::optim::nonlinear::scalar::GoalType &, jdouble, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        extern PyType_Def PY_TYPE_DEF(BracketFinder);
        extern PyTypeObject *PY_TYPE(BracketFinder);

        class t_BracketFinder {
        public:
          PyObject_HEAD
          BracketFinder object;
          static PyObject *wrap_Object(const BracketFinder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
