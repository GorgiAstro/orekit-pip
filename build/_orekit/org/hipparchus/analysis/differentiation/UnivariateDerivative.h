#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class Comparable;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class Derivative;
        class UnivariateDerivative;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class UnivariateDerivative : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_getDerivative_ce4c02d583456bc9,
            mid_getFreeParameters_d6ab429752e7c267,
            mid_getPartialDerivative_7f744e43a2f098aa,
            mid_toDerivativeStructure_ce114c5dd035d753,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative(const UnivariateDerivative& obj) : ::java::lang::Object(obj) {}

          UnivariateDerivative();

          jdouble getDerivative(jint) const;
          jint getFreeParameters() const;
          jdouble getPartialDerivative(const JArray< jint > &) const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative);

        class t_UnivariateDerivative {
        public:
          PyObject_HEAD
          UnivariateDerivative object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_UnivariateDerivative *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const UnivariateDerivative&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const UnivariateDerivative&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
