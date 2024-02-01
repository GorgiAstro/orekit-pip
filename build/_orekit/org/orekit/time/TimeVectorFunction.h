#ifndef org_orekit_time_TimeVectorFunction_H
#define org_orekit_time_TimeVectorFunction_H

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

      class TimeVectorFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_9b63d19c31941c0f,
          mid_value_977531d905f4ab3f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeVectorFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeVectorFunction(const TimeVectorFunction& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > value(const ::org::orekit::time::AbsoluteDate &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > value(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeVectorFunction);
      extern PyTypeObject *PY_TYPE(TimeVectorFunction);

      class t_TimeVectorFunction {
      public:
        PyObject_HEAD
        TimeVectorFunction object;
        static PyObject *wrap_Object(const TimeVectorFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
