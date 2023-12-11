#ifndef org_hipparchus_util_MathUtils$FieldSumAndResidual_H
#define org_hipparchus_util_MathUtils$FieldSumAndResidual_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
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

      class MathUtils$FieldSumAndResidual : public ::java::lang::Object {
       public:
        enum {
          mid_getResidual_ce0470d468f80a56,
          mid_getSum_ce0470d468f80a56,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathUtils$FieldSumAndResidual(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathUtils$FieldSumAndResidual(const MathUtils$FieldSumAndResidual& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::FieldElement getResidual() const;
        ::org::hipparchus::FieldElement getSum() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MathUtils$FieldSumAndResidual);
      extern PyTypeObject *PY_TYPE(MathUtils$FieldSumAndResidual);

      class t_MathUtils$FieldSumAndResidual {
      public:
        PyObject_HEAD
        MathUtils$FieldSumAndResidual object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_MathUtils$FieldSumAndResidual *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const MathUtils$FieldSumAndResidual&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const MathUtils$FieldSumAndResidual&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
