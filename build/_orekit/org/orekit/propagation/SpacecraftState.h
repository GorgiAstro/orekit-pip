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
    namespace frames {
      class Transform;
      class StaticTransform;
      class Frame;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class AbsolutePVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace time {
      class TimeStamped;
      class TimeShiftable;
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      class SpacecraftState;
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
          mid_init$_08587d4b3fc64a24,
          mid_init$_69b47a274eed440d,
          mid_init$_e0984b26cd5cf74d,
          mid_init$_0e2c983b8c1d8f50,
          mid_init$_d9c24bf94bc211c6,
          mid_init$_b22426d582c18f23,
          mid_init$_2fcfed733b7a8eb9,
          mid_init$_8fed341cbd0be79a,
          mid_init$_6774606baa4c6a58,
          mid_init$_95d773a980506000,
          mid_init$_b3b36a32c2adc270,
          mid_init$_2ab7b060567cc3aa,
          mid_init$_650558d6171c3219,
          mid_init$_f5ef24ce12f1740b,
          mid_init$_c3a61c117b92d41e,
          mid_init$_f122253a8598b1e2,
          mid_init$_2e969436e51998a5,
          mid_init$_76bd565021d5c729,
          mid_addAdditionalState_fc076482ca98edf7,
          mid_addAdditionalStateDerivative_fc076482ca98edf7,
          mid_ensureCompatibleAdditionalStates_280c3390961e0a50,
          mid_getA_b74f83833fdad017,
          mid_getAbsPVA_900ea521fabf17ca,
          mid_getAdditionalState_1d7f5d54f6c58f85,
          mid_getAdditionalStateDerivative_1d7f5d54f6c58f85,
          mid_getAdditionalStatesDerivatives_7e78a9fc753e1e5a,
          mid_getAdditionalStatesValues_7e78a9fc753e1e5a,
          mid_getAttitude_9d85ee1243dd5d25,
          mid_getDate_c325492395d89b24,
          mid_getE_b74f83833fdad017,
          mid_getEquinoctialEx_b74f83833fdad017,
          mid_getEquinoctialEy_b74f83833fdad017,
          mid_getFrame_2c51111cc6894ba1,
          mid_getHx_b74f83833fdad017,
          mid_getHy_b74f83833fdad017,
          mid_getI_b74f83833fdad017,
          mid_getKeplerianMeanMotion_b74f83833fdad017,
          mid_getKeplerianPeriod_b74f83833fdad017,
          mid_getLE_b74f83833fdad017,
          mid_getLM_b74f83833fdad017,
          mid_getLv_b74f83833fdad017,
          mid_getMass_b74f83833fdad017,
          mid_getMu_b74f83833fdad017,
          mid_getOrbit_b6e68c5f730fb347,
          mid_getPVCoordinates_136cc8ba23b21c29,
          mid_getPVCoordinates_03c7a0bca588a4f5,
          mid_getPosition_8b724f8b4fdad1a2,
          mid_getPosition_982d534f80d70918,
          mid_hasAdditionalState_cde6b28e15c96b75,
          mid_hasAdditionalStateDerivative_cde6b28e15c96b75,
          mid_isOrbitDefined_9ab94ac1dc23b105,
          mid_shiftedBy_baed2cc097607a95,
          mid_toStaticTransform_00930874428900c5,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toTransform_417755e67b7f769d,
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
