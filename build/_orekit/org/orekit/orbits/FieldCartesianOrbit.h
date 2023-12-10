#ifndef org_orekit_orbits_FieldCartesianOrbit_H
#define org_orekit_orbits_FieldCartesianOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class CartesianOrbit;
      class Orbit;
      class FieldCartesianOrbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
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
          mid_init$_1cbcb2601e7d1334,
          mid_init$_684f6c773ca44aa7,
          mid_init$_726dc2bf140240a1,
          mid_init$_a1d831f131e24bc0,
          mid_init$_960ad4c09c9f5686,
          mid_addKeplerContribution_4e49f6ed48591ef2,
          mid_getA_eba8e72a22c984ac,
          mid_getADot_eba8e72a22c984ac,
          mid_getE_eba8e72a22c984ac,
          mid_getEDot_eba8e72a22c984ac,
          mid_getEquinoctialEx_eba8e72a22c984ac,
          mid_getEquinoctialExDot_eba8e72a22c984ac,
          mid_getEquinoctialEy_eba8e72a22c984ac,
          mid_getEquinoctialEyDot_eba8e72a22c984ac,
          mid_getHx_eba8e72a22c984ac,
          mid_getHxDot_eba8e72a22c984ac,
          mid_getHy_eba8e72a22c984ac,
          mid_getHyDot_eba8e72a22c984ac,
          mid_getI_eba8e72a22c984ac,
          mid_getIDot_eba8e72a22c984ac,
          mid_getLE_eba8e72a22c984ac,
          mid_getLEDot_eba8e72a22c984ac,
          mid_getLM_eba8e72a22c984ac,
          mid_getLMDot_eba8e72a22c984ac,
          mid_getLv_eba8e72a22c984ac,
          mid_getLvDot_eba8e72a22c984ac,
          mid_getType_e29360d311dc0e20,
          mid_hasDerivatives_b108b35ef48e27bd,
          mid_shiftedBy_18c8876951dbdfac,
          mid_shiftedBy_c17c53ec244d21e2,
          mid_toOrbit_e5effdf9a992f1f2,
          mid_toString_11b109bd155ca898,
          mid_initPVCoordinates_f89522ff77904397,
          mid_initPosition_716f50c86ffc8da7,
          mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d,
          mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d,
          mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d,
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
