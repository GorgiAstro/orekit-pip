#ifndef org_hipparchus_ode_nonstiff_AdamsNordsieckTransformer_H
#define org_hipparchus_ode_nonstiff_AdamsNordsieckTransformer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class AdamsNordsieckTransformer;
      }
    }
    namespace linear {
      class Array2DRowRealMatrix;
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
            mid_getInstance_cb3051f78727d5af,
            mid_initializeHighOrderDerivatives_7145db39e893543c,
            mid_updateHighOrderDerivativesPhase1_afbfc3ddbfe58d51,
            mid_updateHighOrderDerivativesPhase2_e958729b32219ba2,
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
