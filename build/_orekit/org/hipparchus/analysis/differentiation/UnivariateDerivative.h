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
    namespace analysis {
      namespace differentiation {
        class Derivative;
        class DerivativeStructure;
        class UnivariateDerivative;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
            mid_init$_0fa09c18fee449d5,
            mid_getDerivative_46f85b53d9aedd96,
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getPartialDerivative_48330f48ce3d930b,
            mid_toDerivativeStructure_73e277cbd957031a,
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
