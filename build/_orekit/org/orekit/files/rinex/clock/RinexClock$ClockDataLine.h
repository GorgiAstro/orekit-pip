#ifndef org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H
#define org_orekit_files_rinex_clock_RinexClock$ClockDataLine_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock$ClockDataType;
          class RinexClock;
        }
      }
    }
    namespace time {
      class DateComponents;
      class AbsoluteDate;
      class TimeComponents;
      class TimeScale;
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
              mid_init$_bfbb1c84dbf9de42,
              mid_getClockAcceleration_b74f83833fdad017,
              mid_getClockAccelerationSigma_b74f83833fdad017,
              mid_getClockBias_b74f83833fdad017,
              mid_getClockBiasSigma_b74f83833fdad017,
              mid_getClockRate_b74f83833fdad017,
              mid_getClockRateSigma_b74f83833fdad017,
              mid_getDataType_2a860d9c1b5ba9ff,
              mid_getEpoch_c325492395d89b24,
              mid_getEpoch_bffa934891f29b33,
              mid_getName_1c1fa1e935d6cdcf,
              mid_getNumberOfValues_55546ef6a647f39b,
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
