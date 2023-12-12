#ifndef org_hipparchus_optim_univariate_BracketFinder_H
#define org_hipparchus_optim_univariate_BracketFinder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          class GoalType;
        }
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
    namespace optim {
      namespace univariate {

        class BracketFinder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_47602ef8408ea361,
            mid_getEvaluations_412668abc8d889e9,
            mid_getFHi_557b8123390d8d0c,
            mid_getFLo_557b8123390d8d0c,
            mid_getFMid_557b8123390d8d0c,
            mid_getHi_557b8123390d8d0c,
            mid_getLo_557b8123390d8d0c,
            mid_getMaxEvaluations_412668abc8d889e9,
            mid_getMid_557b8123390d8d0c,
            mid_search_33db5f32c3aed894,
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
