#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class PythonAbstractAnalyticalPropagator : public ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator {
         public:
          enum {
            mid_init$_fddd0a7d9f33bafa,
            mid_finalize_ff7cb6c242604316,
            mid_getMass_209f08246d708042,
            mid_propagateOrbit_776cca2e85dfe61d,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_resetIntermediateState_b69b5541e48d21c0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractAnalyticalPropagator(jobject obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractAnalyticalPropagator(const PythonAbstractAnalyticalPropagator& obj) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(obj) {}

          PythonAbstractAnalyticalPropagator(const ::org::orekit::attitudes::AttitudeProvider &);

          void finalize() const;
          jdouble getMass(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::orbits::Orbit propagateOrbit(const ::org::orekit::time::AbsoluteDate &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void resetIntermediateState(const ::org::orekit::propagation::SpacecraftState &, jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractAnalyticalPropagator);
        extern PyTypeObject *PY_TYPE(PythonAbstractAnalyticalPropagator);

        class t_PythonAbstractAnalyticalPropagator {
        public:
          PyObject_HEAD
          PythonAbstractAnalyticalPropagator object;
          static PyObject *wrap_Object(const PythonAbstractAnalyticalPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
