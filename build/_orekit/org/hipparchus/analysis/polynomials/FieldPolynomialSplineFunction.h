#ifndef org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_FieldPolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace polynomials {
        class FieldPolynomialFunction;
        class FieldPolynomialSplineFunction;
      }
      class CalculusFieldUnivariateFunction;
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
            mid_init$_ad23d3ac68588806,
            mid_getField_04d1f63e17d5c5d4,
            mid_getKnots_883be608cfc68c26,
            mid_getN_55546ef6a647f39b,
            mid_getPolynomials_13b21eb80399600d,
            mid_isValidPoint_5d7e323f5aec64d9,
            mid_polynomialSplineDerivative_744530848955be76,
            mid_value_1d3e368d09a6f8a6,
            mid_value_6e00dc5eb352fe51,
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
