#ifndef org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H
#define org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeComponents;
      class DateComponents;
      class TimeScale;
    }
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock;
          class RinexClock$ClockDataType;
        }
      }
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
              mid_init$_62e94e4dcbafc902,
              mid_getClockAcceleration_9981f74b2d109da6,
              mid_getClockAccelerationSigma_9981f74b2d109da6,
              mid_getClockBias_9981f74b2d109da6,
              mid_getClockBiasSigma_9981f74b2d109da6,
              mid_getClockRate_9981f74b2d109da6,
              mid_getClockRateSigma_9981f74b2d109da6,
              mid_getDataType_2b7e271a1085d20c,
              mid_getEpoch_80e11148db499dda,
              mid_getEpoch_d97c2c83a90981c7,
              mid_getName_d2c8eb4129821f0e,
              mid_getNumberOfValues_d6ab429752e7c267,
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
