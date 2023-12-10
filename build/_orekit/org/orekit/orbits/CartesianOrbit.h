#ifndef org_orekit_orbits_CartesianOrbit_H
#define org_orekit_orbits_CartesianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class CartesianOrbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
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
          mid_init$_6219f6b430651d68,
          mid_init$_7753eee512deef45,
          mid_init$_17efd10b0f16bc37,
          mid_addKeplerContribution_f2365c7dd61a1cda,
          mid_getA_dff5885c2c873297,
          mid_getADot_dff5885c2c873297,
          mid_getE_dff5885c2c873297,
          mid_getEDot_dff5885c2c873297,
          mid_getEquinoctialEx_dff5885c2c873297,
          mid_getEquinoctialExDot_dff5885c2c873297,
          mid_getEquinoctialEy_dff5885c2c873297,
          mid_getEquinoctialEyDot_dff5885c2c873297,
          mid_getHx_dff5885c2c873297,
          mid_getHxDot_dff5885c2c873297,
          mid_getHy_dff5885c2c873297,
          mid_getHyDot_dff5885c2c873297,
          mid_getI_dff5885c2c873297,
          mid_getIDot_dff5885c2c873297,
          mid_getLE_dff5885c2c873297,
          mid_getLEDot_dff5885c2c873297,
          mid_getLM_dff5885c2c873297,
          mid_getLMDot_dff5885c2c873297,
          mid_getLv_dff5885c2c873297,
          mid_getLvDot_dff5885c2c873297,
          mid_getType_e29360d311dc0e20,
          mid_hasDerivatives_b108b35ef48e27bd,
          mid_shiftedBy_c23f2d16290b9786,
          mid_toString_11b109bd155ca898,
          mid_initPVCoordinates_c204436deca11d94,
          mid_initPosition_d52645e0d4c07563,
          mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1,
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
