#ifndef org_orekit_orbits_CartesianOrbit_H
#define org_orekit_orbits_CartesianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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
    namespace frames {
      class Frame;
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
          mid_init$_17534ef58ef3aaef,
          mid_init$_a8e6ee721e0d6799,
          mid_init$_78122b2ba50ff4ac,
          mid_addKeplerContribution_3ef35668c0b1580f,
          mid_getA_9981f74b2d109da6,
          mid_getADot_9981f74b2d109da6,
          mid_getE_9981f74b2d109da6,
          mid_getEDot_9981f74b2d109da6,
          mid_getEquinoctialEx_9981f74b2d109da6,
          mid_getEquinoctialExDot_9981f74b2d109da6,
          mid_getEquinoctialEy_9981f74b2d109da6,
          mid_getEquinoctialEyDot_9981f74b2d109da6,
          mid_getHx_9981f74b2d109da6,
          mid_getHxDot_9981f74b2d109da6,
          mid_getHy_9981f74b2d109da6,
          mid_getHyDot_9981f74b2d109da6,
          mid_getI_9981f74b2d109da6,
          mid_getIDot_9981f74b2d109da6,
          mid_getLE_9981f74b2d109da6,
          mid_getLEDot_9981f74b2d109da6,
          mid_getLM_9981f74b2d109da6,
          mid_getLMDot_9981f74b2d109da6,
          mid_getLv_9981f74b2d109da6,
          mid_getLvDot_9981f74b2d109da6,
          mid_getType_495f818d3570b7f5,
          mid_hasDerivatives_eee3de00fe971136,
          mid_shiftedBy_9fce0e2097197c92,
          mid_toString_d2c8eb4129821f0e,
          mid_initPosition_032312bdeb3f2f93,
          mid_initPVCoordinates_674031698a428ce8,
          mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f,
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
