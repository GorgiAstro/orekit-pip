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
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriversProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getNbParametersDriversValue_412668abc8d889e9,
          mid_getParameterDriver_068d3bba04590913,
          mid_getParameters_a53a7513ecedada2,
          mid_getParameters_89e8b78e4211e023,
          mid_getParameters_4ab353685404cfce,
          mid_getParameters_d0cf7ce7c5c441df,
          mid_getParametersAllValues_a53a7513ecedada2,
          mid_getParametersAllValues_4ab353685404cfce,
          mid_getParametersDrivers_0d9551367f7ecdef,
          mid_isSupported_fd2162b8a05a22fe,
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
