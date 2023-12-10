#ifndef org_hipparchus_util_FieldBlendable_H
#define org_hipparchus_util_FieldBlendable_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
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

      class FieldBlendable : public ::java::lang::Object {
       public:
        enum {
          mid_blendArithmeticallyWith_491e757e542a2378,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldBlendable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldBlendable(const FieldBlendable& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object blendArithmeticallyWith(const ::java::lang::Object &, const ::org::hipparchus::FieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(FieldBlendable);
      extern PyTypeObject *PY_TYPE(FieldBlendable);

      class t_FieldBlendable {
      public:
        PyObject_HEAD
        FieldBlendable object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_FieldBlendable *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldBlendable&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldBlendable&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
