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
      class FieldAbsoluteDate;
      class FieldTimeStamped;
      class TimeScale;
    }
    namespace utils {
      class ParameterDriver;
      class ParameterDriversProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
              mid_init$_a2c7449b381f2df3,
              mid_init$_7828a34495b14e73,
              mid_init$_b950babc90b9c7ed,
              mid_init$_6e630f0bbf68a980,
              mid_equals_221e8e85cb385209,
              mid_getBStar_557b8123390d8d0c,
              mid_getClassification_d156d1ce330f6993,
              mid_getDate_f1fe4daf77c66560,
              mid_getE_613c8f46c659f636,
              mid_getElementNumber_412668abc8d889e9,
              mid_getEphemerisType_412668abc8d889e9,
              mid_getI_613c8f46c659f636,
              mid_getLaunchNumber_412668abc8d889e9,
              mid_getLaunchPiece_3cffd47377eca18a,
              mid_getLaunchYear_412668abc8d889e9,
              mid_getLine1_3cffd47377eca18a,
              mid_getLine2_3cffd47377eca18a,
              mid_getMeanAnomaly_613c8f46c659f636,
              mid_getMeanMotion_613c8f46c659f636,
              mid_getMeanMotionFirstDerivative_613c8f46c659f636,
              mid_getMeanMotionSecondDerivative_613c8f46c659f636,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getPerigeeArgument_613c8f46c659f636,
              mid_getRaan_613c8f46c659f636,
              mid_getRevolutionNumberAtEpoch_412668abc8d889e9,
              mid_getSatelliteNumber_412668abc8d889e9,
              mid_hashCode_412668abc8d889e9,
              mid_isFormatOK_64c9e5626fbef1d6,
              mid_stateToTLE_18e49a74c9d4ab3a,
              mid_toString_3cffd47377eca18a,
              mid_toTLE_67f978062a0fd0e7,
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
