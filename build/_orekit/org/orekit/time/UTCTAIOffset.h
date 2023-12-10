#ifndef org_orekit_time_UTCTAIOffset_H
#define org_orekit_time_UTCTAIOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeComponents;
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class DateComponents;
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
          mid_getDate_aaa854c403487cf3,
          mid_getLeap_456d9a2f64d6b28d,
          mid_getMJD_f2f64475e4580546,
          mid_getOffset_e912d21057defe63,
          mid_getOffset_7bc0fd76ee915b72,
          mid_getOffset_ceb6ee9e1c4bbdb1,
          mid_getValidityStart_aaa854c403487cf3,
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
