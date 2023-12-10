#ifndef org_hipparchus_linear_DefaultRealMatrixChangingVisitor_H
#define org_hipparchus_linear_DefaultRealMatrixChangingVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrixChangingVisitor;
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

      class DefaultRealMatrixChangingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_end_dff5885c2c873297,
          mid_start_5aa4d40be6f39408,
          mid_visit_3a88ef0e755558fa,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DefaultRealMatrixChangingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DefaultRealMatrixChangingVisitor(const DefaultRealMatrixChangingVisitor& obj) : ::java::lang::Object(obj) {}

        DefaultRealMatrixChangingVisitor();

        jdouble end() const;
        void start(jint, jint, jint, jint, jint, jint) const;
        jdouble visit(jint, jint, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(DefaultRealMatrixChangingVisitor);
      extern PyTypeObject *PY_TYPE(DefaultRealMatrixChangingVisitor);

      class t_DefaultRealMatrixChangingVisitor {
      public:
        PyObject_HEAD
        DefaultRealMatrixChangingVisitor object;
        static PyObject *wrap_Object(const DefaultRealMatrixChangingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
