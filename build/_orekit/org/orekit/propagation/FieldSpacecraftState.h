#ifndef org_orekit_propagation_FieldSpacecraftState_H
#define org_orekit_propagation_FieldSpacecraftState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
      class FieldTimeShiftable;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldArrayDictionary;
      class FieldAbsolutePVCoordinates;
    }
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Frame;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace attitudes {
      class FieldAttitude;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
          mid_init$_2d20453f9d4070ae,
          mid_init$_8c98afebb6212490,
          mid_init$_b23b4beb836cb24f,
          mid_init$_60dae2f60527f1de,
          mid_init$_76c59fe4cedf12a3,
          mid_init$_4b07aa6d46139490,
          mid_init$_ce93a6fc545a9408,
          mid_init$_3eb29dfb1c2ec9c1,
          mid_init$_676b80212ae6696e,
          mid_init$_3c33d294127abff3,
          mid_init$_004e06f041a9576a,
          mid_init$_13cfd2bb5388e8f8,
          mid_init$_bc5f4860f5871754,
          mid_init$_0859c431414bd472,
          mid_init$_21f94de1a930c2cd,
          mid_init$_ec4f8480b982fa6d,
          mid_init$_ec7945892d7aa18c,
          mid_init$_fc1e6b55dc103e38,
          mid_init$_8526a985a8e4edee,
          mid_addAdditionalState_8bf5629e671d4837,
          mid_addAdditionalStateDerivative_8bf5629e671d4837,
          mid_ensureCompatibleAdditionalStates_b66c84a5711243d5,
          mid_getA_613c8f46c659f636,
          mid_getAbsPVA_02ac8b3d3296d86b,
          mid_getAdditionalState_4acd5b0987a64fc1,
          mid_getAdditionalStateDerivative_4acd5b0987a64fc1,
          mid_getAdditionalStatesDerivatives_e712b7d773a9bf41,
          mid_getAdditionalStatesValues_e712b7d773a9bf41,
          mid_getAttitude_d8ea1d6982badd1f,
          mid_getDate_f1fe4daf77c66560,
          mid_getE_613c8f46c659f636,
          mid_getEquinoctialEx_613c8f46c659f636,
          mid_getEquinoctialEy_613c8f46c659f636,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getHx_613c8f46c659f636,
          mid_getHy_613c8f46c659f636,
          mid_getI_613c8f46c659f636,
          mid_getKeplerianMeanMotion_613c8f46c659f636,
          mid_getKeplerianPeriod_613c8f46c659f636,
          mid_getLE_613c8f46c659f636,
          mid_getLM_613c8f46c659f636,
          mid_getLv_613c8f46c659f636,
          mid_getMass_613c8f46c659f636,
          mid_getMu_613c8f46c659f636,
          mid_getOrbit_507d8b7ad2a799b5,
          mid_getPVCoordinates_232470f1b769250c,
          mid_getPVCoordinates_52ae651ad18178ce,
          mid_getPosition_2d64addf4c3391d9,
          mid_getPosition_b026e433cf2ed2d1,
          mid_hasAdditionalState_fd2162b8a05a22fe,
          mid_hasAdditionalStateDerivative_fd2162b8a05a22fe,
          mid_isOrbitDefined_89b302893bdbe1f1,
          mid_shiftedBy_e65c3bf3f12bf1f5,
          mid_shiftedBy_dfd841722f9e8400,
          mid_toSpacecraftState_15e85d5301b90ef8,
          mid_toStaticTransform_fe2c5c7bc73a25b6,
          mid_toString_3cffd47377eca18a,
          mid_toTransform_88fa1fad93ade5d3,
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
