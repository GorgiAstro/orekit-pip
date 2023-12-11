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
    namespace utils {
      class DoubleArrayDictionary;
      class AbsolutePVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
      class TimeShiftable;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace frames {
      class StaticTransform;
      class Transform;
      class Frame;
    }
    namespace orbits {
      class Orbit;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
    namespace propagation {
      class SpacecraftState;
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
    namespace exception {
      class MathIllegalStateException;
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
          mid_init$_14fff82420f160d8,
          mid_init$_a9af82a1647a21f3,
          mid_init$_838f8e551249504d,
          mid_init$_c061035250d86d0e,
          mid_init$_4a3828f8b12f5ac1,
          mid_init$_83ba56ce27df7cc4,
          mid_init$_ea747fd2a7db5102,
          mid_init$_6bcd4ef191c1dc21,
          mid_init$_ed218c25ccdfab24,
          mid_init$_3d61c2b6aee7f1ab,
          mid_init$_83b2906a83706467,
          mid_init$_35cdcad05270c608,
          mid_init$_96e25e8716343a85,
          mid_init$_17adeb98a99f0ba0,
          mid_init$_8e262296ef2c9e6d,
          mid_init$_aa9cca252a22a85c,
          mid_init$_4cfaa91553b8eb79,
          mid_init$_8a0414297b70ad3c,
          mid_addAdditionalState_d1e1767ed9a4d2a4,
          mid_addAdditionalStateDerivative_d1e1767ed9a4d2a4,
          mid_ensureCompatibleAdditionalStates_8655761ebf04b503,
          mid_getA_557b8123390d8d0c,
          mid_getAbsPVA_424b08369c4f1f64,
          mid_getAdditionalState_008e0cff49b0ec83,
          mid_getAdditionalStateDerivative_008e0cff49b0ec83,
          mid_getAdditionalStatesDerivatives_408230a61ade575e,
          mid_getAdditionalStatesValues_408230a61ade575e,
          mid_getAttitude_ed1eef73b5133690,
          mid_getDate_7a97f7e149e79afb,
          mid_getE_557b8123390d8d0c,
          mid_getEquinoctialEx_557b8123390d8d0c,
          mid_getEquinoctialEy_557b8123390d8d0c,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getHx_557b8123390d8d0c,
          mid_getHy_557b8123390d8d0c,
          mid_getI_557b8123390d8d0c,
          mid_getKeplerianMeanMotion_557b8123390d8d0c,
          mid_getKeplerianPeriod_557b8123390d8d0c,
          mid_getLE_557b8123390d8d0c,
          mid_getLM_557b8123390d8d0c,
          mid_getLv_557b8123390d8d0c,
          mid_getMass_557b8123390d8d0c,
          mid_getMu_557b8123390d8d0c,
          mid_getOrbit_71f9c54b5f482a59,
          mid_getPVCoordinates_daf15abc21907508,
          mid_getPVCoordinates_8cf7b972bef1e4d8,
          mid_getPosition_f88961cca75a2c0a,
          mid_getPosition_8386213426308de8,
          mid_hasAdditionalState_fd2162b8a05a22fe,
          mid_hasAdditionalStateDerivative_fd2162b8a05a22fe,
          mid_isOrbitDefined_89b302893bdbe1f1,
          mid_shiftedBy_ef2dd80fa96d2eea,
          mid_toStaticTransform_f798b00aed778de3,
          mid_toString_3cffd47377eca18a,
          mid_toTransform_1168c6fb2fb8754f,
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
