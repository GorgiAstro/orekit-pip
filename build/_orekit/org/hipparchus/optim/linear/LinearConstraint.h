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
            mid_init$_e28600871a1a8ed6,
            mid_init$_780aacbfbc3e99fd,
            mid_init$_a368520181f3b67a,
            mid_init$_efa3f8594ad0245e,
            mid_equals_72faff9b05f5ed5e,
            mid_getCoefficients_92d7e8d8d3f1dfcf,
            mid_getRelationship_e6c81e0fe5424903,
            mid_getValue_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
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
