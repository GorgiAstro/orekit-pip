#ifndef org_orekit_orbits_PythonOrbit_H
#define org_orekit_orbits_PythonOrbit_H

#include "org/orekit/orbits/Orbit.h"

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
          mid_init$_7753eee512deef45,
          mid_init$_0411787cdbbfc137,
          mid_addKeplerContribution_f2365c7dd61a1cda,
          mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1,
          mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1,
          mid_finalize_0fa09c18fee449d5,
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
          mid_initPVCoordinates_c204436deca11d94,
          mid_initPosition_d52645e0d4c07563,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_shiftedBy_3f8b433edd9f6aeb,
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
