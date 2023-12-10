#ifndef org_orekit_propagation_StateCovarianceMatrixProvider_H
#define org_orekit_propagation_StateCovarianceMatrixProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      class AdditionalStateProvider;
      class MatricesHarvester;
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
          mid_init$_1678ff5367b5b9b3,
          mid_getAdditionalState_cb44069ef445f941,
          mid_getCovarianceOrbitType_e29360d311dc0e20,
          mid_getName_11b109bd155ca898,
          mid_getStateCovariance_a4d66b80c9e4a0a7,
          mid_getStateCovariance_ef02444df5934a90,
          mid_getStateCovariance_5d8d0cb86789b4bf,
          mid_init_826b4eda94da4e78,
          mid_yields_680f8463a473c3cb,
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
