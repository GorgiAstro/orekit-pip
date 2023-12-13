#ifndef org_hipparchus_util_Blendable_H
#define org_hipparchus_util_Blendable_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
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

      class Blendable : public ::java::lang::Object {
       public:
        enum {
          mid_blendArithmeticallyWith_4c5ff869c16f4311,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Blendable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Blendable(const Blendable& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object blendArithmeticallyWith(const ::java::lang::Object &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Blendable);
      extern PyTypeObject *PY_TYPE(Blendable);

      class t_Blendable {
      public:
        PyObject_HEAD
        Blendable object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Blendable *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Blendable&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Blendable&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
