#ifndef org_orekit_time_GLONASSScale_H
#define org_orekit_time_GLONASSScale_H

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
      class FieldAbsoluteDate;
      class TimeScale;
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

      class GLONASSScale : public ::java::lang::Object {
       public:
        enum {
          mid_getLeap_bf1d7732f1acb697,
          mid_getLeap_2a5f05be83ff251d,
          mid_getName_11b109bd155ca898,
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
