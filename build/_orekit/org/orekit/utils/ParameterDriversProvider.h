#ifndef org_orekit_utils_ParameterDriversProvider_H
#define org_orekit_utils_ParameterDriversProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriversProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getNbParametersDriversValue_f2f64475e4580546,
          mid_getParameterDriver_d5ba0ef5703f4c62,
          mid_getParameters_7cdc325af0834901,
          mid_getParameters_e586dea4c0bad69b,
          mid_getParameters_62f3dd52a41b90da,
          mid_getParameters_e702a9655dcb43da,
          mid_getParametersAllValues_7cdc325af0834901,
          mid_getParametersAllValues_62f3dd52a41b90da,
          mid_getParametersDrivers_a6156df500549a58,
          mid_isSupported_6b161f495ea569b8,
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
