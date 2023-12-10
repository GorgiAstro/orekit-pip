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
    class Field;
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
      namespace polynomials {

        class SmoothStepFactory : public ::java::lang::Object {
         public:
          enum {
            mid_checkBetweenZeroAndOneIncluded_77e0f9a1f260e2e5,
            mid_getClamp_b9df9c58da0ce53f,
            mid_getClamp_ae6ee6de4d113939,
            mid_getCubic_b9df9c58da0ce53f,
            mid_getCubic_ae6ee6de4d113939,
            mid_getFieldGeneralOrder_48124bfe232228f8,
            mid_getGeneralOrder_67259ad00088ddee,
            mid_getQuadratic_b9df9c58da0ce53f,
            mid_getQuadratic_ae6ee6de4d113939,
            mid_getQuintic_b9df9c58da0ce53f,
            mid_getQuintic_ae6ee6de4d113939,
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
