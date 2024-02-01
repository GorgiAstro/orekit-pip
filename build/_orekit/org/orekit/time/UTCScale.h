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
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeComponents;
      class DateComponents;
      class UTCTAIOffset;
      class TimeScale;
      class OffsetModel;
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
          mid_getBaseOffsets_3bfef5c77ceb081a,
          mid_getFirstKnownLeapSecond_80e11148db499dda,
          mid_getLastKnownLeapSecond_80e11148db499dda,
          mid_getLeap_209f08246d708042,
          mid_getLeap_cf010978f3c5a913,
          mid_getName_d2c8eb4129821f0e,
          mid_getUTCTAIOffsets_d751c1a57012b438,
          mid_insideLeap_b16e79ba1b2830a1,
          mid_insideLeap_ada3024ac7559675,
          mid_minuteDuration_94772beff3ac8a91,
          mid_minuteDuration_23ced097258e06b3,
          mid_offsetFromTAI_209f08246d708042,
          mid_offsetFromTAI_cf010978f3c5a913,
          mid_offsetToTAI_50aa1fdea9b81950,
          mid_toString_d2c8eb4129821f0e,
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
