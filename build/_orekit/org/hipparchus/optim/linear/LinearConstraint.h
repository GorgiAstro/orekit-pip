#ifndef org_hipparchus_optim_linear_LinearConstraint_H
#define org_hipparchus_optim_linear_LinearConstraint_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        class Relationship;
      }
    }
    namespace linear {
      class RealVector;
    }
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
            mid_init$_cfaeb259ce53994e,
            mid_init$_d64ce658cd967d2e,
            mid_init$_5e18566fee7e8405,
            mid_init$_14d5aa8adb640a48,
            mid_equals_221e8e85cb385209,
            mid_getCoefficients_75d50d73180655b4,
            mid_getRelationship_c55cd9ad2e6d5653,
            mid_getValue_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
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
