#ifndef org_orekit_time_UTCTAIOffset_H
#define org_orekit_time_UTCTAIOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class FieldAbsoluteDate;
      class TimeComponents;
      class AbsoluteDate;
      class TimeStamped;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class UTCTAIOffset : public ::java::lang::Object {
       public:
        enum {
          mid_getDate_7a97f7e149e79afb,
          mid_getLeap_557b8123390d8d0c,
          mid_getMJD_412668abc8d889e9,
          mid_getOffset_b0b988f941da47d8,
          mid_getOffset_b884068a2c99f6ca,
          mid_getOffset_e4171ab80e571373,
          mid_getValidityStart_7a97f7e149e79afb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UTCTAIOffset(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTCTAIOffset(const UTCTAIOffset& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getLeap() const;
        jint getMJD() const;
        jdouble getOffset(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getOffset(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getOffset(const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &) const;
        ::org::orekit::time::AbsoluteDate getValidityStart() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(UTCTAIOffset);
      extern PyTypeObject *PY_TYPE(UTCTAIOffset);

      class t_UTCTAIOffset {
      public:
        PyObject_HEAD
        UTCTAIOffset object;
        static PyObject *wrap_Object(const UTCTAIOffset&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
