#ifndef org_orekit_time_UTCTAIOffset_H
#define org_orekit_time_UTCTAIOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeComponents;
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
          mid_getDate_80e11148db499dda,
          mid_getLeap_9981f74b2d109da6,
          mid_getMJD_d6ab429752e7c267,
          mid_getOffset_209f08246d708042,
          mid_getOffset_cf010978f3c5a913,
          mid_getOffset_50aa1fdea9b81950,
          mid_getValidityStart_80e11148db499dda,
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
