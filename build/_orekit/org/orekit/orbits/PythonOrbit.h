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
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
          mid_init$_c42dca2c1e36096d,
          mid_init$_53b3af5cdb692cc0,
          mid_addKeplerContribution_c8fa6ba58ef7126b,
          mid_computeJacobianEccentricWrtCartesian_43de1192439efa92,
          mid_computeJacobianMeanWrtCartesian_43de1192439efa92,
          mid_computeJacobianTrueWrtCartesian_43de1192439efa92,
          mid_finalize_7ae3461a92a43152,
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
          mid_initPVCoordinates_6890805957bea2cd,
          mid_initPosition_17a952530a808943,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          mid_shiftedBy_77a92f9d04f61592,
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
