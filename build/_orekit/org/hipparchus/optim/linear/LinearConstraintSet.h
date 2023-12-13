#ifndef org_hipparchus_optim_linear_LinearConstraintSet_H
#define org_hipparchus_optim_linear_LinearConstraintSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        class LinearConstraint;
      }
      class OptimizationData;
    }
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
            mid_init$_e4a9ddaf437755d1,
            mid_init$_7d8f123763cd893c,
            mid_getConstraints_cb666ea1a15f5210,
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
