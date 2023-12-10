#ifndef org_orekit_utils_ParameterDriversProvider_H
#define org_orekit_utils_ParameterDriversProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriversProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getNbParametersDriversValue_570ce0828f81a2c1,
          mid_getParameterDriver_32a37bc1292372ac,
          mid_getParameters_60c7040667a7dc5c,
          mid_getParameters_2b9aa40de0a696a4,
          mid_getParameters_f040a403cffae196,
          mid_getParameters_34a9acc5b042d8a8,
          mid_getParametersAllValues_60c7040667a7dc5c,
          mid_getParametersAllValues_f040a403cffae196,
          mid_getParametersDrivers_2afa36052df4765d,
          mid_isSupported_7edad2c2f64f4d68,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterDriversProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterDriversProvider(const ParameterDriversProvider& obj) : ::java::lang::Object(obj) {}

        jint getNbParametersDriversValue() const;
        ::org::orekit::utils::ParameterDriver getParameterDriver(const ::java::lang::String &) const;
        JArray< jdouble > getParameters() const;
        JArray< jdouble > getParameters(const ::org::orekit::time::AbsoluteDate &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > getParameters(const ::org::hipparchus::Field &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > getParameters(const ::org::hipparchus::Field &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        JArray< jdouble > getParametersAllValues() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getParametersAllValues(const ::org::hipparchus::Field &) const;
        ::java::util::List getParametersDrivers() const;
        jboolean isSupported(const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterDriversProvider);
      extern PyTypeObject *PY_TYPE(ParameterDriversProvider);

      class t_ParameterDriversProvider {
      public:
        PyObject_HEAD
        ParameterDriversProvider object;
        static PyObject *wrap_Object(const ParameterDriversProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
