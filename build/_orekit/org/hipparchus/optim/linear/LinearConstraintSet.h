#ifndef org_hipparchus_optim_linear_LinearConstraintSet_H
#define org_hipparchus_optim_linear_LinearConstraintSet_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      namespace linear {
        class LinearConstraint;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        class LinearConstraintSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_94d292d8c76cff99,
            mid_init$_82af91bc8dfb5029,
            mid_getConstraints_3bfef5c77ceb081a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LinearConstraintSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LinearConstraintSet(const LinearConstraintSet& obj) : ::java::lang::Object(obj) {}

          LinearConstraintSet(const JArray< ::org::hipparchus::optim::linear::LinearConstraint > &);
          LinearConstraintSet(const ::java::util::Collection &);

          ::java::util::Collection getConstraints() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        extern PyType_Def PY_TYPE_DEF(LinearConstraintSet);
        extern PyTypeObject *PY_TYPE(LinearConstraintSet);

        class t_LinearConstraintSet {
        public:
          PyObject_HEAD
          LinearConstraintSet object;
          static PyObject *wrap_Object(const LinearConstraintSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
