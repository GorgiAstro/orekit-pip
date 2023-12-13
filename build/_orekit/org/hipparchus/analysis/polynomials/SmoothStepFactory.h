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
            mid_checkBetweenZeroAndOneIncluded_8ba9fe7a847cecad,
            mid_getClamp_08006f6c9018216e,
            mid_getClamp_c81f7e343d53e75f,
            mid_getCubic_08006f6c9018216e,
            mid_getCubic_c81f7e343d53e75f,
            mid_getFieldGeneralOrder_be398f450d2cffc9,
            mid_getGeneralOrder_a28686a10ca4c52e,
            mid_getQuadratic_08006f6c9018216e,
            mid_getQuadratic_c81f7e343d53e75f,
            mid_getQuintic_08006f6c9018216e,
            mid_getQuintic_c81f7e343d53e75f,
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
