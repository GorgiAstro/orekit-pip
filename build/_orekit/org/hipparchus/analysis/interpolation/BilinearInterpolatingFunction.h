#ifndef org_hipparchus_analysis_interpolation_BilinearInterpolatingFunction_H
#define org_hipparchus_analysis_interpolation_BilinearInterpolatingFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class FieldBivariateFunction;
      class BivariateFunction;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        class BilinearInterpolatingFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2656072909750fef,
            mid_getXInf_dff5885c2c873297,
            mid_getXSup_dff5885c2c873297,
            mid_getYInf_dff5885c2c873297,
            mid_getYSup_dff5885c2c873297,
            mid_value_86ffecc08a63eff0,
            mid_value_6746cc1cd9210d54,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BilinearInterpolatingFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BilinearInterpolatingFunction(const BilinearInterpolatingFunction& obj) : ::java::lang::Object(obj) {}

          BilinearInterpolatingFunction(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &);

          jdouble getXInf() const;
          jdouble getXSup() const;
          jdouble getYInf() const;
          jdouble getYSup() const;
          jdouble value(jdouble, jdouble) const;
          ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(BilinearInterpolatingFunction);
        extern PyTypeObject *PY_TYPE(BilinearInterpolatingFunction);

        class t_BilinearInterpolatingFunction {
        public:
          PyObject_HEAD
          BilinearInterpolatingFunction object;
          static PyObject *wrap_Object(const BilinearInterpolatingFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
