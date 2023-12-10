#ifndef org_orekit_time_UTCTAIOffset_H
#define org_orekit_time_UTCTAIOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class DateComponents;
      class AbsoluteDate;
      class TimeComponents;
      class TimeStamped;
      class FieldAbsoluteDate;
    }
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
          mid_getDate_85703d13e302437e,
          mid_getLeap_dff5885c2c873297,
          mid_getMJD_570ce0828f81a2c1,
          mid_getOffset_bf1d7732f1acb697,
          mid_getOffset_2a5f05be83ff251d,
          mid_getOffset_56358b00ba005b52,
          mid_getValidityStart_85703d13e302437e,
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
