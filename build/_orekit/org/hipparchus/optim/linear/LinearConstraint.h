#ifndef org_hipparchus_optim_linear_LinearConstraint_H
#define org_hipparchus_optim_linear_LinearConstraint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
    }
    namespace optim {
      namespace linear {
        class Relationship;
      }
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
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

        class LinearConstraint : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3e9b496656853d8d,
            mid_init$_fa4e1f5c5df59b6d,
            mid_init$_a41a126968e503cd,
            mid_init$_dbedba0022453ff9,
            mid_equals_229c87223f486349,
            mid_getCoefficients_6d9adf1d5b463928,
            mid_getRelationship_435d5956567f4d61,
            mid_getValue_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LinearConstraint(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LinearConstraint(const LinearConstraint& obj) : ::java::lang::Object(obj) {}

          LinearConstraint(const JArray< jdouble > &, const ::org::hipparchus::optim::linear::Relationship &, jdouble);
          LinearConstraint(const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::optim::linear::Relationship &, jdouble);
          LinearConstraint(const JArray< jdouble > &, jdouble, const ::org::hipparchus::optim::linear::Relationship &, const JArray< jdouble > &, jdouble);
          LinearConstraint(const ::org::hipparchus::linear::RealVector &, jdouble, const ::org::hipparchus::optim::linear::Relationship &, const ::org::hipparchus::linear::RealVector &, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::hipparchus::linear::RealVector getCoefficients() const;
          ::org::hipparchus::optim::linear::Relationship getRelationship() const;
          jdouble getValue() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(LinearConstraint);
        extern PyTypeObject *PY_TYPE(LinearConstraint);

        class t_LinearConstraint {
        public:
          PyObject_HEAD
          LinearConstraint object;
          static PyObject *wrap_Object(const LinearConstraint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
