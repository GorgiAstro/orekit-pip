#ifndef org_hipparchus_analysis_interpolation_HermiteInterpolator_H
#define org_hipparchus_analysis_interpolation_HermiteInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
      namespace differentiation {
        class UnivariateDifferentiableVectorFunction;
        class Derivative;
      }
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
      namespace interpolation {

        class HermiteInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_addSamplePoint_27c11c017c2dbb54,
            mid_derivatives_215918e300237505,
            mid_getPolynomials_6893f2a8a1a47500,
            mid_value_e3ef0e966b8bf11e,
            mid_value_d068edfe0e0d0552,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HermiteInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HermiteInterpolator(const HermiteInterpolator& obj) : ::java::lang::Object(obj) {}

          HermiteInterpolator();

          void addSamplePoint(jdouble, const JArray< JArray< jdouble > > &) const;
          JArray< JArray< jdouble > > derivatives(jdouble, jint) const;
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > getPolynomials() const;
          JArray< jdouble > value(jdouble) const;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        extern PyType_Def PY_TYPE_DEF(HermiteInterpolator);
        extern PyTypeObject *PY_TYPE(HermiteInterpolator);

        class t_HermiteInterpolator {
        public:
          PyObject_HEAD
          HermiteInterpolator object;
          static PyObject *wrap_Object(const HermiteInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
