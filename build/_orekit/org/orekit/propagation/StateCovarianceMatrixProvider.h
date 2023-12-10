#ifndef org_orekit_propagation_StateCovarianceMatrixProvider_H
#define org_orekit_propagation_StateCovarianceMatrixProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class MatricesHarvester;
      class StateCovariance;
      class AdditionalStateProvider;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class StateCovarianceMatrixProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_5bf85a5a232e407d,
          mid_getAdditionalState_137d7db4f3f987f7,
          mid_getCovarianceOrbitType_63ea5cd020bf7bf1,
          mid_getName_0090f7797e403f43,
          mid_getStateCovariance_3e27c3cac49b2604,
          mid_getStateCovariance_12ee03a9343d9d5c,
          mid_getStateCovariance_24d7aac134a336b8,
          mid_init_3d13474d79f5e7bc,
          mid_yields_97634138963fb58a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StateCovarianceMatrixProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StateCovarianceMatrixProvider(const StateCovarianceMatrixProvider& obj) : ::java::lang::Object(obj) {}

        StateCovarianceMatrixProvider(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::propagation::MatricesHarvester &, const ::org::orekit::propagation::StateCovariance &);

        JArray< jdouble > getAdditionalState(const ::org::orekit::propagation::SpacecraftState &) const;
        ::org::orekit::orbits::OrbitType getCovarianceOrbitType() const;
        ::java::lang::String getName() const;
        ::org::orekit::propagation::StateCovariance getStateCovariance(const ::org::orekit::propagation::SpacecraftState &) const;
        ::org::orekit::propagation::StateCovariance getStateCovariance(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::propagation::StateCovariance getStateCovariance(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &) const;
        void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        jboolean yields(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(StateCovarianceMatrixProvider);
      extern PyTypeObject *PY_TYPE(StateCovarianceMatrixProvider);

      class t_StateCovarianceMatrixProvider {
      public:
        PyObject_HEAD
        StateCovarianceMatrixProvider object;
        static PyObject *wrap_Object(const StateCovarianceMatrixProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
