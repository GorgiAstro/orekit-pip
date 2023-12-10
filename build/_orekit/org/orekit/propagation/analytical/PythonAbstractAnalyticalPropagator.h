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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_8109c1a27d4471d3,
            mid_finalize_7ae3461a92a43152,
            mid_getMass_e912d21057defe63,
            mid_propagateOrbit_6f58641238e8a9c4,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
            mid_resetIntermediateState_9658cf3eaef14ef5,
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
