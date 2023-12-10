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
            mid_init$_ed1196772defbeae,
            mid_init$_5f338ccbbc248a13,
            mid_init$_176ddfa61621172c,
            mid_init$_815a0a1da754191e,
            mid_equals_65c7d273e80d497a,
            mid_getCoefficients_aab4fbf77867daa8,
            mid_getRelationship_90960c2c386c2df2,
            mid_getValue_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
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
