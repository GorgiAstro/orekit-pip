#ifndef org_hipparchus_analysis_interpolation_HermiteInterpolator_H
#define org_hipparchus_analysis_interpolation_HermiteInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableVectorFunction;
      }
      namespace polynomials {
        class PolynomialFunction;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
            mid_init$_0640e6acf969ed28,
            mid_addSamplePoint_c348d229de01ec27,
            mid_derivatives_fee2210b9e0b192d,
            mid_getPolynomials_ab8ca1f1c6647c6c,
            mid_value_ebf0376b0df5061b,
            mid_value_e94dffdd58ba460f,
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
