#ifndef org_orekit_time_UTCScale_H
#define org_orekit_time_UTCScale_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class UTCTAIOffset;
      class FieldAbsoluteDate;
      class OffsetModel;
      class DateComponents;
      class AbsoluteDate;
      class TimeComponents;
      class TimeScale;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
          mid_getBaseOffsets_cb666ea1a15f5210,
          mid_getFirstKnownLeapSecond_c325492395d89b24,
          mid_getLastKnownLeapSecond_c325492395d89b24,
          mid_getLeap_fd347811007a6ba3,
          mid_getLeap_140b8964300ddedf,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getUTCTAIOffsets_e62d3bb06d56d7e3,
          mid_insideLeap_a35647bda2901f54,
          mid_insideLeap_42be643fd1505244,
          mid_minuteDuration_b977b1a10a6965aa,
          mid_minuteDuration_e6b8e60343f2c829,
          mid_offsetFromTAI_fd347811007a6ba3,
          mid_offsetFromTAI_140b8964300ddedf,
          mid_offsetToTAI_e7a49f02c43fd893,
          mid_toString_1c1fa1e935d6cdcf,
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
