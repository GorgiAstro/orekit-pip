#ifndef org_orekit_orbits_EquinoctialOrbit_H
#define org_orekit_orbits_EquinoctialOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
      class PVCoordinates;
    }
    namespace orbits {
      class PositionAngleBased;
      class PositionAngleType;
      class OrbitType;
      class EquinoctialOrbit;
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

      class EquinoctialOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_69b47a274eed440d,
          mid_init$_18124f64d7fce8bd,
          mid_init$_bc81b5d0c2baa99c,
          mid_init$_5fc5d1b0e40c2d5b,
          mid_init$_3058e51cfd00310e,
          mid_addKeplerContribution_2a5649bc1625306e,
          mid_eccentricToMean_f804f816b79164cb,
          mid_eccentricToTrue_f804f816b79164cb,
          mid_getA_b74f83833fdad017,
          mid_getADot_b74f83833fdad017,
          mid_getCachedPositionAngleType_c25055891f180348,
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
          mid_getL_68608c097e66b295,
          mid_getLDot_68608c097e66b295,
          mid_getLE_b74f83833fdad017,
          mid_getLEDot_b74f83833fdad017,
          mid_getLM_b74f83833fdad017,
          mid_getLMDot_b74f83833fdad017,
          mid_getLv_b74f83833fdad017,
          mid_getLvDot_b74f83833fdad017,
          mid_getType_c7d4737d7afca612,
          mid_hasRates_9ab94ac1dc23b105,
          mid_meanToEccentric_f804f816b79164cb,
          mid_removeRates_fd625ef6a79a03db,
          mid_shiftedBy_bbafbee12fa05f6f,
          mid_toString_1c1fa1e935d6cdcf,
          mid_trueToEccentric_f804f816b79164cb,
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

        explicit EquinoctialOrbit(jobject obj) : ::org::orekit::orbits::Orbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EquinoctialOrbit(const EquinoctialOrbit& obj) : ::org::orekit::orbits::Orbit(obj) {}

        EquinoctialOrbit(const ::org::orekit::orbits::Orbit &);
        EquinoctialOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &, jdouble);
        EquinoctialOrbit(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        EquinoctialOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);
        EquinoctialOrbit(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, jdouble, const JArray< jdouble > &) const;
        static jdouble eccentricToMean(jdouble, jdouble, jdouble);
        static jdouble eccentricToTrue(jdouble, jdouble, jdouble);
        jdouble getA() const;
        jdouble getADot() const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
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
        jdouble getL(const ::org::orekit::orbits::PositionAngleType &) const;
        jdouble getLDot(const ::org::orekit::orbits::PositionAngleType &) const;
        jdouble getLE() const;
        jdouble getLEDot() const;
        jdouble getLM() const;
        jdouble getLMDot() const;
        jdouble getLv() const;
        jdouble getLvDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasRates() const;
        static jdouble meanToEccentric(jdouble, jdouble, jdouble);
        EquinoctialOrbit removeRates() const;
        EquinoctialOrbit shiftedBy(jdouble) const;
        ::java::lang::String toString() const;
        static jdouble trueToEccentric(jdouble, jdouble, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(EquinoctialOrbit);
      extern PyTypeObject *PY_TYPE(EquinoctialOrbit);

      class t_EquinoctialOrbit {
      public:
        PyObject_HEAD
        EquinoctialOrbit object;
        static PyObject *wrap_Object(const EquinoctialOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
