#ifndef org_hipparchus_util_MathArrays$Position_H
#define org_hipparchus_util_MathArrays$Position_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class MathArrays$Position;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class MathArrays$Position : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_aff509199df38726,
          mid_values_917c5bd55f25bb36,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathArrays$Position(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathArrays$Position(const MathArrays$Position& obj) : ::java::lang::Enum(obj) {}

        static MathArrays$Position *HEAD;
        static MathArrays$Position *TAIL;

        static MathArrays$Position valueOf(const ::java::lang::String &);
        static JArray< MathArrays$Position > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MathArrays$Position);
      extern PyTypeObject *PY_TYPE(MathArrays$Position);

      class t_MathArrays$Position {
      public:
        PyObject_HEAD
        MathArrays$Position object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_MathArrays$Position *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const MathArrays$Position&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const MathArrays$Position&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
