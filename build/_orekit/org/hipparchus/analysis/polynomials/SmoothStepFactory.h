#ifndef org_hipparchus_analysis_polynomials_SmoothStepFactory_H
#define org_hipparchus_analysis_polynomials_SmoothStepFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class SmoothStepFactory$FieldSmoothStepFunction;
        class SmoothStepFactory$SmoothStepFunction;
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
            mid_checkBetweenZeroAndOneIncluded_1ad26e8c8c0cd65b,
            mid_getClamp_1290f283fe267abb,
            mid_getClamp_802dd99c8beaa14e,
            mid_getCubic_1290f283fe267abb,
            mid_getCubic_802dd99c8beaa14e,
            mid_getFieldGeneralOrder_96427c0eff98a2ae,
            mid_getGeneralOrder_f55e3a9b179d965a,
            mid_getQuadratic_1290f283fe267abb,
            mid_getQuadratic_802dd99c8beaa14e,
            mid_getQuintic_1290f283fe267abb,
            mid_getQuintic_802dd99c8beaa14e,
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
