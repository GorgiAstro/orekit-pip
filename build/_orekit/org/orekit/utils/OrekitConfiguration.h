#ifndef org_orekit_utils_OrekitConfiguration_H
#define org_orekit_utils_OrekitConfiguration_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class OrekitConfiguration : public ::java::lang::Object {
       public:
        enum {
          mid_getCacheSlotsNumber_570ce0828f81a2c1,
          mid_setCacheSlotsNumber_99803b0791f320ff,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrekitConfiguration(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitConfiguration(const OrekitConfiguration& obj) : ::java::lang::Object(obj) {}

        static jint getCacheSlotsNumber();
        static void setCacheSlotsNumber(jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(OrekitConfiguration);
      extern PyTypeObject *PY_TYPE(OrekitConfiguration);

      class t_OrekitConfiguration {
      public:
        PyObject_HEAD
        OrekitConfiguration object;
        static PyObject *wrap_Object(const OrekitConfiguration&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
