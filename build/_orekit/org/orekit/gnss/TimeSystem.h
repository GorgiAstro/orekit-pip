#ifndef org_orekit_gnss_TimeSystem_H
#define org_orekit_gnss_TimeSystem_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace time {
      class TimeScales;
      class TimeScale;
    }
    namespace gnss {
      class TimeSystem;
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
    namespace gnss {

      class TimeSystem : public ::java::lang::Enum {
       public:
        enum {
          mid_getKey_1c1fa1e935d6cdcf,
          mid_getTimeScale_d429fb7b5ff8192c,
          mid_parseOneLetterCode_da16e21e6c32114e,
          mid_parseTimeSystem_da16e21e6c32114e,
          mid_parseTwoLettersCode_da16e21e6c32114e,
          mid_valueOf_da16e21e6c32114e,
          mid_values_e10ea8986e8f1ce2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeSystem(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeSystem(const TimeSystem& obj) : ::java::lang::Enum(obj) {}

        static TimeSystem *BEIDOU;
        static TimeSystem *GALILEO;
        static TimeSystem *GLONASS;
        static TimeSystem *GMT;
        static TimeSystem *GPS;
        static TimeSystem *IRNSS;
        static TimeSystem *QZSS;
        static TimeSystem *SBAS;
        static TimeSystem *TAI;
        static TimeSystem *UNKNOWN;
        static TimeSystem *UTC;

        ::java::lang::String getKey() const;
        ::org::orekit::time::TimeScale getTimeScale(const ::org::orekit::time::TimeScales &) const;
        static TimeSystem parseOneLetterCode(const ::java::lang::String &);
        static TimeSystem parseTimeSystem(const ::java::lang::String &);
        static TimeSystem parseTwoLettersCode(const ::java::lang::String &);
        static TimeSystem valueOf(const ::java::lang::String &);
        static JArray< TimeSystem > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(TimeSystem);
      extern PyTypeObject *PY_TYPE(TimeSystem);

      class t_TimeSystem {
      public:
        PyObject_HEAD
        TimeSystem object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeSystem *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeSystem&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeSystem&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
