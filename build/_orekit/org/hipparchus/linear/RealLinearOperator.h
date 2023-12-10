#ifndef org_hipparchus_linear_RealLinearOperator_H
#define org_hipparchus_linear_RealLinearOperator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class UnsupportedOperationException;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealLinearOperator : public ::java::lang::Object {
       public:
        enum {
          mid_getColumnDimension_570ce0828f81a2c1,
          mid_getRowDimension_570ce0828f81a2c1,
          mid_isTransposable_b108b35ef48e27bd,
          mid_operate_613347e28dd909cd,
          mid_operateTranspose_613347e28dd909cd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealLinearOperator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealLinearOperator(const RealLinearOperator& obj) : ::java::lang::Object(obj) {}

        jint getColumnDimension() const;
        jint getRowDimension() const;
        jboolean isTransposable() const;
        ::org::hipparchus::linear::RealVector operate(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector operateTranspose(const ::org::hipparchus::linear::RealVector &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealLinearOperator);
      extern PyTypeObject *PY_TYPE(RealLinearOperator);

      class t_RealLinearOperator {
      public:
        PyObject_HEAD
        RealLinearOperator object;
        static PyObject *wrap_Object(const RealLinearOperator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
