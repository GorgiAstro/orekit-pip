#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class FieldPolynomialSplineFunction;
        class FieldPolynomialFunction;
      }
      class CalculusFieldUnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class Field;
    class CalculusFieldElement;
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
      namespace polynomials {

        class FieldPolynomialSplineFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_823535cad697c42e,
            mid_getField_577649682b9910c1,
            mid_getKnots_94ed2e0620f8833d,
            mid_getN_d6ab429752e7c267,
            mid_getPolynomials_1f8a7bae184dd7be,
            mid_isValidPoint_ba2dc030627af546,
            mid_polynomialSplineDerivative_bafb33d1b3c451ff,
            mid_value_e3d0ff3c0584eadf,
            mid_value_a3b854adede8eaaa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldPolynomialSplineFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldPolynomialSplineFunction(const FieldPolynomialSplineFunction& obj) : ::java::lang::Object(obj) {}

          FieldPolynomialSplineFunction(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > &);

          ::org::hipparchus::Field getField() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getKnots() const;
          jint getN() const;
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > getPolynomials() const;
          jboolean isValidPoint(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldPolynomialSplineFunction polynomialSplineDerivative() const;
          ::org::hipparchus::CalculusFieldElement value(jdouble) const;
          ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        extern PyType_Def PY_TYPE_DEF(FieldPolynomialSplineFunction);
        extern PyTypeObject *PY_TYPE(FieldPolynomialSplineFunction);

        class t_FieldPolynomialSplineFunction {
        public:
          PyObject_HEAD
          FieldPolynomialSplineFunction object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldPolynomialSplineFunction *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldPolynomialSplineFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldPolynomialSplineFunction&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
