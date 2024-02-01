#ifndef org_orekit_time_TDBScale_H
#define org_orekit_time_TDBScale_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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

      class TDBScale : public ::java::lang::Object {
       public:
        enum {
          mid_getName_d2c8eb4129821f0e,
          mid_offsetFromTAI_209f08246d708042,
          mid_offsetFromTAI_cf010978f3c5a913,
          mid_toString_d2c8eb4129821f0e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TDBScale(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TDBScale(const TDBScale& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getName() const;
        jdouble offsetFromTAI(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TDBScale);
      extern PyTypeObject *PY_TYPE(TDBScale);

      class t_TDBScale {
      public:
        PyObject_HEAD
        TDBScale object;
        static PyObject *wrap_Object(const TDBScale&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
