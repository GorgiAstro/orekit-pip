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
    namespace time {
      class AbsoluteDate;
      class TimeShiftable;
      class TimeStamped;
    }
    namespace frames {
      class Transform;
      class Frame;
      class StaticTransform;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class DoubleArrayDictionary;
      class AbsolutePVCoordinates;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
    }
    namespace errors {
      class OrekitIllegalStateException;
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
          mid_init$_354ddc04cfad518e,
          mid_init$_17534ef58ef3aaef,
          mid_init$_ceb292b5d9c1c98b,
          mid_init$_757f4ec5c10fd803,
          mid_init$_415a33e9c6726f43,
          mid_init$_eb477070e5713007,
          mid_init$_c0e4d127bbe972d9,
          mid_init$_cd24915ef440ba23,
          mid_init$_ffa2bab2e6031cc9,
          mid_init$_87220a76c6776bc7,
          mid_init$_28d3f439f843efaf,
          mid_init$_2d01416918cfc640,
          mid_init$_c0f40795bb47c5fb,
          mid_init$_c882c08549345f11,
          mid_init$_46b8b1dd2155e5cd,
          mid_init$_9e68c96d7bab630f,
          mid_init$_a7c4cfee8a8d5fca,
          mid_init$_eb9a36c3f42cc0cb,
          mid_addAdditionalState_f3c76d0be5f116c0,
          mid_addAdditionalStateDerivative_f3c76d0be5f116c0,
          mid_ensureCompatibleAdditionalStates_72b846eb87f3af9a,
          mid_getA_9981f74b2d109da6,
          mid_getAbsPVA_0bbeea3cc786f34b,
          mid_getAdditionalState_4bbf10387b1a6128,
          mid_getAdditionalStateDerivative_4bbf10387b1a6128,
          mid_getAdditionalStatesDerivatives_c1165b139cc27553,
          mid_getAdditionalStatesValues_c1165b139cc27553,
          mid_getAttitude_83f44b5ac6431edc,
          mid_getDate_80e11148db499dda,
          mid_getE_9981f74b2d109da6,
          mid_getEquinoctialEx_9981f74b2d109da6,
          mid_getEquinoctialEy_9981f74b2d109da6,
          mid_getFrame_cb151471db4570f0,
          mid_getHx_9981f74b2d109da6,
          mid_getHy_9981f74b2d109da6,
          mid_getI_9981f74b2d109da6,
          mid_getKeplerianMeanMotion_9981f74b2d109da6,
          mid_getKeplerianPeriod_9981f74b2d109da6,
          mid_getLE_9981f74b2d109da6,
          mid_getLM_9981f74b2d109da6,
          mid_getLv_9981f74b2d109da6,
          mid_getMass_9981f74b2d109da6,
          mid_getMu_9981f74b2d109da6,
          mid_getOrbit_fb241cd44f6e41bc,
          mid_getPVCoordinates_674031698a428ce8,
          mid_getPVCoordinates_76634063992a70d7,
          mid_getPosition_032312bdeb3f2f93,
          mid_getPosition_5996cdbecf4f0d06,
          mid_hasAdditionalState_df4c65b2aede5c41,
          mid_hasAdditionalStateDerivative_df4c65b2aede5c41,
          mid_isOrbitDefined_eee3de00fe971136,
          mid_shiftedBy_c119acb81fbe7ec9,
          mid_toStaticTransform_4707295cf0323d2d,
          mid_toString_d2c8eb4129821f0e,
          mid_toTransform_da06dd761109637f,
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
