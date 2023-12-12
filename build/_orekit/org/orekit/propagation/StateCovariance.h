#ifndef org_orekit_propagation_StateCovariance_H
#define org_orekit_propagation_StateCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOF;
      class Frame;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class Orbit;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
    namespace propagation {
      class StateCovariance;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class StateCovariance : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b1688c6adc38bffb,
          mid_init$_ab299c366767a21a,
          mid_changeCovarianceFrame_f34a2de6a1678f3a,
          mid_changeCovarianceFrame_0326c1621cadb083,
          mid_changeCovarianceType_9bc86cc0bda1675d,
          mid_checkFrameAndOrbitTypeConsistency_fa21e9c7a1011dd1,
          mid_getDate_7a97f7e149e79afb,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getLOF_13b82f8eb71f0f31,
          mid_getMatrix_70a207fcbc031df2,
          mid_getOrbitType_2cea2a2cb3e02091,
          mid_getPositionAngleType_f4984aee71df4c19,
          mid_getStm_4ff3f8635ed236f0,
          mid_shiftedBy_521921f1a20e36e2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StateCovariance(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StateCovariance(const StateCovariance& obj) : ::java::lang::Object(obj) {}

        static jint STATE_DIMENSION;

        StateCovariance(const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::LOF &);
        StateCovariance(const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);

        StateCovariance changeCovarianceFrame(const ::org::orekit::orbits::Orbit &, const ::org::orekit::frames::Frame &) const;
        StateCovariance changeCovarianceFrame(const ::org::orekit::orbits::Orbit &, const ::org::orekit::frames::LOF &) const;
        StateCovariance changeCovarianceType(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &) const;
        static void checkFrameAndOrbitTypeConsistency(const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &);
        ::org::orekit::time::AbsoluteDate getDate() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::frames::LOF getLOF() const;
        ::org::hipparchus::linear::RealMatrix getMatrix() const;
        ::org::orekit::orbits::OrbitType getOrbitType() const;
        ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
        static ::org::hipparchus::linear::RealMatrix getStm(const ::org::orekit::orbits::Orbit &, jdouble);
        StateCovariance shiftedBy(const ::org::orekit::orbits::Orbit &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(StateCovariance);
      extern PyTypeObject *PY_TYPE(StateCovariance);

      class t_StateCovariance {
      public:
        PyObject_HEAD
        StateCovariance object;
        static PyObject *wrap_Object(const StateCovariance&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
