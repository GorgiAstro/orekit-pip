#ifndef org_hipparchus_util_MathArrays$Function_H
#define org_hipparchus_util_MathArrays$Function_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class MathArrays$Function : public ::java::lang::Object {
       public:
        enum {
          mid_evaluate_9dc1ec0bcc0a9a29,
          mid_evaluate_556bede10daac330,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathArrays$Function(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathArrays$Function(const MathArrays$Function& obj) : ::java::lang::Object(obj) {}

        jdouble evaluate(const JArray< jdouble > &) const;
        jdouble evaluate(const JArray< jdouble > &, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MathArrays$Function);
      extern PyTypeObject *PY_TYPE(MathArrays$Function);

      class t_MathArrays$Function {
      public:
        PyObject_HEAD
        MathArrays$Function object;
        static PyObject *wrap_Object(const MathArrays$Function&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
