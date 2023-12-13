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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        class LinearConstraint : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2aeb1c1abbfab740,
            mid_init$_ac4d203849d954ad,
            mid_init$_c768f6b19d2aa1d9,
            mid_init$_3a15a6c1a7071f17,
            mid_equals_460c5e2d9d51c6cc,
            mid_getCoefficients_3a10cc75bd070d84,
            mid_getRelationship_8ee3b6cbb19ddabb,
            mid_getValue_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
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
