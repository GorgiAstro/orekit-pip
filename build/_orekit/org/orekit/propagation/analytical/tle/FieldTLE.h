#ifndef org_orekit_propagation_analytical_tle_FieldTLE_H
#define org_orekit_propagation_analytical_tle_FieldTLE_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
      class TimeScale;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
          class FieldTLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      class FieldSpacecraftState;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class FieldTLE : public ::java::lang::Object {
           public:
            enum {
              mid_init$_685931cb45816160,
              mid_init$_eb74d3b04b631428,
              mid_init$_b516d88ee4c59bdb,
              mid_init$_aef54e382ffb5bb5,
              mid_equals_460c5e2d9d51c6cc,
              mid_getBStar_b74f83833fdad017,
              mid_getClassification_5e2f8fc4d7c03fbd,
              mid_getDate_fa23a4301b9c83e7,
              mid_getE_81520b552cb3fa26,
              mid_getElementNumber_55546ef6a647f39b,
              mid_getEphemerisType_55546ef6a647f39b,
              mid_getI_81520b552cb3fa26,
              mid_getLaunchNumber_55546ef6a647f39b,
              mid_getLaunchPiece_1c1fa1e935d6cdcf,
              mid_getLaunchYear_55546ef6a647f39b,
              mid_getLine1_1c1fa1e935d6cdcf,
              mid_getLine2_1c1fa1e935d6cdcf,
              mid_getMeanAnomaly_81520b552cb3fa26,
              mid_getMeanMotion_81520b552cb3fa26,
              mid_getMeanMotionFirstDerivative_81520b552cb3fa26,
              mid_getMeanMotionSecondDerivative_81520b552cb3fa26,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getPerigeeArgument_81520b552cb3fa26,
              mid_getRaan_81520b552cb3fa26,
              mid_getRevolutionNumberAtEpoch_55546ef6a647f39b,
              mid_getSatelliteNumber_55546ef6a647f39b,
              mid_hashCode_55546ef6a647f39b,
              mid_isFormatOK_e7bf5b93f9300a4f,
              mid_stateToTLE_12b4ee9532b8e08d,
              mid_toString_1c1fa1e935d6cdcf,
              mid_toTLE_1c01e307dcced049,
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
