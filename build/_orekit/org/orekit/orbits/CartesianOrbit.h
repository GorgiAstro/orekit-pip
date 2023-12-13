#ifndef org_orekit_orbits_CartesianOrbit_H
#define org_orekit_orbits_CartesianOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
      class CartesianOrbit;
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
          mid_init$_69b47a274eed440d,
          mid_init$_18124f64d7fce8bd,
          mid_init$_bc81b5d0c2baa99c,
          mid_addKeplerContribution_2a5649bc1625306e,
          mid_getA_b74f83833fdad017,
          mid_getADot_b74f83833fdad017,
          mid_getE_b74f83833fdad017,
          mid_getEDot_b74f83833fdad017,
          mid_getEquinoctialEx_b74f83833fdad017,
          mid_getEquinoctialExDot_b74f83833fdad017,
          mid_getEquinoctialEy_b74f83833fdad017,
          mid_getEquinoctialEyDot_b74f83833fdad017,
          mid_getHx_b74f83833fdad017,
          mid_getHxDot_b74f83833fdad017,
          mid_getHy_b74f83833fdad017,
          mid_getHyDot_b74f83833fdad017,
          mid_getI_b74f83833fdad017,
          mid_getIDot_b74f83833fdad017,
          mid_getLE_b74f83833fdad017,
          mid_getLEDot_b74f83833fdad017,
          mid_getLM_b74f83833fdad017,
          mid_getLMDot_b74f83833fdad017,
          mid_getLv_b74f83833fdad017,
          mid_getLvDot_b74f83833fdad017,
          mid_getType_c7d4737d7afca612,
          mid_hasDerivatives_9ab94ac1dc23b105,
          mid_shiftedBy_88c84847c2a191e0,
          mid_toString_1c1fa1e935d6cdcf,
          mid_initPosition_8b724f8b4fdad1a2,
          mid_initPVCoordinates_136cc8ba23b21c29,
          mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f,
          mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f,
          mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f,
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
