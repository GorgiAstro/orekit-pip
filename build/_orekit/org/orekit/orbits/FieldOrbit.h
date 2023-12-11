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
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
      class FieldTimeShiftable;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
      class Orbit;
      class FieldOrbit;
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
          mid_addKeplerContribution_442a44d8b8481234,
          mid_getA_613c8f46c659f636,
          mid_getADot_613c8f46c659f636,
          mid_getDate_f1fe4daf77c66560,
          mid_getE_613c8f46c659f636,
          mid_getEDot_613c8f46c659f636,
          mid_getEquinoctialEx_613c8f46c659f636,
          mid_getEquinoctialExDot_613c8f46c659f636,
          mid_getEquinoctialEy_613c8f46c659f636,
          mid_getEquinoctialEyDot_613c8f46c659f636,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getHx_613c8f46c659f636,
          mid_getHxDot_613c8f46c659f636,
          mid_getHy_613c8f46c659f636,
          mid_getHyDot_613c8f46c659f636,
          mid_getI_613c8f46c659f636,
          mid_getIDot_613c8f46c659f636,
          mid_getJacobianWrtCartesian_ebd0d059969e98c5,
          mid_getJacobianWrtParameters_ebd0d059969e98c5,
          mid_getKeplerianMeanMotion_613c8f46c659f636,
          mid_getKeplerianPeriod_613c8f46c659f636,
          mid_getLE_613c8f46c659f636,
          mid_getLEDot_613c8f46c659f636,
          mid_getLM_613c8f46c659f636,
          mid_getLMDot_613c8f46c659f636,
          mid_getLv_613c8f46c659f636,
          mid_getLvDot_613c8f46c659f636,
          mid_getMeanAnomalyDotWrtA_613c8f46c659f636,
          mid_getMu_613c8f46c659f636,
          mid_getPVCoordinates_232470f1b769250c,
          mid_getPVCoordinates_52ae651ad18178ce,
          mid_getPVCoordinates_4ac52e75113a03db,
          mid_getPosition_2d64addf4c3391d9,
          mid_getPosition_b026e433cf2ed2d1,
          mid_getType_2cea2a2cb3e02091,
          mid_hasDerivatives_89b302893bdbe1f1,
          mid_isElliptical_89b302893bdbe1f1,
          mid_shiftedBy_c027c7cdca66d228,
          mid_toOrbit_71f9c54b5f482a59,
          mid_getZero_613c8f46c659f636,
          mid_getOne_613c8f46c659f636,
          mid_initPVCoordinates_232470f1b769250c,
          mid_initPosition_2d64addf4c3391d9,
          mid_computeJacobianMeanWrtCartesian_f180d140dce78d62,
          mid_computeJacobianEccentricWrtCartesian_f180d140dce78d62,
          mid_computeJacobianTrueWrtCartesian_f180d140dce78d62,
          mid_hasNonKeplerianAcceleration_3c68f52eec743312,
          mid_fillHalfRow_1d362b245369e979,
          mid_fillHalfRow_3cec009d62fadbfd,
          mid_fillHalfRow_114408e0134b1be0,
          mid_fillHalfRow_ba5461181dadfce5,
          mid_fillHalfRow_6ee8dc1bfd22e3bd,
          mid_fillHalfRow_cca06726d93d40de,
          mid_getField_20f98801541dcec1,
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
