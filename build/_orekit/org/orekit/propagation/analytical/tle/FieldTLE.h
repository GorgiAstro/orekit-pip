#ifndef org_orekit_propagation_analytical_tle_FieldTLE_H
#define org_orekit_propagation_analytical_tle_FieldTLE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      namespace analytical {
        namespace tle {
          namespace generation {
            class TleGenerationAlgorithm;
          }
          class FieldTLE;
          class TLE;
        }
      }
    }
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class TimeScale;
    }
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
              mid_init$_964fa3751c176051,
              mid_init$_f6ecc8aad0bdcb24,
              mid_init$_5a5a5ec4c232c23e,
              mid_init$_9047e07f6401a189,
              mid_equals_65c7d273e80d497a,
              mid_getBStar_dff5885c2c873297,
              mid_getClassification_7818f5b58320cd1f,
              mid_getDate_51da00d5b8a3b5df,
              mid_getE_eba8e72a22c984ac,
              mid_getElementNumber_570ce0828f81a2c1,
              mid_getEphemerisType_570ce0828f81a2c1,
              mid_getI_eba8e72a22c984ac,
              mid_getLaunchNumber_570ce0828f81a2c1,
              mid_getLaunchPiece_11b109bd155ca898,
              mid_getLaunchYear_570ce0828f81a2c1,
              mid_getLine1_11b109bd155ca898,
              mid_getLine2_11b109bd155ca898,
              mid_getMeanAnomaly_eba8e72a22c984ac,
              mid_getMeanMotion_eba8e72a22c984ac,
              mid_getMeanMotionFirstDerivative_eba8e72a22c984ac,
              mid_getMeanMotionSecondDerivative_eba8e72a22c984ac,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getPerigeeArgument_eba8e72a22c984ac,
              mid_getRaan_eba8e72a22c984ac,
              mid_getRevolutionNumberAtEpoch_570ce0828f81a2c1,
              mid_getSatelliteNumber_570ce0828f81a2c1,
              mid_hashCode_570ce0828f81a2c1,
              mid_isFormatOK_9365555b1308b94c,
              mid_stateToTLE_1e78a1437043d7f8,
              mid_toString_11b109bd155ca898,
              mid_toTLE_e993eceec98c738b,
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
