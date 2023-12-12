#ifndef org_orekit_utils_AccurateFormatter_H
#define org_orekit_utils_AccurateFormatter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class AccurateFormatter : public ::java::lang::Object {
       public:
        enum {
          mid_format_c03a7791f2fcb1f1,
          mid_format_26917e8002e2fe0e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AccurateFormatter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AccurateFormatter(const AccurateFormatter& obj) : ::java::lang::Object(obj) {}

        static ::java::util::Locale *STANDARDIZED_LOCALE;

        static ::java::lang::String format(jdouble);
        static ::java::lang::String format(jint, jint, jint, jint, jint, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AccurateFormatter);
      extern PyTypeObject *PY_TYPE(AccurateFormatter);

      class t_AccurateFormatter {
      public:
        PyObject_HEAD
        AccurateFormatter object;
        static PyObject *wrap_Object(const AccurateFormatter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
