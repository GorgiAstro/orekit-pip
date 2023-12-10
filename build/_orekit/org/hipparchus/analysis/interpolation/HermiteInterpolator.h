#ifndef org_hipparchus_analysis_interpolation_HermiteInterpolator_H
#define org_hipparchus_analysis_interpolation_HermiteInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableVectorFunction;
        class Derivative;
      }
      namespace polynomials {
        class PolynomialFunction;
      }
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathRuntimeException;
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
            mid_init$_7ae3461a92a43152,
            mid_addSamplePoint_5be24d2f20fd4252,
            mid_derivatives_7582829a03f4b5f9,
            mid_getPolynomials_4abf9ec9946ee32d,
            mid_value_e6753bb90e47a158,
            mid_value_8db78ffbf68761e3,
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
