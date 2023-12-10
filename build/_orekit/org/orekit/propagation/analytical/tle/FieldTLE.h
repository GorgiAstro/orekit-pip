#ifndef org_orekit_propagation_analytical_tle_FieldTLE_H
#define org_orekit_propagation_analytical_tle_FieldTLE_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          class FieldTLE;
          class TLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class TimeScale;
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class FieldTLE : public ::java::lang::Object {
           public:
            enum {
              mid_init$_aa4622cb6d5137d4,
              mid_init$_91e14236df002fd6,
              mid_init$_77334416a19ff5a0,
              mid_init$_1d424f52c08f21e2,
              mid_equals_229c87223f486349,
              mid_getBStar_456d9a2f64d6b28d,
              mid_getClassification_29e026b9d068f1c7,
              mid_getDate_09b0a926600dfc14,
              mid_getE_e6d4d3215c30992a,
              mid_getElementNumber_f2f64475e4580546,
              mid_getEphemerisType_f2f64475e4580546,
              mid_getI_e6d4d3215c30992a,
              mid_getLaunchNumber_f2f64475e4580546,
              mid_getLaunchPiece_0090f7797e403f43,
              mid_getLaunchYear_f2f64475e4580546,
              mid_getLine1_0090f7797e403f43,
              mid_getLine2_0090f7797e403f43,
              mid_getMeanAnomaly_e6d4d3215c30992a,
              mid_getMeanMotion_e6d4d3215c30992a,
              mid_getMeanMotionFirstDerivative_e6d4d3215c30992a,
              mid_getMeanMotionSecondDerivative_e6d4d3215c30992a,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getPerigeeArgument_e6d4d3215c30992a,
              mid_getRaan_e6d4d3215c30992a,
              mid_getRevolutionNumberAtEpoch_f2f64475e4580546,
              mid_getSatelliteNumber_f2f64475e4580546,
              mid_hashCode_f2f64475e4580546,
              mid_isFormatOK_5e4279f3952110c4,
              mid_stateToTLE_b3cd93b70cce68fe,
              mid_toString_0090f7797e403f43,
              mid_toTLE_32ddbfc0b67883b1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTLE(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldTLE(const FieldTLE& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *B_STAR;
            static jint DEFAULT;
            static jint SDP4;
            static jint SDP8;
            static jint SGP;
            static jint SGP4;
            static jint SGP8;

            FieldTLE(const ::org::hipparchus::Field &, const ::java::lang::String &, const ::java::lang::String &);
            FieldTLE(const ::org::hipparchus::Field &, const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::time::TimeScale &);
            FieldTLE(jint, jchar, jint, jint, const ::java::lang::String &, jint, jint, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint, jdouble);
            FieldTLE(jint, jchar, jint, jint, const ::java::lang::String &, jint, jint, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint, jdouble, const ::org::orekit::time::TimeScale &);

            jboolean equals(const ::java::lang::Object &) const;
            jdouble getBStar() const;
            jchar getClassification() const;
            ::org::orekit::time::FieldAbsoluteDate getDate() const;
            ::org::hipparchus::CalculusFieldElement getE() const;
            jint getElementNumber() const;
            jint getEphemerisType() const;
            ::org::hipparchus::CalculusFieldElement getI() const;
            jint getLaunchNumber() const;
            ::java::lang::String getLaunchPiece() const;
            jint getLaunchYear() const;
            ::java::lang::String getLine1() const;
            ::java::lang::String getLine2() const;
            ::org::hipparchus::CalculusFieldElement getMeanAnomaly() const;
            ::org::hipparchus::CalculusFieldElement getMeanMotion() const;
            ::org::hipparchus::CalculusFieldElement getMeanMotionFirstDerivative() const;
            ::org::hipparchus::CalculusFieldElement getMeanMotionSecondDerivative() const;
            ::java::util::List getParametersDrivers() const;
            ::org::hipparchus::CalculusFieldElement getPerigeeArgument() const;
            ::org::hipparchus::CalculusFieldElement getRaan() const;
            jint getRevolutionNumberAtEpoch() const;
            jint getSatelliteNumber() const;
            jint hashCode() const;
            static jboolean isFormatOK(const ::java::lang::String &, const ::java::lang::String &);
            static FieldTLE stateToTLE(const ::org::orekit::propagation::FieldSpacecraftState &, const FieldTLE &, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm &);
            ::java::lang::String toString() const;
            ::org::orekit::propagation::analytical::tle::TLE toTLE() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(FieldTLE);
          extern PyTypeObject *PY_TYPE(FieldTLE);

          class t_FieldTLE {
          public:
            PyObject_HEAD
            FieldTLE object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldTLE *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldTLE&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldTLE&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
