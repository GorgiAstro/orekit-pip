#ifndef org_orekit_propagation_analytical_tle_TLE_H
#define org_orekit_propagation_analytical_tle_TLE_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
    }
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            class TleGenerationAlgorithm;
          }
          class TLE;
        }
      }
      class SpacecraftState;
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
              mid_init$_771aee6c143cc92a,
              mid_init$_1eedf1e919bbadca,
              mid_init$_b09cbb0506b96195,
              mid_init$_9c186c78af2acae0,
              mid_equals_72faff9b05f5ed5e,
              mid_getBStar_9981f74b2d109da6,
              mid_getBStar_209f08246d708042,
              mid_getClassification_153df32fe8b51cb6,
              mid_getDate_80e11148db499dda,
              mid_getE_9981f74b2d109da6,
              mid_getElementNumber_d6ab429752e7c267,
              mid_getEphemerisType_d6ab429752e7c267,
              mid_getI_9981f74b2d109da6,
              mid_getLaunchNumber_d6ab429752e7c267,
              mid_getLaunchPiece_d2c8eb4129821f0e,
              mid_getLaunchYear_d6ab429752e7c267,
              mid_getLine1_d2c8eb4129821f0e,
              mid_getLine2_d2c8eb4129821f0e,
              mid_getMeanAnomaly_9981f74b2d109da6,
              mid_getMeanMotion_9981f74b2d109da6,
              mid_getMeanMotionFirstDerivative_9981f74b2d109da6,
              mid_getMeanMotionSecondDerivative_9981f74b2d109da6,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getPerigeeArgument_9981f74b2d109da6,
              mid_getRaan_9981f74b2d109da6,
              mid_getRevolutionNumberAtEpoch_d6ab429752e7c267,
              mid_getSatelliteNumber_d6ab429752e7c267,
              mid_getUtc_5e2cac12ab8da943,
              mid_hashCode_d6ab429752e7c267,
              mid_isFormatOK_15b8a96a7eadea1e,
              mid_stateToTLE_9dc971ea76a5b73a,
              mid_toString_d2c8eb4129821f0e,
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
