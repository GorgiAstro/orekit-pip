#ifndef org_hipparchus_ode_nonstiff_AdamsNordsieckFieldTransformer_H
#define org_hipparchus_ode_nonstiff_AdamsNordsieckFieldTransformer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        class AdamsNordsieckFieldTransformer;
      }
    }
    class Field;
    namespace linear {
      class Array2DRowFieldMatrix;
    }
    class CalculusFieldElement;
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

        class AdamsNordsieckFieldTransformer : public ::java::lang::Object {
         public:
          enum {
            mid_getInstance_11df1b2d9879e5df,
            mid_initializeHighOrderDerivatives_59a89abbfffc5f1c,
            mid_updateHighOrderDerivativesPhase1_51bcd4a8a90d8d6b,
            mid_updateHighOrderDerivativesPhase2_5846b27571ec7191,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsNordsieckFieldTransformer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsNordsieckFieldTransformer(const AdamsNordsieckFieldTransformer& obj) : ::java::lang::Object(obj) {}

          static AdamsNordsieckFieldTransformer getInstance(const ::org::hipparchus::Field &, jint);
          ::org::hipparchus::linear::Array2DRowFieldMatrix initializeHighOrderDerivatives(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &) const;
          ::org::hipparchus::linear::Array2DRowFieldMatrix updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix &) const;
          void updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const ::org::hipparchus::linear::Array2DRowFieldMatrix &) const;
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
        extern PyType_Def PY_TYPE_DEF(AdamsNordsieckFieldTransformer);
        extern PyTypeObject *PY_TYPE(AdamsNordsieckFieldTransformer);

        class t_AdamsNordsieckFieldTransformer {
        public:
          PyObject_HEAD
          AdamsNordsieckFieldTransformer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AdamsNordsieckFieldTransformer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AdamsNordsieckFieldTransformer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AdamsNordsieckFieldTransformer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
