#ifndef org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H
#define org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock;
          class RinexClock$ClockDataType;
        }
      }
    }
    namespace time {
      class TimeScale;
      class TimeComponents;
      class AbsoluteDate;
      class DateComponents;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          class RinexClock$ClockDataLine : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2c24016d5e633a71,
              mid_getClockAcceleration_456d9a2f64d6b28d,
              mid_getClockAccelerationSigma_456d9a2f64d6b28d,
              mid_getClockBias_456d9a2f64d6b28d,
              mid_getClockBiasSigma_456d9a2f64d6b28d,
              mid_getClockRate_456d9a2f64d6b28d,
              mid_getClockRateSigma_456d9a2f64d6b28d,
              mid_getDataType_f43909f4ddf30814,
              mid_getEpoch_aaa854c403487cf3,
              mid_getEpoch_6ce0a26a70814ffd,
              mid_getName_0090f7797e403f43,
              mid_getNumberOfValues_f2f64475e4580546,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexClock$ClockDataLine(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexClock$ClockDataLine(const RinexClock$ClockDataLine& obj) : ::java::lang::Object(obj) {}

            RinexClock$ClockDataLine(const ::org::orekit::files::rinex::clock::RinexClock &, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType &, const ::java::lang::String &, const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            jdouble getClockAcceleration() const;
            jdouble getClockAccelerationSigma() const;
            jdouble getClockBias() const;
            jdouble getClockBiasSigma() const;
            jdouble getClockRate() const;
            jdouble getClockRateSigma() const;
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType getDataType() const;
            ::org::orekit::time::AbsoluteDate getEpoch() const;
            ::org::orekit::time::AbsoluteDate getEpoch(const ::org::orekit::time::TimeScale &) const;
            ::java::lang::String getName() const;
            jint getNumberOfValues() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          extern PyType_Def PY_TYPE_DEF(RinexClock$ClockDataLine);
          extern PyTypeObject *PY_TYPE(RinexClock$ClockDataLine);

          class t_RinexClock$ClockDataLine {
          public:
            PyObject_HEAD
            RinexClock$ClockDataLine object;
            static PyObject *wrap_Object(const RinexClock$ClockDataLine&);
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
