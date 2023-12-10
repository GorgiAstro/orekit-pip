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
      class TimeStamped;
      class TimeShiftable;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class AbsolutePVCoordinates;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class StaticTransform;
      class Transform;
      class Frame;
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
    namespace attitudes {
      class Attitude;
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
          mid_init$_a834341b86d7c555,
          mid_init$_6219f6b430651d68,
          mid_init$_2ec9afc2e47b338d,
          mid_init$_a7d560625cc2403d,
          mid_init$_91f7468bd00a89a5,
          mid_init$_41811c3e433fc06a,
          mid_init$_0dd51dbd5e2936c0,
          mid_init$_6a752d664cb18d86,
          mid_init$_5348132fee043717,
          mid_init$_4d11e626785a9720,
          mid_init$_381d44db988285bc,
          mid_init$_15d74cc964e458b3,
          mid_init$_836d3066cd9c6f05,
          mid_init$_0cc7979070d5c007,
          mid_init$_92918c7cfdd4eaaf,
          mid_init$_df1b78511c9c133f,
          mid_init$_4c91821601404e7a,
          mid_init$_68f3c275a900e996,
          mid_addAdditionalState_7a8e66b8670b4752,
          mid_addAdditionalStateDerivative_7a8e66b8670b4752,
          mid_ensureCompatibleAdditionalStates_0ee5c56004643a2e,
          mid_getA_dff5885c2c873297,
          mid_getAbsPVA_3484f681e5893171,
          mid_getAdditionalState_f87e5f45128c2827,
          mid_getAdditionalStateDerivative_f87e5f45128c2827,
          mid_getAdditionalStatesDerivatives_17e5408138fe3169,
          mid_getAdditionalStatesValues_17e5408138fe3169,
          mid_getAttitude_bd12f6f74bd44dca,
          mid_getDate_85703d13e302437e,
          mid_getE_dff5885c2c873297,
          mid_getEquinoctialEx_dff5885c2c873297,
          mid_getEquinoctialEy_dff5885c2c873297,
          mid_getFrame_b86f9f61d97a7244,
          mid_getHx_dff5885c2c873297,
          mid_getHy_dff5885c2c873297,
          mid_getI_dff5885c2c873297,
          mid_getKeplerianMeanMotion_dff5885c2c873297,
          mid_getKeplerianPeriod_dff5885c2c873297,
          mid_getLE_dff5885c2c873297,
          mid_getLM_dff5885c2c873297,
          mid_getLv_dff5885c2c873297,
          mid_getMass_dff5885c2c873297,
          mid_getMu_dff5885c2c873297,
          mid_getOrbit_cde5690bfa4f9649,
          mid_getPVCoordinates_c204436deca11d94,
          mid_getPVCoordinates_d9ebf50b8aebcbf9,
          mid_getPosition_d52645e0d4c07563,
          mid_getPosition_e91e859b879f3586,
          mid_hasAdditionalState_7edad2c2f64f4d68,
          mid_hasAdditionalStateDerivative_7edad2c2f64f4d68,
          mid_isOrbitDefined_b108b35ef48e27bd,
          mid_shiftedBy_4c7d85f6fb7b5bef,
          mid_toStaticTransform_892837e768e813bc,
          mid_toString_11b109bd155ca898,
          mid_toTransform_09afc11266121652,
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
