#ifndef org_orekit_orbits_FieldCartesianOrbit_H
#define org_orekit_orbits_FieldCartesianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldCartesianOrbit;
      class Orbit;
      class PositionAngleType;
      class OrbitType;
      class CartesianOrbit;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class FieldCartesianOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_01b80e5fc8224f27,
          mid_init$_5cd4fce038772e9b,
          mid_init$_e1cf5518a92ef935,
          mid_init$_77de91c247081784,
          mid_init$_16a0bc6b5307ef8d,
          mid_addKeplerContribution_99dd76219aa0c8c0,
          mid_getA_81520b552cb3fa26,
          mid_getADot_81520b552cb3fa26,
          mid_getE_81520b552cb3fa26,
          mid_getEDot_81520b552cb3fa26,
          mid_getEquinoctialEx_81520b552cb3fa26,
          mid_getEquinoctialExDot_81520b552cb3fa26,
          mid_getEquinoctialEy_81520b552cb3fa26,
          mid_getEquinoctialEyDot_81520b552cb3fa26,
          mid_getHx_81520b552cb3fa26,
          mid_getHxDot_81520b552cb3fa26,
          mid_getHy_81520b552cb3fa26,
          mid_getHyDot_81520b552cb3fa26,
          mid_getI_81520b552cb3fa26,
          mid_getIDot_81520b552cb3fa26,
          mid_getLE_81520b552cb3fa26,
          mid_getLEDot_81520b552cb3fa26,
          mid_getLM_81520b552cb3fa26,
          mid_getLMDot_81520b552cb3fa26,
          mid_getLv_81520b552cb3fa26,
          mid_getLvDot_81520b552cb3fa26,
          mid_getType_c7d4737d7afca612,
          mid_hasDerivatives_9ab94ac1dc23b105,
          mid_shiftedBy_9a2889aa8df030ca,
          mid_shiftedBy_c08d83dfc0ce6a43,
          mid_toOrbit_0e89356511a1622a,
          mid_toString_1c1fa1e935d6cdcf,
          mid_initPosition_ff5ac73a7b43eddd,
          mid_initPVCoordinates_243debd9cc1dd623,
          mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b,
          mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b,
          mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldCartesianOrbit(jobject obj) : ::org::orekit::orbits::FieldOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldCartesianOrbit(const FieldCartesianOrbit& obj) : ::org::orekit::orbits::FieldOrbit(obj) {}

        FieldCartesianOrbit(const ::org::orekit::orbits::FieldOrbit &);
        FieldCartesianOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::CartesianOrbit &);
        FieldCartesianOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &);
        FieldCartesianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::CalculusFieldElement &);
        FieldCartesianOrbit(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::hipparchus::CalculusFieldElement getE() const;
        ::org::hipparchus::CalculusFieldElement getEDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEx() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialExDot() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEy() const;
        ::org::hipparchus::CalculusFieldElement getEquinoctialEyDot() const;
        ::org::hipparchus::CalculusFieldElement getHx() const;
        ::org::hipparchus::CalculusFieldElement getHxDot() const;
        ::org::hipparchus::CalculusFieldElement getHy() const;
        ::org::hipparchus::CalculusFieldElement getHyDot() const;
        ::org::hipparchus::CalculusFieldElement getI() const;
        ::org::hipparchus::CalculusFieldElement getIDot() const;
        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLEDot() const;
        ::org::hipparchus::CalculusFieldElement getLM() const;
        ::org::hipparchus::CalculusFieldElement getLMDot() const;
        ::org::hipparchus::CalculusFieldElement getLv() const;
        ::org::hipparchus::CalculusFieldElement getLvDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        FieldCartesianOrbit shiftedBy(jdouble) const;
        FieldCartesianOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::CartesianOrbit toOrbit() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldCartesianOrbit);
      extern PyTypeObject *PY_TYPE(FieldCartesianOrbit);

      class t_FieldCartesianOrbit {
      public:
        PyObject_HEAD
        FieldCartesianOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldCartesianOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldCartesianOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldCartesianOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
