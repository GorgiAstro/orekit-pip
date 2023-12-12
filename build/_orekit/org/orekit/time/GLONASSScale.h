#ifndef org_orekit_time_GLONASSScale_H
#define org_orekit_time_GLONASSScale_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class FieldAbsoluteDate;
      class TimeComponents;
      class AbsoluteDate;
      class TimeScale;
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

      class GLONASSScale : public ::java::lang::Object {
       public:
        enum {
          mid_getLeap_b0b988f941da47d8,
          mid_getLeap_b884068a2c99f6ca,
          mid_getName_3cffd47377eca18a,
          mid_insideLeap_981023bfa4a8a093,
          mid_insideLeap_f02ea951706eaf64,
          mid_minuteDuration_7488878b3477b7fd,
          mid_minuteDuration_2c4b5d48930cdcbe,
          mid_offsetFromTAI_b0b988f941da47d8,
          mid_offsetFromTAI_b884068a2c99f6ca,
          mid_offsetToTAI_e4171ab80e571373,
          mid_toString_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GLONASSScale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GLONASSScale(const GLONASSScale& obj) : ::java::lang::Object(obj) {}

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
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(GLONASSScale);
      extern PyTypeObject *PY_TYPE(GLONASSScale);

      class t_GLONASSScale {
      public:
        PyObject_HEAD
        GLONASSScale object;
        static PyObject *wrap_Object(const GLONASSScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
