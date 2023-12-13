#ifndef org_orekit_propagation_FieldSpacecraftState_H
#define org_orekit_propagation_FieldSpacecraftState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeShiftable;
      class FieldTimeStamped;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
    namespace utils {
      class FieldAbsolutePVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class FieldArrayDictionary;
    }
    namespace frames {
      class Frame;
      class FieldStaticTransform;
      class FieldTransform;
    }
    namespace attitudes {
      class FieldAttitude;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace orbits {
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class IllegalArgumentException;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldSpacecraftState : public ::java::lang::Object {
       public:
        enum {
          mid_init$_beb4bdc45ab9c303,
          mid_init$_01b80e5fc8224f27,
          mid_init$_b548402b0e1cc562,
          mid_init$_8758b83db99c950e,
          mid_init$_34cfdb95f9e80025,
          mid_init$_ed1a43c7982c29e0,
          mid_init$_84d3cf6d857753d9,
          mid_init$_a6d98b09777eed78,
          mid_init$_49f6b8e8e63ddd72,
          mid_init$_dd365696e7ab7496,
          mid_init$_6cb72fee56638319,
          mid_init$_bcb99ab75d454a16,
          mid_init$_ac71f4e74ab06572,
          mid_init$_8312fc657bcaa45f,
          mid_init$_31a5e9459a250dac,
          mid_init$_0832f51b90c9153f,
          mid_init$_f379dbc3edea5c0b,
          mid_init$_3ce811b3b358af52,
          mid_init$_0dcd565e8f424093,
          mid_addAdditionalState_9512220711eb1448,
          mid_addAdditionalStateDerivative_9512220711eb1448,
          mid_ensureCompatibleAdditionalStates_54d9efbf99822980,
          mid_getA_81520b552cb3fa26,
          mid_getAbsPVA_fdfa202bea07005b,
          mid_getAdditionalState_f25dcdbfa4b24501,
          mid_getAdditionalStateDerivative_f25dcdbfa4b24501,
          mid_getAdditionalStatesDerivatives_7c5d47860532e9d9,
          mid_getAdditionalStatesValues_7c5d47860532e9d9,
          mid_getAttitude_e33cb3686942b4e6,
          mid_getDate_fa23a4301b9c83e7,
          mid_getE_81520b552cb3fa26,
          mid_getEquinoctialEx_81520b552cb3fa26,
          mid_getEquinoctialEy_81520b552cb3fa26,
          mid_getFrame_2c51111cc6894ba1,
          mid_getHx_81520b552cb3fa26,
          mid_getHy_81520b552cb3fa26,
          mid_getI_81520b552cb3fa26,
          mid_getKeplerianMeanMotion_81520b552cb3fa26,
          mid_getKeplerianPeriod_81520b552cb3fa26,
          mid_getLE_81520b552cb3fa26,
          mid_getLM_81520b552cb3fa26,
          mid_getLv_81520b552cb3fa26,
          mid_getMass_81520b552cb3fa26,
          mid_getMu_81520b552cb3fa26,
          mid_getOrbit_52c9ebac01a11008,
          mid_getPVCoordinates_243debd9cc1dd623,
          mid_getPVCoordinates_dda5a3346286675e,
          mid_getPosition_ff5ac73a7b43eddd,
          mid_getPosition_566ff18e6be34b64,
          mid_hasAdditionalState_cde6b28e15c96b75,
          mid_hasAdditionalStateDerivative_cde6b28e15c96b75,
          mid_isOrbitDefined_9ab94ac1dc23b105,
          mid_shiftedBy_99abaac51ab0fa84,
          mid_shiftedBy_1ff97eb187bf68c1,
          mid_toSpacecraftState_9d155cc8314c99cf,
          mid_toStaticTransform_f5bae1937d1edbc7,
          mid_toString_1c1fa1e935d6cdcf,
          mid_toTransform_b8c22ddb6f9598ea,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldSpacecraftState(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldSpacecraftState(const FieldSpacecraftState& obj) : ::java::lang::Object(obj) {}

        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::orekit::attitudes::FieldAttitude &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::FieldAttitude &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::hipparchus::Field &, const ::org::orekit::propagation::SpacecraftState &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::hipparchus::CalculusFieldElement &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::hipparchus::CalculusFieldElement &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldArrayDictionary &, const ::org::orekit::utils::FieldArrayDictionary &);
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::attitudes::FieldAttitude &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::utils::FieldArrayDictionary &, const ::org::orekit::utils::FieldArrayDictionary &);

        FieldSpacecraftState addAdditionalState(const ::java::lang::String &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        FieldSpacecraftState addAdditionalStateDerivative(const ::java::lang::String &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        void ensureCompatibleAdditionalStates(const FieldSpacecraftState &) const;
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::orekit::utils::FieldAbsolutePVCoordinates getAbsPVA() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getAdditionalState(const ::java::lang::String &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > getAdditionalStateDerivative(const ::java::lang::String &) const;
        ::org::orekit::utils::FieldArrayDictionary getAdditionalStatesDerivatives() const;
        ::org::orekit::utils::FieldArrayDictionary getAdditionalStatesValues() const;
        ::org::orekit::attitudes::FieldAttitude getAttitude() const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::hipparchus::CalculusFieldElement getE() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEx() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEy() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::hipparchus::CalculusFieldElement getHx() const;
        ::org::hipparchus::CalculusFieldElement getHy() const;
        ::org::hipparchus::CalculusFieldElement getI() const;
        ::org::hipparchus::CalculusFieldElement getKeplerianMeanMotion() const;
        ::org::hipparchus::CalculusFieldElement getKeplerianPeriod() const;
        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLM() const;
        ::org::hipparchus::CalculusFieldElement getLv() const;
        ::org::hipparchus::CalculusFieldElement getMass() const;
        ::org::hipparchus::CalculusFieldElement getMu() const;
        ::org::orekit::orbits::FieldOrbit getOrbit() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition(const ::org::orekit::frames::Frame &) const;
        jboolean hasAdditionalState(const ::java::lang::String &) const;
        jboolean hasAdditionalStateDerivative(const ::java::lang::String &) const;
        jboolean isOrbitDefined() const;
        FieldSpacecraftState shiftedBy(jdouble) const;
        FieldSpacecraftState shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::propagation::SpacecraftState toSpacecraftState() const;
        ::org::orekit::frames::FieldStaticTransform toStaticTransform() const;
        ::java::lang::String toString() const;
        ::org::orekit::frames::FieldTransform toTransform() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldSpacecraftState);
      extern PyTypeObject *PY_TYPE(FieldSpacecraftState);

      class t_FieldSpacecraftState {
      public:
        PyObject_HEAD
        FieldSpacecraftState object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldSpacecraftState *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldSpacecraftState&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldSpacecraftState&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
