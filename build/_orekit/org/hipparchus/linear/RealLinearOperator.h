#ifndef org_hipparchus_linear_RealLinearOperator_H
#define org_hipparchus_linear_RealLinearOperator_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
    class UnsupportedOperationException;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealLinearOperator : public ::java::lang::Object {
       public:
        enum {
          mid_getColumnDimension_f2f64475e4580546,
          mid_getRowDimension_f2f64475e4580546,
          mid_isTransposable_e470b6d9e0d979db,
          mid_operate_a3e626dfa1abd779,
          mid_operateTranspose_a3e626dfa1abd779,
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
