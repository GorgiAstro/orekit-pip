#ifndef org_orekit_time_TimeScale_H
#define org_orekit_time_TimeScale_H

#include "java/io/Serializable.h"

namespace org {
  namespace orekit {
    namespace time {
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
          mid_getLeap_209f08246d708042,
          mid_getLeap_cf010978f3c5a913,
          mid_getName_d2c8eb4129821f0e,
          mid_insideLeap_b16e79ba1b2830a1,
          mid_insideLeap_ada3024ac7559675,
          mid_minuteDuration_94772beff3ac8a91,
          mid_minuteDuration_23ced097258e06b3,
          mid_offsetFromTAI_209f08246d708042,
          mid_offsetFromTAI_cf010978f3c5a913,
          mid_offsetToTAI_50aa1fdea9b81950,
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
