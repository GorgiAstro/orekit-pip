#ifndef org_hipparchus_util_CombinatoricsUtils$FactorialLog_H
#define org_hipparchus_util_CombinatoricsUtils$FactorialLog_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class CombinatoricsUtils$FactorialLog;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class CombinatoricsUtils$FactorialLog : public ::java::lang::Object {
       public:
        enum {
          mid_create_dea51f361c17123f,
          mid_value_b772323fc98b7293,
          mid_withCache_f45449bdc4622eb6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CombinatoricsUtils$FactorialLog(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CombinatoricsUtils$FactorialLog(const CombinatoricsUtils$FactorialLog& obj) : ::java::lang::Object(obj) {}

        static CombinatoricsUtils$FactorialLog create();
        jdouble value(jint) const;
        CombinatoricsUtils$FactorialLog withCache(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(CombinatoricsUtils$FactorialLog);
      extern PyTypeObject *PY_TYPE(CombinatoricsUtils$FactorialLog);

      class t_CombinatoricsUtils$FactorialLog {
      public:
        PyObject_HEAD
        CombinatoricsUtils$FactorialLog object;
        static PyObject *wrap_Object(const CombinatoricsUtils$FactorialLog&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif