#ifndef org_orekit_orbits_CartesianOrbit_H
#define org_orekit_orbits_CartesianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace orbits {
      class CartesianOrbit;
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
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class CartesianOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_e5b8a6a44355183e,
          mid_init$_c42dca2c1e36096d,
          mid_init$_e115ec145d0ee229,
          mid_addKeplerContribution_c8fa6ba58ef7126b,
          mid_getA_456d9a2f64d6b28d,
          mid_getADot_456d9a2f64d6b28d,
          mid_getE_456d9a2f64d6b28d,
          mid_getEDot_456d9a2f64d6b28d,
          mid_getEquinoctialEx_456d9a2f64d6b28d,
          mid_getEquinoctialExDot_456d9a2f64d6b28d,
          mid_getEquinoctialEy_456d9a2f64d6b28d,
          mid_getEquinoctialEyDot_456d9a2f64d6b28d,
          mid_getHx_456d9a2f64d6b28d,
          mid_getHxDot_456d9a2f64d6b28d,
          mid_getHy_456d9a2f64d6b28d,
          mid_getHyDot_456d9a2f64d6b28d,
          mid_getI_456d9a2f64d6b28d,
          mid_getIDot_456d9a2f64d6b28d,
          mid_getLE_456d9a2f64d6b28d,
          mid_getLEDot_456d9a2f64d6b28d,
          mid_getLM_456d9a2f64d6b28d,
          mid_getLMDot_456d9a2f64d6b28d,
          mid_getLv_456d9a2f64d6b28d,
          mid_getLvDot_456d9a2f64d6b28d,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasDerivatives_e470b6d9e0d979db,
          mid_shiftedBy_3712bdf29907e736,
          mid_toString_0090f7797e403f43,
          mid_initPosition_17a952530a808943,
          mid_initPVCoordinates_6890805957bea2cd,
          mid_computeJacobianMeanWrtCartesian_43de1192439efa92,
          mid_computeJacobianEccentricWrtCartesian_43de1192439efa92,
          mid_computeJacobianTrueWrtCartesian_43de1192439efa92,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CartesianOrbit(jobject obj) : ::org::orekit::orbits::Orbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CartesianOrbit(const CartesianOrbit& obj) : ::org::orekit::orbits::Orbit(obj) {}

        CartesianOrbit(const ::org::orekit::orbits::Orbit &);
        CartesianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &, jdouble);
        CartesianOrbit(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, jdouble, const JArray< jdouble > &) const;
        jdouble getA() const;
        jdouble getADot() const;
        jdouble getE() const;
        jdouble getEDot() const;
        jdouble getEquinoctialEx() const;
        jdouble getEquinoctialExDot() const;
        jdouble getEquinoctialEy() const;
        jdouble getEquinoctialEyDot() const;
        jdouble getHx() const;
        jdouble getHxDot() const;
        jdouble getHy() const;
        jdouble getHyDot() const;
        jdouble getI() const;
        jdouble getIDot() const;
        jdouble getLE() const;
        jdouble getLEDot() const;
        jdouble getLM() const;
        jdouble getLMDot() const;
        jdouble getLv() const;
        jdouble getLvDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        CartesianOrbit shiftedBy(jdouble) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(CartesianOrbit);
      extern PyTypeObject *PY_TYPE(CartesianOrbit);

      class t_CartesianOrbit {
      public:
        PyObject_HEAD
        CartesianOrbit object;
        static PyObject *wrap_Object(const CartesianOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
