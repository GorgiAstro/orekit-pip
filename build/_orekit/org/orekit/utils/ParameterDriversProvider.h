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
          mid_getNbParametersDriversValue_55546ef6a647f39b,
          mid_getParameterDriver_1ab2f25935933fb2,
          mid_getParameters_25e1757a36c4dde2,
          mid_getParameters_27b701db396ade01,
          mid_getParameters_5286daa2a5b3d227,
          mid_getParameters_364812530234ae59,
          mid_getParametersAllValues_25e1757a36c4dde2,
          mid_getParametersAllValues_5286daa2a5b3d227,
          mid_getParametersDrivers_e62d3bb06d56d7e3,
          mid_isSupported_cde6b28e15c96b75,
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
