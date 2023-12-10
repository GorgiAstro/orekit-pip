#ifndef org_orekit_time_UTCScale_H
#define org_orekit_time_UTCScale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class OffsetModel;
      class TimeComponents;
      class UTCTAIOffset;
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class DateComponents;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class UTCScale : public ::java::lang::Object {
       public:
        enum {
          mid_getBaseOffsets_cfcfd130f9013e3e,
          mid_getFirstKnownLeapSecond_aaa854c403487cf3,
          mid_getLastKnownLeapSecond_aaa854c403487cf3,
          mid_getLeap_e912d21057defe63,
          mid_getLeap_7bc0fd76ee915b72,
          mid_getName_0090f7797e403f43,
          mid_getUTCTAIOffsets_a6156df500549a58,
          mid_insideLeap_ee2067c5768b6768,
          mid_insideLeap_5997cf1e9de74766,
          mid_minuteDuration_982c9f163875e1c9,
          mid_minuteDuration_90583a249f651dc5,
          mid_offsetFromTAI_e912d21057defe63,
          mid_offsetFromTAI_7bc0fd76ee915b72,
          mid_offsetToTAI_ceb6ee9e1c4bbdb1,
          mid_toString_0090f7797e403f43,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UTCScale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTCScale(const UTCScale& obj) : ::java::lang::Object(obj) {}

        ::java::util::Collection getBaseOffsets() const;
        ::org::orekit::time::AbsoluteDate getFirstKnownLeapSecond() const;
        ::org::orekit::time::AbsoluteDate getLastKnownLeapSecond() const;
        jdouble getLeap(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getLeap(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::java::lang::String getName() const;
        ::java::util::List getUTCTAIOffsets() const;
        jboolean insideLeap(const ::org::orekit::time::AbsoluteDate &) const;
        jboolean insideLeap(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jint minuteDuration(const ::org::orekit::time::AbsoluteDate &) const;
        jint minuteDuration(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble offsetFromTAI(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble offsetToTAI(const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeComponents &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(UTCScale);
      extern PyTypeObject *PY_TYPE(UTCScale);

      class t_UTCScale {
      public:
        PyObject_HEAD
        UTCScale object;
        static PyObject *wrap_Object(const UTCScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
