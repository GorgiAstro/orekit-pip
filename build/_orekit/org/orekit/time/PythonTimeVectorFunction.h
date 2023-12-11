#ifndef org_orekit_time_PythonTimeVectorFunction_H
#define org_orekit_time_PythonTimeVectorFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeVectorFunction;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonTimeVectorFunction : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_value_89e8b78e4211e023,
          mid_value_f77452810420dd04,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonTimeVectorFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTimeVectorFunction(const PythonTimeVectorFunction& obj) : ::java::lang::Object(obj) {}

        PythonTimeVectorFunction();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
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
      extern PyType_Def PY_TYPE_DEF(PythonTimeVectorFunction);
      extern PyTypeObject *PY_TYPE(PythonTimeVectorFunction);

      class t_PythonTimeVectorFunction {
      public:
        PyObject_HEAD
        PythonTimeVectorFunction object;
        static PyObject *wrap_Object(const PythonTimeVectorFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
