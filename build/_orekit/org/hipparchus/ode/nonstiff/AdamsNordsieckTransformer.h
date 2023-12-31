#ifndef org_hipparchus_ode_nonstiff_AdamsNordsieckTransformer_H
#define org_hipparchus_ode_nonstiff_AdamsNordsieckTransformer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class Array2DRowRealMatrix;
    }
    namespace ode {
      namespace nonstiff {
        class AdamsNordsieckTransformer;
      }
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
    namespace ode {
      namespace nonstiff {

        class AdamsNordsieckTransformer : public ::java::lang::Object {
         public:
          enum {
            mid_getInstance_3e8cb6cdee7a33cf,
            mid_initializeHighOrderDerivatives_0830b1db869546c8,
            mid_updateHighOrderDerivativesPhase1_f7e2a664bf09ba0b,
            mid_updateHighOrderDerivativesPhase2_6416fb10fa003d60,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsNordsieckTransformer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsNordsieckTransformer(const AdamsNordsieckTransformer& obj) : ::java::lang::Object(obj) {}

          static AdamsNordsieckTransformer getInstance(jint);
          ::org::hipparchus::linear::Array2DRowRealMatrix initializeHighOrderDerivatives(jdouble, const JArray< jdouble > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &) const;
          ::org::hipparchus::linear::Array2DRowRealMatrix updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix &) const;
          void updateHighOrderDerivativesPhase2(const JArray< jdouble > &, const JArray< jdouble > &, const ::org::hipparchus::linear::Array2DRowRealMatrix &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(AdamsNordsieckTransformer);
        extern PyTypeObject *PY_TYPE(AdamsNordsieckTransformer);

        class t_AdamsNordsieckTransformer {
        public:
          PyObject_HEAD
          AdamsNordsieckTransformer object;
          static PyObject *wrap_Object(const AdamsNordsieckTransformer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
