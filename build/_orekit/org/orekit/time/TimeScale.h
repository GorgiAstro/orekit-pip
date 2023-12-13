#ifndef org_orekit_time_TimeScale_H
#define org_orekit_time_TimeScale_H

#include "java/io/Serializable.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class DateComponents;
      class AbsoluteDate;
      class TimeComponents;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
          mid_getLeap_fd347811007a6ba3,
          mid_getLeap_140b8964300ddedf,
          mid_getName_1c1fa1e935d6cdcf,
          mid_insideLeap_a35647bda2901f54,
          mid_insideLeap_42be643fd1505244,
          mid_minuteDuration_b977b1a10a6965aa,
          mid_minuteDuration_e6b8e60343f2c829,
          mid_offsetFromTAI_fd347811007a6ba3,
          mid_offsetFromTAI_140b8964300ddedf,
          mid_offsetToTAI_e7a49f02c43fd893,
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
