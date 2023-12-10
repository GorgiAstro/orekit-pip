#ifndef org_hipparchus_linear_JacobiPreconditioner_H
#define org_hipparchus_linear_JacobiPreconditioner_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class JacobiPreconditioner;
      class RealLinearOperator;
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
          mid_init$_d26930f65a8ba6c9,
          mid_create_c12606a87a7dd2c4,
          mid_getColumnDimension_f2f64475e4580546,
          mid_getRowDimension_f2f64475e4580546,
          mid_operate_a3e626dfa1abd779,
          mid_sqrt_e5101c26cd2c310f,
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
