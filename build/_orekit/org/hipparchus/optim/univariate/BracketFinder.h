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
            mid_init$_0fa09c18fee449d5,
            mid_init$_75c2da74a5a59fda,
            mid_getEvaluations_570ce0828f81a2c1,
            mid_getFHi_dff5885c2c873297,
            mid_getFLo_dff5885c2c873297,
            mid_getFMid_dff5885c2c873297,
            mid_getHi_dff5885c2c873297,
            mid_getLo_dff5885c2c873297,
            mid_getMaxEvaluations_570ce0828f81a2c1,
            mid_getMid_dff5885c2c873297,
            mid_search_2267d410d37cdcec,
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
