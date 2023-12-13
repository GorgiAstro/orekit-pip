#ifndef org_orekit_propagation_analytical_tle_TLE_H
#define org_orekit_propagation_analytical_tle_TLE_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeScale;
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
              mid_init$_a627ad9c5959309d,
              mid_init$_4f379502d89f9700,
              mid_init$_4b8b0d91b33443f2,
              mid_init$_aac91b87b74d17d7,
              mid_equals_460c5e2d9d51c6cc,
              mid_getBStar_b74f83833fdad017,
              mid_getBStar_fd347811007a6ba3,
              mid_getClassification_5e2f8fc4d7c03fbd,
              mid_getDate_c325492395d89b24,
              mid_getE_b74f83833fdad017,
              mid_getElementNumber_55546ef6a647f39b,
              mid_getEphemerisType_55546ef6a647f39b,
              mid_getI_b74f83833fdad017,
              mid_getLaunchNumber_55546ef6a647f39b,
              mid_getLaunchPiece_1c1fa1e935d6cdcf,
              mid_getLaunchYear_55546ef6a647f39b,
              mid_getLine1_1c1fa1e935d6cdcf,
              mid_getLine2_1c1fa1e935d6cdcf,
              mid_getMeanAnomaly_b74f83833fdad017,
              mid_getMeanMotion_b74f83833fdad017,
              mid_getMeanMotionFirstDerivative_b74f83833fdad017,
              mid_getMeanMotionSecondDerivative_b74f83833fdad017,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getPerigeeArgument_b74f83833fdad017,
              mid_getRaan_b74f83833fdad017,
              mid_getRevolutionNumberAtEpoch_55546ef6a647f39b,
              mid_getSatelliteNumber_55546ef6a647f39b,
              mid_getUtc_34d3bda0a8989e3e,
              mid_hashCode_55546ef6a647f39b,
              mid_isFormatOK_e7bf5b93f9300a4f,
              mid_stateToTLE_2322846e1dcb232d,
              mid_toString_1c1fa1e935d6cdcf,
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
