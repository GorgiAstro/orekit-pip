#ifndef org_hipparchus_analysis_differentiation_FieldDerivative_H
#define org_hipparchus_analysis_differentiation_FieldDerivative_H

#include "org/hipparchus/CalculusFieldElement.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivative;
      }
    }
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

        class FieldDerivative : public ::org::hipparchus::CalculusFieldElement {
         public:
          enum {
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPartialDerivative_46366c1e17d1d442,
            mid_getValue_eba8e72a22c984ac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDerivative(jobject obj) : ::org::hipparchus::CalculusFieldElement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDerivative(const FieldDerivative& obj) : ::org::hipparchus::CalculusFieldElement(obj) {}

          jint getFreeParameters() const;
          jint getOrder() const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(const JArray< jint > &) const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldDerivative);
        extern PyTypeObject *PY_TYPE(FieldDerivative);

        class t_FieldDerivative {
        public:
          PyObject_HEAD
          FieldDerivative object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldDerivative *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldDerivative&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldDerivative&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
