#ifndef org_orekit_propagation_analytical_tle_TLE_H
#define org_orekit_propagation_analytical_tle_TLE_H

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
      class ParameterDriver;
      class ParameterDriversProvider;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
      class TimeStamped;
    }
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
              mid_init$_630071dd94c59169,
              mid_init$_7f19215bbd886c04,
              mid_init$_acc151c0a4083658,
              mid_init$_ac206f7ea1ecaf2d,
              mid_equals_221e8e85cb385209,
              mid_getBStar_557b8123390d8d0c,
              mid_getBStar_b0b988f941da47d8,
              mid_getClassification_d156d1ce330f6993,
              mid_getDate_7a97f7e149e79afb,
              mid_getE_557b8123390d8d0c,
              mid_getElementNumber_412668abc8d889e9,
              mid_getEphemerisType_412668abc8d889e9,
              mid_getI_557b8123390d8d0c,
              mid_getLaunchNumber_412668abc8d889e9,
              mid_getLaunchPiece_3cffd47377eca18a,
              mid_getLaunchYear_412668abc8d889e9,
              mid_getLine1_3cffd47377eca18a,
              mid_getLine2_3cffd47377eca18a,
              mid_getMeanAnomaly_557b8123390d8d0c,
              mid_getMeanMotion_557b8123390d8d0c,
              mid_getMeanMotionFirstDerivative_557b8123390d8d0c,
              mid_getMeanMotionSecondDerivative_557b8123390d8d0c,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getPerigeeArgument_557b8123390d8d0c,
              mid_getRaan_557b8123390d8d0c,
              mid_getRevolutionNumberAtEpoch_412668abc8d889e9,
              mid_getSatelliteNumber_412668abc8d889e9,
              mid_getUtc_527ee9dde1a96470,
              mid_hashCode_412668abc8d889e9,
              mid_isFormatOK_64c9e5626fbef1d6,
              mid_stateToTLE_63563460a0b152eb,
              mid_toString_3cffd47377eca18a,
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
