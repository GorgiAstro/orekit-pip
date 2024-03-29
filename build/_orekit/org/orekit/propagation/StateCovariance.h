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
      class PositionAngleType;
      class Orbit;
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
          mid_init$_364094d938b5284f,
          mid_init$_1d150244ba48542f,
          mid_changeCovarianceFrame_05096ea8054f78aa,
          mid_changeCovarianceFrame_b4ed24579e601754,
          mid_changeCovarianceType_0b475d17b02f53b1,
          mid_checkFrameAndOrbitTypeConsistency_4384175164eee214,
          mid_getDate_80e11148db499dda,
          mid_getFrame_cb151471db4570f0,
          mid_getLOF_4b777b7213a5ce76,
          mid_getMatrix_b2eebabce70526d8,
          mid_getOrbitType_495f818d3570b7f5,
          mid_getPositionAngleType_a6db4e6edefda4be,
          mid_getStm_156b13240f4ab451,
          mid_shiftedBy_3d494d6bca0f31f7,
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
