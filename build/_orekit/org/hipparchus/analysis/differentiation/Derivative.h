#ifndef org_hipparchus_analysis_differentiation_Derivative_H
#define org_hipparchus_analysis_differentiation_Derivative_H

#include "org/hipparchus/CalculusFieldElement.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
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
    namespace analysis {
      namespace differentiation {

        class Derivative : public ::org::hipparchus::CalculusFieldElement {
         public:
          enum {
            mid_compose_c2a9122c04338397,
            mid_getFreeParameters_412668abc8d889e9,
            mid_getOrder_412668abc8d889e9,
            mid_getPartialDerivative_75914fee15aa69bc,
            mid_getValue_557b8123390d8d0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Derivative(jobject obj) : ::org::hipparchus::CalculusFieldElement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Derivative(const Derivative& obj) : ::org::hipparchus::CalculusFieldElement(obj) {}

          ::org::hipparchus::CalculusFieldElement compose(const JArray< jdouble > &) const;
          jint getFreeParameters() const;
          jint getOrder() const;
          jdouble getPartialDerivative(const JArray< jint > &) const;
          jdouble getValue() const;
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
        extern PyType_Def PY_TYPE_DEF(Derivative);
        extern PyTypeObject *PY_TYPE(Derivative);

        class t_Derivative {
        public:
          PyObject_HEAD
          Derivative object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Derivative *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Derivative&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Derivative&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
