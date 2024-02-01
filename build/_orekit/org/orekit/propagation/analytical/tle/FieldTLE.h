#ifndef org_orekit_propagation_analytical_tle_FieldTLE_H
#define org_orekit_propagation_analytical_tle_FieldTLE_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
    }
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class TimeScale;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            class TleGenerationAlgorithm;
          }
          class FieldTLE;
          class TLE;
        }
      }
      class FieldSpacecraftState;
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
              mid_init$_7f0dc0eafede08bd,
              mid_init$_f7a2e0cb9bc2a0b8,
              mid_init$_994ea1ea83cebd47,
              mid_init$_c802499a6e014075,
              mid_equals_72faff9b05f5ed5e,
              mid_getBStar_9981f74b2d109da6,
              mid_getClassification_153df32fe8b51cb6,
              mid_getDate_1fea28374011eef5,
              mid_getE_08d37e3f77b7239d,
              mid_getElementNumber_d6ab429752e7c267,
              mid_getEphemerisType_d6ab429752e7c267,
              mid_getI_08d37e3f77b7239d,
              mid_getLaunchNumber_d6ab429752e7c267,
              mid_getLaunchPiece_d2c8eb4129821f0e,
              mid_getLaunchYear_d6ab429752e7c267,
              mid_getLine1_d2c8eb4129821f0e,
              mid_getLine2_d2c8eb4129821f0e,
              mid_getMeanAnomaly_08d37e3f77b7239d,
              mid_getMeanMotion_08d37e3f77b7239d,
              mid_getMeanMotionFirstDerivative_08d37e3f77b7239d,
              mid_getMeanMotionSecondDerivative_08d37e3f77b7239d,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getPerigeeArgument_08d37e3f77b7239d,
              mid_getRaan_08d37e3f77b7239d,
              mid_getRevolutionNumberAtEpoch_d6ab429752e7c267,
              mid_getSatelliteNumber_d6ab429752e7c267,
              mid_hashCode_d6ab429752e7c267,
              mid_isFormatOK_15b8a96a7eadea1e,
              mid_stateToTLE_4da10b2505db87df,
              mid_toString_d2c8eb4129821f0e,
              mid_toTLE_dacb215ad36dee42,
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
