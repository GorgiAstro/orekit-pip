#ifndef org_hipparchus_analysis_polynomials_SmoothStepFactory_H
#define org_hipparchus_analysis_polynomials_SmoothStepFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class SmoothStepFactory$SmoothStepFunction;
        class SmoothStepFactory$FieldSmoothStepFunction;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
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

        class SmoothStepFactory : public ::java::lang::Object {
         public:
          enum {
            mid_checkBetweenZeroAndOneIncluded_10f281d777284cea,
            mid_getClamp_eedc0df51e79adef,
            mid_getClamp_0b6c279ce81f402f,
            mid_getCubic_eedc0df51e79adef,
            mid_getCubic_0b6c279ce81f402f,
            mid_getFieldGeneralOrder_cb2318af5f79fd6a,
            mid_getGeneralOrder_f63e16b76ec0adac,
            mid_getQuadratic_eedc0df51e79adef,
            mid_getQuadratic_0b6c279ce81f402f,
            mid_getQuintic_eedc0df51e79adef,
            mid_getQuintic_0b6c279ce81f402f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmoothStepFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmoothStepFactory(const SmoothStepFactory& obj) : ::java::lang::Object(obj) {}

          static void checkBetweenZeroAndOneIncluded(jdouble);
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction getClamp();
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction getClamp(const ::org::hipparchus::Field &);
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction getCubic();
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction getCubic(const ::org::hipparchus::Field &);
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction getFieldGeneralOrder(const ::org::hipparchus::Field &, jint);
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction getGeneralOrder(jint);
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction getQuadratic();
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction getQuadratic(const ::org::hipparchus::Field &);
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction getQuintic();
          static ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction getQuintic(const ::org::hipparchus::Field &);
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
        extern PyType_Def PY_TYPE_DEF(SmoothStepFactory);
        extern PyTypeObject *PY_TYPE(SmoothStepFactory);

        class t_SmoothStepFactory {
        public:
          PyObject_HEAD
          SmoothStepFactory object;
          static PyObject *wrap_Object(const SmoothStepFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
