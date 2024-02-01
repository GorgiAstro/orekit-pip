#ifndef org_orekit_propagation_FieldSpacecraftState_H
#define org_orekit_propagation_FieldSpacecraftState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class Frame;
      class FieldStaticTransform;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldAbsolutePVCoordinates;
      class FieldArrayDictionary;
    }
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
      class FieldTimeShiftable;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace attitudes {
      class FieldAttitude;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace errors {
      class OrekitIllegalStateException;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
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
          mid_init$_1a045ec744e96d4f,
          mid_init$_3e61171636c74f2c,
          mid_init$_71aed5266c4a9efa,
          mid_init$_cb7a5911d1f496a6,
          mid_init$_8a058bf9b40fd2fe,
          mid_init$_0766a0f0e0614e42,
          mid_init$_f1d8b1a7fbc93a08,
          mid_init$_09b3917f9d3fcbc5,
          mid_init$_a445aea77f92643d,
          mid_init$_71779f1881a05cb7,
          mid_init$_7e8edfdcf4f68947,
          mid_init$_b4cbbd8bb76d683f,
          mid_init$_fdb0399f43606ae1,
          mid_init$_f1155a3d8ec0adf6,
          mid_init$_6fd5a049114568f0,
          mid_init$_829d8965b2e45861,
          mid_init$_6fc1795cd0903e51,
          mid_init$_a0e9deee516238c0,
          mid_init$_7b2894296824b39a,
          mid_addAdditionalState_bf6fff8920704877,
          mid_addAdditionalStateDerivative_bf6fff8920704877,
          mid_ensureCompatibleAdditionalStates_8062511934471166,
          mid_getA_08d37e3f77b7239d,
          mid_getAbsPVA_a3998fbb00eb6984,
          mid_getAdditionalState_9b6ce7af1b312c95,
          mid_getAdditionalStateDerivative_9b6ce7af1b312c95,
          mid_getAdditionalStatesDerivatives_110e6e63d71fe768,
          mid_getAdditionalStatesValues_110e6e63d71fe768,
          mid_getAttitude_7e6a14fa68aa3e5f,
          mid_getDate_1fea28374011eef5,
          mid_getE_08d37e3f77b7239d,
          mid_getEquinoctialEx_08d37e3f77b7239d,
          mid_getEquinoctialEy_08d37e3f77b7239d,
          mid_getFrame_cb151471db4570f0,
          mid_getHx_08d37e3f77b7239d,
          mid_getHy_08d37e3f77b7239d,
          mid_getI_08d37e3f77b7239d,
          mid_getKeplerianMeanMotion_08d37e3f77b7239d,
          mid_getKeplerianPeriod_08d37e3f77b7239d,
          mid_getLE_08d37e3f77b7239d,
          mid_getLM_08d37e3f77b7239d,
          mid_getLv_08d37e3f77b7239d,
          mid_getMass_08d37e3f77b7239d,
          mid_getMu_08d37e3f77b7239d,
          mid_getOrbit_5b5bea4bdba413a2,
          mid_getPVCoordinates_be698fa91827b9b2,
          mid_getPVCoordinates_cb22ebaaad002a3b,
          mid_getPosition_d1b42a6748e907f9,
          mid_getPosition_04c84225ba0acc81,
          mid_hasAdditionalState_df4c65b2aede5c41,
          mid_hasAdditionalStateDerivative_df4c65b2aede5c41,
          mid_isOrbitDefined_eee3de00fe971136,
          mid_shiftedBy_3a76ce7715466d38,
          mid_shiftedBy_c950412b2168bf4c,
          mid_toSpacecraftState_8fbfa58855031235,
          mid_toStaticTransform_bfbe5d9ed8a9e205,
          mid_toString_d2c8eb4129821f0e,
          mid_toTransform_c58e1d0e1f3afd7d,
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
