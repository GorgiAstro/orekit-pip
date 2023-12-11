#ifndef org_orekit_propagation_StateCovarianceMatrixProvider_H
#define org_orekit_propagation_StateCovarianceMatrixProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class MatricesHarvester;
      class SpacecraftState;
      class StateCovariance;
      class AdditionalStateProvider;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
    }
    namespace frames {
      class Frame;
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
          mid_init$_a8816f52a3dd309f,
          mid_getAdditionalState_2a145999b8c9a41d,
          mid_getCovarianceOrbitType_2cea2a2cb3e02091,
          mid_getName_3cffd47377eca18a,
          mid_getStateCovariance_8c42646c9f5a6c55,
          mid_getStateCovariance_085bf38b9645784e,
          mid_getStateCovariance_827e98e3cdbf34db,
          mid_init_0472264ad6f40bc2,
          mid_yields_abdf3beb789bbd4e,
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
