#ifndef org_hipparchus_linear_JacobiPreconditioner_H
#define org_hipparchus_linear_JacobiPreconditioner_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class JacobiPreconditioner;
      class RealLinearOperator;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class JacobiPreconditioner : public ::java::lang::Object {
       public:
        enum {
          mid_init$_2808bdf785b578a3,
          mid_create_f81e8324397286d3,
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getRowDimension_55546ef6a647f39b,
          mid_operate_d5f1d017fd25113b,
          mid_sqrt_68c74764af0bb4df,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit JacobiPreconditioner(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        JacobiPreconditioner(const JacobiPreconditioner& obj) : ::java::lang::Object(obj) {}

        JacobiPreconditioner(const JArray< jdouble > &, jboolean);

        static JacobiPreconditioner create(const ::org::hipparchus::linear::RealLinearOperator &);
        jint getColumnDimension() const;
        jint getRowDimension() const;
        ::org::hipparchus::linear::RealVector operate(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealLinearOperator sqrt() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(JacobiPreconditioner);
      extern PyTypeObject *PY_TYPE(JacobiPreconditioner);

      class t_JacobiPreconditioner {
      public:
        PyObject_HEAD
        JacobiPreconditioner object;
        static PyObject *wrap_Object(const JacobiPreconditioner&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
