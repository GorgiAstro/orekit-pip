#ifndef org_orekit_propagation_FieldSpacecraftState_H
#define org_orekit_propagation_FieldSpacecraftState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeShiftable;
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace utils {
      class FieldAbsolutePVCoordinates;
      class FieldArrayDictionary;
      class TimeStampedFieldPVCoordinates;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Frame;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
    namespace attitudes {
      class FieldAttitude;
    }
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
          mid_init$_8d21b6d6b6f8eddf,
          mid_init$_1cbcb2601e7d1334,
          mid_init$_c3d565e121a0fb47,
          mid_init$_91582abfdd07b6a5,
          mid_init$_e589ef57ecd550ef,
          mid_init$_f9bebdb3c1000d13,
          mid_init$_ae9dd7ac354b319f,
          mid_init$_a3effa3dd188af62,
          mid_init$_a724b159b42485f4,
          mid_init$_cd823ed5229c0e49,
          mid_init$_9ab7c84f99dca0e0,
          mid_init$_f3aab0fb0829e4be,
          mid_init$_116d360f2fab10d0,
          mid_init$_462284fa79787ed0,
          mid_init$_8c4ee5c10c5a1e32,
          mid_init$_ae8b51e11cc27769,
          mid_init$_6ddffbbe0d99a34d,
          mid_init$_01c7dbb41f56cf2e,
          mid_init$_3dd0dab955533973,
          mid_addAdditionalState_ade1146235ecc059,
          mid_addAdditionalStateDerivative_ade1146235ecc059,
          mid_ensureCompatibleAdditionalStates_1463d3d0d52f94dd,
          mid_getA_eba8e72a22c984ac,
          mid_getAbsPVA_88db1a55f8ad67a5,
          mid_getAdditionalState_f1183f1b2d548100,
          mid_getAdditionalStateDerivative_f1183f1b2d548100,
          mid_getAdditionalStatesDerivatives_a7763b9cf85435a1,
          mid_getAdditionalStatesValues_a7763b9cf85435a1,
          mid_getAttitude_710d0a4d1c9c9313,
          mid_getDate_51da00d5b8a3b5df,
          mid_getE_eba8e72a22c984ac,
          mid_getEquinoctialEx_eba8e72a22c984ac,
          mid_getEquinoctialEy_eba8e72a22c984ac,
          mid_getFrame_b86f9f61d97a7244,
          mid_getHx_eba8e72a22c984ac,
          mid_getHy_eba8e72a22c984ac,
          mid_getI_eba8e72a22c984ac,
          mid_getKeplerianMeanMotion_eba8e72a22c984ac,
          mid_getKeplerianPeriod_eba8e72a22c984ac,
          mid_getLE_eba8e72a22c984ac,
          mid_getLM_eba8e72a22c984ac,
          mid_getLv_eba8e72a22c984ac,
          mid_getMass_eba8e72a22c984ac,
          mid_getMu_eba8e72a22c984ac,
          mid_getOrbit_71338e41eb93eedd,
          mid_getPVCoordinates_f89522ff77904397,
          mid_getPVCoordinates_f7bcbf2fe13428b6,
          mid_getPosition_716f50c86ffc8da7,
          mid_getPosition_f336610fe073f215,
          mid_hasAdditionalState_7edad2c2f64f4d68,
          mid_hasAdditionalStateDerivative_7edad2c2f64f4d68,
          mid_isOrbitDefined_b108b35ef48e27bd,
          mid_shiftedBy_7712f88e5d66acc0,
          mid_shiftedBy_8963827f6b4701f6,
          mid_toSpacecraftState_c6311115fea01a34,
          mid_toStaticTransform_b4e9bd069b43219a,
          mid_toString_11b109bd155ca898,
          mid_toTransform_8c35d0b6fdd377c3,
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
