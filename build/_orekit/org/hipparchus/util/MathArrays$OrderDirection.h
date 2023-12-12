#ifndef org_hipparchus_util_MathArrays$OrderDirection_H
#define org_hipparchus_util_MathArrays$OrderDirection_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class MathArrays$OrderDirection;
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

      class MathArrays$OrderDirection : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_dc8716f3b3d915c3,
          mid_values_dd3beab7185fa5a4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathArrays$OrderDirection(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathArrays$OrderDirection(const MathArrays$OrderDirection& obj) : ::java::lang::Enum(obj) {}

        static MathArrays$OrderDirection *DECREASING;
        static MathArrays$OrderDirection *INCREASING;

        static MathArrays$OrderDirection valueOf(const ::java::lang::String &);
        static JArray< MathArrays$OrderDirection > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MathArrays$OrderDirection);
      extern PyTypeObject *PY_TYPE(MathArrays$OrderDirection);

      class t_MathArrays$OrderDirection {
      public:
        PyObject_HEAD
        MathArrays$OrderDirection object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_MathArrays$OrderDirection *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const MathArrays$OrderDirection&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const MathArrays$OrderDirection&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
