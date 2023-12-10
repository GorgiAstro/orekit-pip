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
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
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
          mid_init$_bc3eac47e80fb0ba,
          mid_init$_1c599a7dea3b43c0,
          mid_changeCovarianceFrame_3fd4717a462c22f4,
          mid_changeCovarianceFrame_1a4b94b92ad46ea0,
          mid_changeCovarianceType_73777e50711dae04,
          mid_checkFrameAndOrbitTypeConsistency_eac94fe4d20a9982,
          mid_getDate_aaa854c403487cf3,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getLOF_6131a2ffcdec47e9,
          mid_getMatrix_7116bbecdd8ceb21,
          mid_getOrbitType_63ea5cd020bf7bf1,
          mid_getPositionAngleType_2571e8fe1cede425,
          mid_getStm_f834e4415e4edf80,
          mid_shiftedBy_7942b69d6379bc01,
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
