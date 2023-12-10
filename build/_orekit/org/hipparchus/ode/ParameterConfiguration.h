#ifndef org_hipparchus_ode_ParameterConfiguration_H
#define org_hipparchus_ode_ParameterConfiguration_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ParameterConfiguration : public ::java::lang::Object {
       public:
        enum {
          mid_getHP_dff5885c2c873297,
          mid_getParameterName_11b109bd155ca898,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterConfiguration(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterConfiguration(const ParameterConfiguration& obj) : ::java::lang::Object(obj) {}

        jdouble getHP() const;
        ::java::lang::String getParameterName() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ParameterConfiguration);
      extern PyTypeObject *PY_TYPE(ParameterConfiguration);

      class t_ParameterConfiguration {
      public:
        PyObject_HEAD
        ParameterConfiguration object;
        static PyObject *wrap_Object(const ParameterConfiguration&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
