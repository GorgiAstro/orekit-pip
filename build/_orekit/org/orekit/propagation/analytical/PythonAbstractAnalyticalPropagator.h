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
    namespace orbits {
      class Orbit;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_3cff7c75ea06698c,
            mid_finalize_0fa09c18fee449d5,
            mid_getMass_bf1d7732f1acb697,
            mid_propagateOrbit_7a8f4c854607bed6,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_resetIntermediateState_33f4696e4edaa03c,
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
