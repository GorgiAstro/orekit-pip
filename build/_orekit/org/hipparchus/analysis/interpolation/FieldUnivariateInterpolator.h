#ifndef org_hipparchus_analysis_interpolation_FieldUnivariateInterpolator_H
#define org_hipparchus_analysis_interpolation_FieldUnivariateInterpolator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      class CalculusFieldUnivariateFunction;
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
      namespace interpolation {

        class FieldUnivariateInterpolator : public ::java::lang::Object {
         public:
          enum {
            mid_interpolate_337882e3ddeb5bf4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateInterpolator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateInterpolator(const FieldUnivariateInterpolator& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateInterpolator);
        extern PyTypeObject *PY_TYPE(FieldUnivariateInterpolator);

        class t_FieldUnivariateInterpolator {
        public:
          PyObject_HEAD
          FieldUnivariateInterpolator object;
          static PyObject *wrap_Object(const FieldUnivariateInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
