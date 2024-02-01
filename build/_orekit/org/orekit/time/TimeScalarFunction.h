#ifndef org_orekit_time_TimeScalarFunction_H
#define org_orekit_time_TimeScalarFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TimeScalarFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_209f08246d708042,
          mid_value_cf010978f3c5a913,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeScalarFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeScalarFunction(const TimeScalarFunction& obj) : ::java::lang::Object(obj) {}

        jdouble value(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement value(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeScalarFunction);
      extern PyTypeObject *PY_TYPE(TimeScalarFunction);

      class t_TimeScalarFunction {
      public:
        PyObject_HEAD
        TimeScalarFunction object;
        static PyObject *wrap_Object(const TimeScalarFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
