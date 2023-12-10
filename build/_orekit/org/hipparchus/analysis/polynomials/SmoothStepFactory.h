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
            mid_checkBetweenZeroAndOneIncluded_17db3a65980d3441,
            mid_getClamp_f18ca541c854e890,
            mid_getClamp_538040519eb9f486,
            mid_getCubic_f18ca541c854e890,
            mid_getCubic_538040519eb9f486,
            mid_getFieldGeneralOrder_60e4224851f2b09a,
            mid_getGeneralOrder_482197413efde1be,
            mid_getQuadratic_f18ca541c854e890,
            mid_getQuadratic_538040519eb9f486,
            mid_getQuintic_f18ca541c854e890,
            mid_getQuintic_538040519eb9f486,
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
