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
            mid_init$_36e977212374ff6b,
            mid_init$_b0a935b68e41d65a,
            mid_filterStep_16d3313994f1bf12,
            mid_filterStep_364c6dc6097b328f,
            mid_getDummyStepsize_dff5885c2c873297,
            mid_getInitialStep_dff5885c2c873297,
            mid_getMainSetDimension_570ce0828f81a2c1,
            mid_getMaxStep_dff5885c2c873297,
            mid_getMinStep_dff5885c2c873297,
            mid_getRelativeTolerance_46f85b53d9aedd96,
            mid_getTolerance_60d7624725a52590,
            mid_getTolerance_e2b464e41c9ba627,
            mid_setInitialStepSize_17db3a65980d3441,
            mid_setMainSetDimension_99803b0791f320ff,
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
