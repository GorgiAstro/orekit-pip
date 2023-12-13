#ifndef org_orekit_propagation_analytical_PythonAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_PythonAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class Orbit;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_8e4d3ea100bc0095,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getMass_fd347811007a6ba3,
            mid_propagateOrbit_5df6dcb5c4123339,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_resetIntermediateState_1c47c97cdbc7e206,
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
