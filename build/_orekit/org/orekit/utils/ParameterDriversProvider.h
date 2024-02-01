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
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriversProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getNbParametersDriversValue_d6ab429752e7c267,
          mid_getParameterDriver_a75a8a462ead0b8a,
          mid_getParameters_be783177b060994b,
          mid_getParameters_9b63d19c31941c0f,
          mid_getParameters_84f929c42eeec397,
          mid_getParameters_f06d1f734842fcea,
          mid_getParametersAllValues_be783177b060994b,
          mid_getParametersAllValues_84f929c42eeec397,
          mid_getParametersDrivers_d751c1a57012b438,
          mid_isSupported_df4c65b2aede5c41,
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
