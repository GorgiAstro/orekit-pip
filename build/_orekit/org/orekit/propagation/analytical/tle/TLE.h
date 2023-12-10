#ifndef org_orekit_propagation_analytical_tle_TLE_H
#define org_orekit_propagation_analytical_tle_TLE_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeScale;
      class AbsoluteDate;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
          namespace generation {
            class TleGenerationAlgorithm;
          }
        }
      }
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
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

          class TLE : public ::java::lang::Object {
           public:
            enum {
              mid_init$_96073c87872b7a97,
              mid_init$_d189310f42422232,
              mid_init$_fec22c4b07c3c8c9,
              mid_init$_139971ec8507b5f6,
              mid_equals_229c87223f486349,
              mid_getBStar_456d9a2f64d6b28d,
              mid_getBStar_e912d21057defe63,
              mid_getClassification_29e026b9d068f1c7,
              mid_getDate_aaa854c403487cf3,
              mid_getE_456d9a2f64d6b28d,
              mid_getElementNumber_f2f64475e4580546,
              mid_getEphemerisType_f2f64475e4580546,
              mid_getI_456d9a2f64d6b28d,
              mid_getLaunchNumber_f2f64475e4580546,
              mid_getLaunchPiece_0090f7797e403f43,
              mid_getLaunchYear_f2f64475e4580546,
              mid_getLine1_0090f7797e403f43,
              mid_getLine2_0090f7797e403f43,
              mid_getMeanAnomaly_456d9a2f64d6b28d,
              mid_getMeanMotion_456d9a2f64d6b28d,
              mid_getMeanMotionFirstDerivative_456d9a2f64d6b28d,
              mid_getMeanMotionSecondDerivative_456d9a2f64d6b28d,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getPerigeeArgument_456d9a2f64d6b28d,
              mid_getRaan_456d9a2f64d6b28d,
              mid_getRevolutionNumberAtEpoch_f2f64475e4580546,
              mid_getSatelliteNumber_f2f64475e4580546,
              mid_getUtc_63ac10047983bd43,
              mid_hashCode_f2f64475e4580546,
              mid_isFormatOK_5e4279f3952110c4,
              mid_stateToTLE_fbd75895746d88af,
              mid_toString_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TLE(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TLE(const TLE& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *B_STAR;
            static jint DEFAULT;
            static jint SDP4;
            static jint SDP8;
            static jint SGP;
            static jint SGP4;
            static jint SGP8;

            TLE(const ::java::lang::String &, const ::java::lang::String &);
            TLE(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::time::TimeScale &);
            TLE(jint, jchar, jint, jint, const ::java::lang::String &, jint, jint, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jdouble);
            TLE(jint, jchar, jint, jint, const ::java::lang::String &, jint, jint, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jdouble, const ::org::orekit::time::TimeScale &);

            jboolean equals(const ::java::lang::Object &) const;
            jdouble getBStar() const;
            jdouble getBStar(const ::org::orekit::time::AbsoluteDate &) const;
            jchar getClassification() const;
            ::org::orekit::time::AbsoluteDate getDate() const;
            jdouble getE() const;
            jint getElementNumber() const;
            jint getEphemerisType() const;
            jdouble getI() const;
            jint getLaunchNumber() const;
            ::java::lang::String getLaunchPiece() const;
            jint getLaunchYear() const;
            ::java::lang::String getLine1() const;
            ::java::lang::String getLine2() const;
            jdouble getMeanAnomaly() const;
            jdouble getMeanMotion() const;
            jdouble getMeanMotionFirstDerivative() const;
            jdouble getMeanMotionSecondDerivative() const;
            ::java::util::List getParametersDrivers() const;
            jdouble getPerigeeArgument() const;
            jdouble getRaan() const;
            jint getRevolutionNumberAtEpoch() const;
            jint getSatelliteNumber() const;
            ::org::orekit::time::TimeScale getUtc() const;
            jint hashCode() const;
            static jboolean isFormatOK(const ::java::lang::String &, const ::java::lang::String &);
            static TLE stateToTLE(const ::org::orekit::propagation::SpacecraftState &, const TLE &, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm &);
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(TLE);
          extern PyTypeObject *PY_TYPE(TLE);

          class t_TLE {
          public:
            PyObject_HEAD
            TLE object;
            static PyObject *wrap_Object(const TLE&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
