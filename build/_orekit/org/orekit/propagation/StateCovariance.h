#ifndef org_orekit_propagation_StateCovariance_H
#define org_orekit_propagation_StateCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
          mid_init$_adcc3987ecb59f2f,
          mid_init$_8c76bcc3b3703cd4,
          mid_changeCovarianceFrame_182573aae0235221,
          mid_changeCovarianceFrame_4b28d150e65f081d,
          mid_changeCovarianceType_e0215de50e31f8fc,
          mid_checkFrameAndOrbitTypeConsistency_45530030cb08ed48,
          mid_getDate_85703d13e302437e,
          mid_getFrame_b86f9f61d97a7244,
          mid_getLOF_d1997b828913f65f,
          mid_getMatrix_688b496048ff947b,
          mid_getOrbitType_e29360d311dc0e20,
          mid_getPositionAngleType_8f17e83e5a86217c,
          mid_getStm_f193dd9736942df6,
          mid_shiftedBy_5f863ee3bdf9af16,
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
