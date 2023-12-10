#ifndef org_hipparchus_ode_nonstiff_StepsizeHelper_H
#define org_hipparchus_ode_nonstiff_StepsizeHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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
    namespace ode {
      namespace nonstiff {

        class StepsizeHelper : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e5787c5177784e12,
            mid_init$_667a7965403ed91a,
            mid_filterStep_73d783f530b6a963,
            mid_filterStep_15e00e789d917dd7,
            mid_getDummyStepsize_456d9a2f64d6b28d,
            mid_getInitialStep_456d9a2f64d6b28d,
            mid_getMainSetDimension_f2f64475e4580546,
            mid_getMaxStep_456d9a2f64d6b28d,
            mid_getMinStep_456d9a2f64d6b28d,
            mid_getRelativeTolerance_b772323fc98b7293,
            mid_getTolerance_31332242d1624d2c,
            mid_getTolerance_ee7db4b2ec7048ce,
            mid_setInitialStepSize_77e0f9a1f260e2e5,
            mid_setMainSetDimension_0a2a1ac2721c0336,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepsizeHelper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepsizeHelper(const StepsizeHelper& obj) : ::java::lang::Object(obj) {}

          StepsizeHelper(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          StepsizeHelper(jdouble, jdouble, jdouble, jdouble);

          jdouble filterStep(jdouble, jboolean, jboolean) const;
          ::org::hipparchus::CalculusFieldElement filterStep(const ::org::hipparchus::CalculusFieldElement &, jboolean, jboolean) const;
          jdouble getDummyStepsize() const;
          jdouble getInitialStep() const;
          jint getMainSetDimension() const;
          jdouble getMaxStep() const;
          jdouble getMinStep() const;
          jdouble getRelativeTolerance(jint) const;
          jdouble getTolerance(jint, jdouble) const;
          ::org::hipparchus::CalculusFieldElement getTolerance(jint, const ::org::hipparchus::CalculusFieldElement &) const;
          void setInitialStepSize(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(StepsizeHelper);
        extern PyTypeObject *PY_TYPE(StepsizeHelper);

        class t_StepsizeHelper {
        public:
          PyObject_HEAD
          StepsizeHelper object;
          static PyObject *wrap_Object(const StepsizeHelper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
