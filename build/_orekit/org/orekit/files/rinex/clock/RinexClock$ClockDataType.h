#ifndef org_orekit_files_rinex_clock_RinexClock$ClockDataType_H
#define org_orekit_files_rinex_clock_RinexClock$ClockDataType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock$ClockDataType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          class RinexClock$ClockDataType : public ::java::lang::Enum {
           public:
            enum {
              mid_getKey_d2c8eb4129821f0e,
              mid_parseClockDataType_9d95e2a9725042bc,
              mid_valueOf_9d95e2a9725042bc,
              mid_values_14d5ed9e611550f0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexClock$ClockDataType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexClock$ClockDataType(const RinexClock$ClockDataType& obj) : ::java::lang::Enum(obj) {}

            static RinexClock$ClockDataType *AR;
            static RinexClock$ClockDataType *AS;
            static RinexClock$ClockDataType *CR;
            static RinexClock$ClockDataType *DR;
            static RinexClock$ClockDataType *MS;

            ::java::lang::String getKey() const;
            static RinexClock$ClockDataType parseClockDataType(const ::java::lang::String &);
            static RinexClock$ClockDataType valueOf(const ::java::lang::String &);
            static JArray< RinexClock$ClockDataType > values();
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
          extern PyType_Def PY_TYPE_DEF(RinexClock$ClockDataType);
          extern PyTypeObject *PY_TYPE(RinexClock$ClockDataType);

          class t_RinexClock$ClockDataType {
          public:
            PyObject_HEAD
            RinexClock$ClockDataType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RinexClock$ClockDataType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RinexClock$ClockDataType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RinexClock$ClockDataType&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
