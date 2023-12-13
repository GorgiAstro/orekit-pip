#ifndef org_orekit_orbits_PythonOrbit_H
#define org_orekit_orbits_PythonOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
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
    class Throwable;
    class Class;
    class IllegalArgumentException;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class PythonOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_18124f64d7fce8bd,
          mid_init$_9782eb8ed3559570,
          mid_addKeplerContribution_2a5649bc1625306e,
          mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f,
          mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f,
          mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f,
          mid_finalize_a1fa5dae97ea5ed2,
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
          mid_initPVCoordinates_136cc8ba23b21c29,
          mid_initPosition_8b724f8b4fdad1a2,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          mid_shiftedBy_93453d78b4f95a28,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonOrbit(jobject obj) : ::org::orekit::orbits::Orbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonOrbit(const PythonOrbit& obj) : ::org::orekit::orbits::Orbit(obj) {}

        PythonOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &, jdouble);
        PythonOrbit(const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, jdouble);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, jdouble, const JArray< jdouble > &) const;
        JArray< JArray< jdouble > > computeJacobianEccentricWrtCartesian() const;
        JArray< JArray< jdouble > > computeJacobianMeanWrtCartesian() const;
        JArray< JArray< jdouble > > computeJacobianTrueWrtCartesian() const;
        void finalize() const;
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
        ::org::orekit::utils::TimeStampedPVCoordinates initPVCoordinates() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D initPosition() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::orekit::orbits::Orbit shiftedBy(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(PythonOrbit);
      extern PyTypeObject *PY_TYPE(PythonOrbit);

      class t_PythonOrbit {
      public:
        PyObject_HEAD
        PythonOrbit object;
        static PyObject *wrap_Object(const PythonOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
