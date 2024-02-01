#ifndef org_orekit_orbits_FieldOrbit_H
#define org_orekit_orbits_FieldOrbit_H

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
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldTimeShiftable;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
    }
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class FieldOrbit : public ::java::lang::Object {
       public:
        enum {
          mid_addKeplerContribution_210d5c728d3233b4,
          mid_getA_08d37e3f77b7239d,
          mid_getADot_08d37e3f77b7239d,
          mid_getDate_1fea28374011eef5,
          mid_getE_08d37e3f77b7239d,
          mid_getEDot_08d37e3f77b7239d,
          mid_getEquinoctialEx_08d37e3f77b7239d,
          mid_getEquinoctialExDot_08d37e3f77b7239d,
          mid_getEquinoctialEy_08d37e3f77b7239d,
          mid_getEquinoctialEyDot_08d37e3f77b7239d,
          mid_getFrame_cb151471db4570f0,
          mid_getHx_08d37e3f77b7239d,
          mid_getHxDot_08d37e3f77b7239d,
          mid_getHy_08d37e3f77b7239d,
          mid_getHyDot_08d37e3f77b7239d,
          mid_getI_08d37e3f77b7239d,
          mid_getIDot_08d37e3f77b7239d,
          mid_getJacobianWrtCartesian_27db980f74f195ac,
          mid_getJacobianWrtParameters_27db980f74f195ac,
          mid_getKeplerianMeanMotion_08d37e3f77b7239d,
          mid_getKeplerianPeriod_08d37e3f77b7239d,
          mid_getLE_08d37e3f77b7239d,
          mid_getLEDot_08d37e3f77b7239d,
          mid_getLM_08d37e3f77b7239d,
          mid_getLMDot_08d37e3f77b7239d,
          mid_getLv_08d37e3f77b7239d,
          mid_getLvDot_08d37e3f77b7239d,
          mid_getMeanAnomalyDotWrtA_08d37e3f77b7239d,
          mid_getMu_08d37e3f77b7239d,
          mid_getPVCoordinates_be698fa91827b9b2,
          mid_getPVCoordinates_cb22ebaaad002a3b,
          mid_getPVCoordinates_1b1a4229447f7bf7,
          mid_getPosition_d1b42a6748e907f9,
          mid_getPosition_04c84225ba0acc81,
          mid_getType_495f818d3570b7f5,
          mid_hasDerivatives_eee3de00fe971136,
          mid_isElliptical_eee3de00fe971136,
          mid_shiftedBy_84983ae5cc779277,
          mid_toOrbit_fb241cd44f6e41bc,
          mid_getZero_08d37e3f77b7239d,
          mid_getOne_08d37e3f77b7239d,
          mid_initPosition_d1b42a6748e907f9,
          mid_initPVCoordinates_be698fa91827b9b2,
          mid_computeJacobianMeanWrtCartesian_4d010bb8d4780d51,
          mid_computeJacobianEccentricWrtCartesian_4d010bb8d4780d51,
          mid_computeJacobianTrueWrtCartesian_4d010bb8d4780d51,
          mid_fillHalfRow_62c0eed563eac9c0,
          mid_fillHalfRow_46329c3a295ba685,
          mid_fillHalfRow_af0cc434d96536f1,
          mid_fillHalfRow_69539f597b368614,
          mid_fillHalfRow_956e41155816d382,
          mid_fillHalfRow_23e2c3dbac059c05,
          mid_hasNonKeplerianAcceleration_ba66721b6dca6a2a,
          mid_getField_577649682b9910c1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldOrbit(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldOrbit(const FieldOrbit& obj) : ::java::lang::Object(obj) {}

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::hipparchus::CalculusFieldElement getE() const;
        ::org::hipparchus::CalculusFieldElement getEDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEx() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialExDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEy() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEyDot() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::hipparchus::CalculusFieldElement getHx() const;
        ::org::hipparchus::CalculusFieldElement getHxDot() const;
        ::org::hipparchus::CalculusFieldElement getHy() const;
        ::org::hipparchus::CalculusFieldElement getHyDot() const;
        ::org::hipparchus::CalculusFieldElement getI() const;
        ::org::hipparchus::CalculusFieldElement getIDot() const;
        void getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &) const;
        void getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &) const;
        ::org::hipparchus::CalculusFieldElement getKeplerianMeanMotion() const;
        ::org::hipparchus::CalculusFieldElement getKeplerianPeriod() const;
        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLEDot() const;
        ::org::hipparchus::CalculusFieldElement getLM() const;
        ::org::hipparchus::CalculusFieldElement getLMDot() const;
        ::org::hipparchus::CalculusFieldElement getLv() const;
        ::org::hipparchus::CalculusFieldElement getLvDot() const;
        ::org::hipparchus::CalculusFieldElement getMeanAnomalyDotWrtA() const;
        ::org::hipparchus::CalculusFieldElement getMu() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        jboolean isElliptical() const;
        FieldOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::Orbit toOrbit() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldOrbit);
      extern PyTypeObject *PY_TYPE(FieldOrbit);

      class t_FieldOrbit {
      public:
        PyObject_HEAD
        FieldOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
