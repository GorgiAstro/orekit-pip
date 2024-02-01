#ifndef org_hipparchus_linear_JacobiPreconditioner_H
#define org_hipparchus_linear_JacobiPreconditioner_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealLinearOperator;
      class JacobiPreconditioner;
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
          mid_init$_d202a20516e33d93,
          mid_create_f1f78ca70ac9cda9,
          mid_getColumnDimension_d6ab429752e7c267,
          mid_getRowDimension_d6ab429752e7c267,
          mid_operate_bf8d75e459632544,
          mid_sqrt_001c93b1f96cd016,
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
