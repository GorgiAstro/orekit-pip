#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      class SpacecraftState;
    }
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
            mid_init$_8fa6c0c067ead7b2,
            mid_finalize_0640e6acf969ed28,
            mid_getMass_b0b988f941da47d8,
            mid_propagateOrbit_9e937c0ae63d8022,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_resetIntermediateState_45bf76e836befe86,
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
