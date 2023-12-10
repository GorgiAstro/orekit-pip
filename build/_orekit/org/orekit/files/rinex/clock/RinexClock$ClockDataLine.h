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
      class TimeComponents;
      class AbsoluteDate;
      class DateComponents;
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
              mid_init$_a6f1810076dcae20,
              mid_getClockAcceleration_dff5885c2c873297,
              mid_getClockAccelerationSigma_dff5885c2c873297,
              mid_getClockBias_dff5885c2c873297,
              mid_getClockBiasSigma_dff5885c2c873297,
              mid_getClockRate_dff5885c2c873297,
              mid_getClockRateSigma_dff5885c2c873297,
              mid_getDataType_0fb623818906aacc,
              mid_getEpoch_85703d13e302437e,
              mid_getEpoch_1695de8a22bfc72e,
              mid_getName_11b109bd155ca898,
              mid_getNumberOfValues_570ce0828f81a2c1,
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
