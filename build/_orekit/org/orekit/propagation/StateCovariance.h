#ifndef org_orekit_propagation_StateCovariance_H
#define org_orekit_propagation_StateCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace propagation {
      class StateCovariance;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace frames {
      class LOF;
      class Frame;
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
          mid_init$_a3e43bb509386d88,
          mid_init$_dc92e4260cab11aa,
          mid_changeCovarianceFrame_b6bbba5f1b0fd523,
          mid_changeCovarianceFrame_962ea77ed517818a,
          mid_changeCovarianceType_3fba55e1218cf3cb,
          mid_checkFrameAndOrbitTypeConsistency_41a17ca6d6e11fdb,
          mid_getDate_c325492395d89b24,
          mid_getFrame_2c51111cc6894ba1,
          mid_getLOF_f6a236b1948152b5,
          mid_getMatrix_f77d745f2128c391,
          mid_getOrbitType_c7d4737d7afca612,
          mid_getPositionAngleType_c25055891f180348,
          mid_getStm_dcf4bbb08852992a,
          mid_shiftedBy_a7b1244c930324e1,
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
