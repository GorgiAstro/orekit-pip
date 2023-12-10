#ifndef org_orekit_time_TimeScale_H
#define org_orekit_time_TimeScale_H

#include "java/io/Serializable.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class TimeComponents;
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class DateComponents;
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
    namespace time {

      class TimeScale : public ::java::io::Serializable {
       public:
        enum {
          mid_getLeap_e912d21057defe63,
          mid_getLeap_7bc0fd76ee915b72,
          mid_getName_0090f7797e403f43,
          mid_insideLeap_ee2067c5768b6768,
          mid_insideLeap_5997cf1e9de74766,
          mid_minuteDuration_982c9f163875e1c9,
          mid_minuteDuration_90583a249f651dc5,
          mid_offsetFromTAI_e912d21057defe63,
          mid_offsetFromTAI_7bc0fd76ee915b72,
          mid_offsetToTAI_ceb6ee9e1c4bbdb1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeScale(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeScale(const TimeScale& obj) : ::java::io::Serializable(obj) {}

        jdouble getLeap(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getLeap(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::java::lang::String getName() const;
        jboolean insideLeap(const ::org::orekit::time::AbsoluteDate &) const;
        jboolean insideLeap(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jint minuteDuration(const ::org::orekit::time::AbsoluteDate &) const;
        jint minuteDuration(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble offsetFromTAI(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble offsetToTAI(const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeScale);
      extern PyTypeObject *PY_TYPE(TimeScale);

      class t_TimeScale {
      public:
        PyObject_HEAD
        TimeScale object;
        static PyObject *wrap_Object(const TimeScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
