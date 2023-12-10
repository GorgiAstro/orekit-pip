#ifndef org_orekit_propagation_analytical_tle_TLE_H
#define org_orekit_propagation_analytical_tle_TLE_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
      class ParameterDriver;
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
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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

          class TLE : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6a2001eff0605f71,
              mid_init$_6de69b758d25049e,
              mid_init$_26f3d55884b29b3a,
              mid_init$_ddb6b020cef25251,
              mid_equals_65c7d273e80d497a,
              mid_getBStar_dff5885c2c873297,
              mid_getBStar_bf1d7732f1acb697,
              mid_getClassification_7818f5b58320cd1f,
              mid_getDate_85703d13e302437e,
              mid_getE_dff5885c2c873297,
              mid_getElementNumber_570ce0828f81a2c1,
              mid_getEphemerisType_570ce0828f81a2c1,
              mid_getI_dff5885c2c873297,
              mid_getLaunchNumber_570ce0828f81a2c1,
              mid_getLaunchPiece_11b109bd155ca898,
              mid_getLaunchYear_570ce0828f81a2c1,
              mid_getLine1_11b109bd155ca898,
              mid_getLine2_11b109bd155ca898,
              mid_getMeanAnomaly_dff5885c2c873297,
              mid_getMeanMotion_dff5885c2c873297,
              mid_getMeanMotionFirstDerivative_dff5885c2c873297,
              mid_getMeanMotionSecondDerivative_dff5885c2c873297,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getPerigeeArgument_dff5885c2c873297,
              mid_getRaan_dff5885c2c873297,
              mid_getRevolutionNumberAtEpoch_570ce0828f81a2c1,
              mid_getSatelliteNumber_570ce0828f81a2c1,
              mid_getUtc_c39031284193adbe,
              mid_hashCode_570ce0828f81a2c1,
              mid_isFormatOK_9365555b1308b94c,
              mid_stateToTLE_343a1afa95f9e6f7,
              mid_toString_11b109bd155ca898,
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
