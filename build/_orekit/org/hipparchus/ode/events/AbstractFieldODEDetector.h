#ifndef org_hipparchus_ode_events_AbstractFieldODEDetector_H
#define org_hipparchus_ode_events_AbstractFieldODEDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class BracketedRealFieldUnivariateSolver;
      }
    }
    namespace ode {
      namespace events {
        class FieldODEEventHandler;
        class AbstractFieldODEDetector;
        class FieldODEEventDetector;
        class FieldAdaptableInterval;
      }
      class FieldODEStateAndDerivative;
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
      namespace events {

        class AbstractFieldODEDetector : public ::java::lang::Object {
         public:
          enum {
            mid_g_ca2be72fa188dbd5,
            mid_getHandler_332eb628084a1f92,
            mid_getMaxCheckInterval_d83e6e399e248e87,
            mid_getMaxIterationCount_f2f64475e4580546,
            mid_getSolver_b14b3849019061d8,
            mid_init_e6d23212b178b64e,
            mid_isForward_e470b6d9e0d979db,
            mid_withHandler_4e0b2fa6d59c149b,
            mid_withMaxCheck_974359dcad45986e,
            mid_withMaxCheck_f0ebb76a8162149a,
            mid_withMaxIter_6cdec8a1f2828383,
            mid_withSolver_1b1808e27d1df280,
            mid_withThreshold_974359dcad45986e,
            mid_create_67b4930778e53cf9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractFieldODEDetector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractFieldODEDetector(const AbstractFieldODEDetector& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_MAXCHECK;
          static jint DEFAULT_MAX_ITER;
          static jdouble DEFAULT_THRESHOLD;

          ::org::hipparchus::CalculusFieldElement g(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::FieldODEEventHandler getHandler() const;
          ::org::hipparchus::ode::events::FieldAdaptableInterval getMaxCheckInterval() const;
          jint getMaxIterationCount() const;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver getSolver() const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
          jboolean isForward() const;
          AbstractFieldODEDetector withHandler(const ::org::hipparchus::ode::events::FieldODEEventHandler &) const;
          AbstractFieldODEDetector withMaxCheck(const ::org::hipparchus::CalculusFieldElement &) const;
          AbstractFieldODEDetector withMaxCheck(const ::org::hipparchus::ode::events::FieldAdaptableInterval &) const;
          AbstractFieldODEDetector withMaxIter(jint) const;
          AbstractFieldODEDetector withSolver(const ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver &) const;
          AbstractFieldODEDetector withThreshold(const ::org::hipparchus::CalculusFieldElement &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(AbstractFieldODEDetector);
        extern PyTypeObject *PY_TYPE(AbstractFieldODEDetector);

        class t_AbstractFieldODEDetector {
        public:
          PyObject_HEAD
          AbstractFieldODEDetector object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_AbstractFieldODEDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractFieldODEDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractFieldODEDetector&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
