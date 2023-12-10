#ifndef org_hipparchus_analysis_interpolation_NevilleInterpolator_H
#define org_hipparchus_analysis_interpolation_NevilleInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace polynomials {
        class PolynomialFunctionLagrangeForm;
      }
      namespace interpolation {
        class UnivariateInterpolator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        class NevilleInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_interpolate_ef08484da4ea0f30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NevilleInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NevilleInterpolator(const NevilleInterpolator& obj) : ::java::lang::Object(obj) {}

          NevilleInterpolator();

          ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm interpolate(const JArray< jdouble > &, const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(NevilleInterpolator);
        extern PyTypeObject *PY_TYPE(NevilleInterpolator);

        class t_NevilleInterpolator {
        public:
          PyObject_HEAD
          NevilleInterpolator object;
          static PyObject *wrap_Object(const NevilleInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
