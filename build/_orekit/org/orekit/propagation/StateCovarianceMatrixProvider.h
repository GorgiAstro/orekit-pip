#ifndef org_orekit_propagation_StateCovarianceMatrixProvider_H
#define org_orekit_propagation_StateCovarianceMatrixProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      class SpacecraftState;
      class StateCovariance;
      class MatricesHarvester;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class Frame;
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
          mid_init$_24d07a6522da6a8c,
          mid_getAdditionalState_e8a4ac02afc72623,
          mid_getCovarianceOrbitType_495f818d3570b7f5,
          mid_getName_d2c8eb4129821f0e,
          mid_getStateCovariance_6871abce780d547a,
          mid_getStateCovariance_c07146296e899a7b,
          mid_getStateCovariance_065963527341f5be,
          mid_init_14deaae988292d42,
          mid_yields_34f098c1d43e614c,
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
