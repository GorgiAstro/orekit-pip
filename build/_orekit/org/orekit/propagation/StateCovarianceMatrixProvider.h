#ifndef org_orekit_propagation_StateCovarianceMatrixProvider_H
#define org_orekit_propagation_StateCovarianceMatrixProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      class MatricesHarvester;
      class StateCovariance;
      class SpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
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
          mid_init$_90fa80224dcaf333,
          mid_getAdditionalState_f227e5f48720b798,
          mid_getCovarianceOrbitType_c7d4737d7afca612,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getStateCovariance_5ea89205db4401ed,
          mid_getStateCovariance_7a8ee61937bdd116,
          mid_getStateCovariance_f0b5e49ce5f194b1,
          mid_init_2d7f9a496c7e9781,
          mid_yields_97df9017614a1945,
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
