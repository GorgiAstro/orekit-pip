#ifndef org_orekit_time_UTCScale_H
#define org_orekit_time_UTCScale_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class OffsetModel;
      class DateComponents;
      class AbsoluteDate;
      class TimeComponents;
      class FieldAbsoluteDate;
      class UTCTAIOffset;
      class TimeScale;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class UTCScale : public ::java::lang::Object {
       public:
        enum {
          mid_getBaseOffsets_37528d110cff6b74,
          mid_getFirstKnownLeapSecond_85703d13e302437e,
          mid_getLastKnownLeapSecond_85703d13e302437e,
          mid_getLeap_bf1d7732f1acb697,
          mid_getLeap_2a5f05be83ff251d,
          mid_getName_11b109bd155ca898,
          mid_getUTCTAIOffsets_2afa36052df4765d,
          mid_insideLeap_db6d81809797ddaa,
          mid_insideLeap_6d572d97c8b0ec11,
          mid_minuteDuration_17efd3c2ea0eaff7,
          mid_minuteDuration_1e7a6890919ea8bb,
          mid_offsetFromTAI_bf1d7732f1acb697,
          mid_offsetFromTAI_2a5f05be83ff251d,
          mid_offsetToTAI_56358b00ba005b52,
          mid_toString_11b109bd155ca898,
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
