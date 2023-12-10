#ifndef org_orekit_propagation_FieldSpacecraftState_H
#define org_orekit_propagation_FieldSpacecraftState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class FieldTimeShiftable;
    }
    namespace frames {
      class FieldStaticTransform;
      class Frame;
      class FieldTransform;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace attitudes {
      class FieldAttitude;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldArrayDictionary;
      class FieldAbsolutePVCoordinates;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    class Field;
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
          mid_init$_207b94fac60a45a2,
          mid_init$_b6fb4d19a77f9888,
          mid_init$_a95776d1a327f352,
          mid_init$_340b44ce3adcd347,
          mid_init$_b580df984d5f7410,
          mid_init$_db9faae4419851ef,
          mid_init$_4a70c10463d10a80,
          mid_init$_adb1719b0dda6ffc,
          mid_init$_0ff01d32a7a845d7,
          mid_init$_3675c39f0608ea8e,
          mid_init$_5ba0288050718eff,
          mid_init$_73725e657fc73da1,
          mid_init$_4084a3223f2fadcf,
          mid_init$_de4e72437e35c7c1,
          mid_init$_b021bd77c3e69cd3,
          mid_init$_c0b61e00e60f33ed,
          mid_init$_15521286cb6a5a8f,
          mid_init$_0e01f87f8415d2b6,
          mid_init$_110be372c3208494,
          mid_addAdditionalState_446c7fca4b71946c,
          mid_addAdditionalStateDerivative_446c7fca4b71946c,
          mid_ensureCompatibleAdditionalStates_52154b94d63e10ed,
          mid_getA_e6d4d3215c30992a,
          mid_getAbsPVA_e4b6a56989293962,
          mid_getAdditionalState_7ff62b68d24a340b,
          mid_getAdditionalStateDerivative_7ff62b68d24a340b,
          mid_getAdditionalStatesDerivatives_a517063e6ce1cd85,
          mid_getAdditionalStatesValues_a517063e6ce1cd85,
          mid_getAttitude_f68321fa097ad8b5,
          mid_getDate_09b0a926600dfc14,
          mid_getE_e6d4d3215c30992a,
          mid_getEquinoctialEx_e6d4d3215c30992a,
          mid_getEquinoctialEy_e6d4d3215c30992a,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getHx_e6d4d3215c30992a,
          mid_getHy_e6d4d3215c30992a,
          mid_getI_e6d4d3215c30992a,
          mid_getKeplerianMeanMotion_e6d4d3215c30992a,
          mid_getKeplerianPeriod_e6d4d3215c30992a,
          mid_getLE_e6d4d3215c30992a,
          mid_getLM_e6d4d3215c30992a,
          mid_getLv_e6d4d3215c30992a,
          mid_getMass_e6d4d3215c30992a,
          mid_getMu_e6d4d3215c30992a,
          mid_getOrbit_2f26cad5f478f007,
          mid_getPVCoordinates_26447a781aafdb9e,
          mid_getPVCoordinates_485af6605091d545,
          mid_getPosition_5791f80683b5227e,
          mid_getPosition_863ec0d27d7d92bb,
          mid_hasAdditionalState_6b161f495ea569b8,
          mid_hasAdditionalStateDerivative_6b161f495ea569b8,
          mid_isOrbitDefined_e470b6d9e0d979db,
          mid_shiftedBy_474d49dada1799a5,
          mid_shiftedBy_5f6943b547152f7d,
          mid_toSpacecraftState_dd3e4a8d51055f1f,
          mid_toStaticTransform_dd9256b23dabf6f6,
          mid_toString_0090f7797e403f43,
          mid_toTransform_b8bdad2f73e0bf7c,
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
        FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &);
        FieldSpacecraftState(const ::org::hipparchus::Field &, const ::org::orekit::propagation::SpacecraftState &);
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
