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
    namespace time {
      class AbsoluteDate;
    }
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
          mid_init$_a8e6ee721e0d6799,
          mid_init$_ed4aba3b2cba7971,
          mid_addKeplerContribution_3ef35668c0b1580f,
          mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f,
          mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f,
          mid_finalize_ff7cb6c242604316,
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
          mid_initPVCoordinates_674031698a428ce8,
          mid_initPosition_032312bdeb3f2f93,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_shiftedBy_d1516833b1f81441,
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
