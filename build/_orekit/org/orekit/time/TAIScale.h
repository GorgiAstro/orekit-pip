#ifndef org_orekit_time_TAIScale_H
#define org_orekit_time_TAIScale_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class TimeComponents;
      class FieldAbsoluteDate;
      class AbsoluteDate;
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

      class TAIScale : public ::java::lang::Object {
       public:
        enum {
          mid_getName_0090f7797e403f43,
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

        explicit TAIScale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TAIScale(const TAIScale& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getName() const;
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
      extern PyType_Def PY_TYPE_DEF(TAIScale);
      extern PyTypeObject *PY_TYPE(TAIScale);

      class t_TAIScale {
      public:
        PyObject_HEAD
        TAIScale object;
        static PyObject *wrap_Object(const TAIScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
