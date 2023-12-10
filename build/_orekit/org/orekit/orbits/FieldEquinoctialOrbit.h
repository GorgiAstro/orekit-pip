#ifndef org_orekit_orbits_FieldEquinoctialOrbit_H
#define org_orekit_orbits_FieldEquinoctialOrbit_H

#include "org/orekit/orbits/FieldOrbit.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace orbits {
      class EquinoctialOrbit;
      class PositionAngleBased;
      class FieldEquinoctialOrbit;
      class Orbit;
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
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

      class FieldEquinoctialOrbit : public ::org::orekit::orbits::FieldOrbit {
       public:
        enum {
          mid_init$_b6fb4d19a77f9888,
          mid_init$_5a1cf5460128e0f4,
          mid_init$_3630ab60f65fc257,
          mid_init$_c46027b2f093f684,
          mid_init$_cca8d8314ace10b6,
          mid_init$_c5c88eb1c5b50a4d,
          mid_init$_de4891ed91bd58e7,
          mid_addKeplerContribution_72af0bc419feab2f,
          mid_eccentricToMean_f56548599899c286,
          mid_eccentricToTrue_f56548599899c286,
          mid_getA_e6d4d3215c30992a,
          mid_getADot_e6d4d3215c30992a,
          mid_getCachedPositionAngleType_2571e8fe1cede425,
          mid_getE_e6d4d3215c30992a,
          mid_getEDot_e6d4d3215c30992a,
          mid_getEquinoctialEx_e6d4d3215c30992a,
          mid_getEquinoctialExDot_e6d4d3215c30992a,
          mid_getEquinoctialEy_e6d4d3215c30992a,
          mid_getEquinoctialEyDot_e6d4d3215c30992a,
          mid_getHx_e6d4d3215c30992a,
          mid_getHxDot_e6d4d3215c30992a,
          mid_getHy_e6d4d3215c30992a,
          mid_getHyDot_e6d4d3215c30992a,
          mid_getI_e6d4d3215c30992a,
          mid_getIDot_e6d4d3215c30992a,
          mid_getL_d275813d7aa8ed95,
          mid_getLDot_d275813d7aa8ed95,
          mid_getLE_e6d4d3215c30992a,
          mid_getLEDot_e6d4d3215c30992a,
          mid_getLM_e6d4d3215c30992a,
          mid_getLMDot_e6d4d3215c30992a,
          mid_getLv_e6d4d3215c30992a,
          mid_getLvDot_e6d4d3215c30992a,
          mid_getType_63ea5cd020bf7bf1,
          mid_hasDerivatives_e470b6d9e0d979db,
          mid_hasRates_e470b6d9e0d979db,
          mid_meanToEccentric_f56548599899c286,
          mid_removeRates_24c45ad619cf59cb,
          mid_shiftedBy_058acc7969f782b9,
          mid_shiftedBy_2de2a35b833cec1a,
          mid_toOrbit_fad2038b7b755f73,
          mid_toString_0090f7797e403f43,
          mid_trueToEccentric_f56548599899c286,
          mid_initPosition_5791f80683b5227e,
          mid_initPVCoordinates_26447a781aafdb9e,
          mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903,
          mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903,
          mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldEquinoctialOrbit(jobject obj) : ::org::orekit::orbits::FieldOrbit(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldEquinoctialOrbit(const FieldEquinoctialOrbit& obj) : ::org::orekit::orbits::FieldOrbit(obj) {}

        FieldEquinoctialOrbit(const ::org::orekit::orbits::FieldOrbit &);
        FieldEquinoctialOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::EquinoctialOrbit &);
        FieldEquinoctialOrbit(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &);
        FieldEquinoctialOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit(const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::PositionAngleType &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &);

        void addKeplerContribution(const ::org::orekit::orbits::PositionAngleType &, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
        static ::org::hipparchus::CalculusFieldElement eccentricToMean(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement eccentricToTrue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getADot() const;
        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
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
        ::org::hipparchus::CalculusFieldElement getL(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::hipparchus::CalculusFieldElement getLDot(const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::hipparchus::CalculusFieldElement getLE() const;
        ::org::hipparchus::CalculusFieldElement getLEDot() const;
        ::org::hipparchus::CalculusFieldElement getLM() const;
        ::org::hipparchus::CalculusFieldElement getLMDot() const;
        ::org::hipparchus::CalculusFieldElement getLv() const;
        ::org::hipparchus::CalculusFieldElement getLvDot() const;
        ::org::orekit::orbits::OrbitType getType() const;
        jboolean hasDerivatives() const;
        jboolean hasRates() const;
        static ::org::hipparchus::CalculusFieldElement meanToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        FieldEquinoctialOrbit removeRates() const;
        FieldEquinoctialOrbit shiftedBy(jdouble) const;
        FieldEquinoctialOrbit shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::orbits::EquinoctialOrbit toOrbit() const;
        ::java::lang::String toString() const;
        static ::org::hipparchus::CalculusFieldElement trueToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldEquinoctialOrbit);
      extern PyTypeObject *PY_TYPE(FieldEquinoctialOrbit);

      class t_FieldEquinoctialOrbit {
      public:
        PyObject_HEAD
        FieldEquinoctialOrbit object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldEquinoctialOrbit *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldEquinoctialOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldEquinoctialOrbit&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
