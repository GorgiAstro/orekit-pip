#ifndef org_orekit_orbits_PythonOrbit_H
#define org_orekit_orbits_PythonOrbit_H

#include "org/orekit/orbits/Orbit.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class IllegalArgumentException;
  }
}
namespace org {
  namespace orekit {
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
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class PythonOrbit : public ::org::orekit::orbits::Orbit {
       public:
        enum {
          mid_init$_7c6479063e790949,
          mid_init$_511409a69796653b,
          mid_addKeplerContribution_9dda16418cc4ed80,
          mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3,
          mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3,
          mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3,
          mid_finalize_0640e6acf969ed28,
          mid_getA_557b8123390d8d0c,
          mid_getADot_557b8123390d8d0c,
          mid_getE_557b8123390d8d0c,
          mid_getEDot_557b8123390d8d0c,
          mid_getEquinoctialEx_557b8123390d8d0c,
          mid_getEquinoctialExDot_557b8123390d8d0c,
          mid_getEquinoctialEy_557b8123390d8d0c,
          mid_getEquinoctialEyDot_557b8123390d8d0c,
          mid_getHx_557b8123390d8d0c,
          mid_getHxDot_557b8123390d8d0c,
          mid_getHy_557b8123390d8d0c,
          mid_getHyDot_557b8123390d8d0c,
          mid_getI_557b8123390d8d0c,
          mid_getIDot_557b8123390d8d0c,
          mid_getLE_557b8123390d8d0c,
          mid_getLEDot_557b8123390d8d0c,
          mid_getLM_557b8123390d8d0c,
          mid_getLMDot_557b8123390d8d0c,
          mid_getLv_557b8123390d8d0c,
          mid_getLvDot_557b8123390d8d0c,
          mid_getType_2cea2a2cb3e02091,
          mid_initPVCoordinates_daf15abc21907508,
          mid_initPosition_f88961cca75a2c0a,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_shiftedBy_47d1046ffc445a6a,
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
