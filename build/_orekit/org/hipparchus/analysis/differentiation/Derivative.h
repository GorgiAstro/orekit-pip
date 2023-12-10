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
            mid_compose_48885a3a6ec88a01,
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPartialDerivative_48330f48ce3d930b,
            mid_getValue_dff5885c2c873297,
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
