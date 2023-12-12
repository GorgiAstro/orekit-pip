#ifndef org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H
#define org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class TimeComponents;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock$ClockDataType;
          class RinexClock;
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
              mid_init$_0c897206077b7113,
              mid_getClockAcceleration_557b8123390d8d0c,
              mid_getClockAccelerationSigma_557b8123390d8d0c,
              mid_getClockBias_557b8123390d8d0c,
              mid_getClockBiasSigma_557b8123390d8d0c,
              mid_getClockRate_557b8123390d8d0c,
              mid_getClockRateSigma_557b8123390d8d0c,
              mid_getDataType_171db9079163a25a,
              mid_getEpoch_7a97f7e149e79afb,
              mid_getEpoch_5303d2b8df09dbef,
              mid_getName_3cffd47377eca18a,
              mid_getNumberOfValues_412668abc8d889e9,
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
