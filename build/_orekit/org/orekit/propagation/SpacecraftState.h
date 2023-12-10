#ifndef org_orekit_propagation_SpacecraftState_H
#define org_orekit_propagation_SpacecraftState_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
      class TimeShiftable;
    }
    namespace frames {
      class Transform;
      class Frame;
      class StaticTransform;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace orbits {
      class Orbit;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
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
    namespace propagation {

      class SpacecraftState : public ::java::lang::Object {
       public:
        enum {
          mid_init$_073e85bdda4ac909,
          mid_init$_e5b8a6a44355183e,
          mid_init$_cac0876957c83a07,
          mid_init$_4113b01e3f013ea8,
          mid_init$_2cfe80d4c8f771e1,
          mid_init$_bedbb88fd5c96a0b,
          mid_init$_3246ce2d8d1e813c,
          mid_init$_b088b68c4e93a489,
          mid_init$_f46c916b57b2fddc,
          mid_init$_cfb5a80032a9ea52,
          mid_init$_eaa9801c626b609c,
          mid_init$_b9a0b4387a439d7c,
          mid_init$_f66b76ba9f271ec3,
          mid_init$_d44940232ffa9ece,
          mid_init$_9660dccae5113b7e,
          mid_init$_6237ff20bb39d491,
          mid_init$_c554ee2e12ba2ef8,
          mid_init$_e1f80ec9e89fc9f9,
          mid_addAdditionalState_8a6f4fa701b1f728,
          mid_addAdditionalStateDerivative_8a6f4fa701b1f728,
          mid_ensureCompatibleAdditionalStates_2b88003f931f70a7,
          mid_getA_456d9a2f64d6b28d,
          mid_getAbsPVA_821da029915a6e75,
          mid_getAdditionalState_5fc57a69c973af17,
          mid_getAdditionalStateDerivative_5fc57a69c973af17,
          mid_getAdditionalStatesDerivatives_08f613b585562583,
          mid_getAdditionalStatesValues_08f613b585562583,
          mid_getAttitude_78dca83e076ede35,
          mid_getDate_aaa854c403487cf3,
          mid_getE_456d9a2f64d6b28d,
          mid_getEquinoctialEx_456d9a2f64d6b28d,
          mid_getEquinoctialEy_456d9a2f64d6b28d,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getHx_456d9a2f64d6b28d,
          mid_getHy_456d9a2f64d6b28d,
          mid_getI_456d9a2f64d6b28d,
          mid_getKeplerianMeanMotion_456d9a2f64d6b28d,
          mid_getKeplerianPeriod_456d9a2f64d6b28d,
          mid_getLE_456d9a2f64d6b28d,
          mid_getLM_456d9a2f64d6b28d,
          mid_getLv_456d9a2f64d6b28d,
          mid_getMass_456d9a2f64d6b28d,
          mid_getMu_456d9a2f64d6b28d,
          mid_getOrbit_551bf685780e3c1f,
          mid_getPVCoordinates_6890805957bea2cd,
          mid_getPVCoordinates_f8a365e30a3ddce1,
          mid_getPosition_17a952530a808943,
          mid_getPosition_b070efa02e5e2595,
          mid_hasAdditionalState_6b161f495ea569b8,
          mid_hasAdditionalStateDerivative_6b161f495ea569b8,
          mid_isOrbitDefined_e470b6d9e0d979db,
          mid_shiftedBy_d8572e79ca9ff46b,
          mid_toStaticTransform_85643104a022b593,
          mid_toString_0090f7797e403f43,
          mid_toTransform_631c2f99a847a383,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SpacecraftState(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SpacecraftState(const SpacecraftState& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_MASS;

        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &);
        SpacecraftState(const ::org::orekit::orbits::Orbit &);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, const ::org::orekit::attitudes::Attitude &);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, jdouble);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::Attitude &);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, jdouble);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, const ::org::orekit::attitudes::Attitude &, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, jdouble, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, const ::org::orekit::attitudes::Attitude &, jdouble);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::Attitude &, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::Attitude &, jdouble);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, jdouble, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, const ::org::orekit::attitudes::Attitude &, jdouble, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::Attitude &, jdouble, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates &, const ::org::orekit::attitudes::Attitude &, jdouble, const ::org::orekit::utils::DoubleArrayDictionary &, const ::org::orekit::utils::DoubleArrayDictionary &);
        SpacecraftState(const ::org::orekit::orbits::Orbit &, const ::org::orekit::attitudes::Attitude &, jdouble, const ::org::orekit::utils::DoubleArrayDictionary &, const ::org::orekit::utils::DoubleArrayDictionary &);

        SpacecraftState addAdditionalState(const ::java::lang::String &, const JArray< jdouble > &) const;
        SpacecraftState addAdditionalStateDerivative(const ::java::lang::String &, const JArray< jdouble > &) const;
        void ensureCompatibleAdditionalStates(const SpacecraftState &) const;
        jdouble getA() const;
        ::org::orekit::utils::AbsolutePVCoordinates getAbsPVA() const;
        JArray< jdouble > getAdditionalState(const ::java::lang::String &) const;
        JArray< jdouble > getAdditionalStateDerivative(const ::java::lang::String &) const;
        ::org::orekit::utils::DoubleArrayDictionary getAdditionalStatesDerivatives() const;
        ::org::orekit::utils::DoubleArrayDictionary getAdditionalStatesValues() const;
        ::org::orekit::attitudes::Attitude getAttitude() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getE() const;
        jdouble getEquinoctialEx() const;
        jdouble getEquinoctialEy() const;
        ::org::orekit::frames::Frame getFrame() const;
        jdouble getHx() const;
        jdouble getHy() const;
        jdouble getI() const;
        jdouble getKeplerianMeanMotion() const;
        jdouble getKeplerianPeriod() const;
        jdouble getLE() const;
        jdouble getLM() const;
        jdouble getLv() const;
        jdouble getMass() const;
        jdouble getMu() const;
        ::org::orekit::orbits::Orbit getOrbit() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::frames::Frame &) const;
        jboolean hasAdditionalState(const ::java::lang::String &) const;
        jboolean hasAdditionalStateDerivative(const ::java::lang::String &) const;
        jboolean isOrbitDefined() const;
        SpacecraftState shiftedBy(jdouble) const;
        ::org::orekit::frames::StaticTransform toStaticTransform() const;
        ::java::lang::String toString() const;
        ::org::orekit::frames::Transform toTransform() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(SpacecraftState);
      extern PyTypeObject *PY_TYPE(SpacecraftState);

      class t_SpacecraftState {
      public:
        PyObject_HEAD
        SpacecraftState object;
        static PyObject *wrap_Object(const SpacecraftState&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
