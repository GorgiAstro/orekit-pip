#ifndef org_hipparchus_linear_RealMatrixChangingVisitor_H
#define org_hipparchus_linear_RealMatrixChangingVisitor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealMatrixChangingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_end_557b8123390d8d0c,
          mid_start_b02282271d2e33e3,
          mid_visit_73f37cd0aafa4920,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealMatrixChangingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealMatrixChangingVisitor(const RealMatrixChangingVisitor& obj) : ::java::lang::Object(obj) {}

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
      extern PyType_Def PY_TYPE_DEF(RealMatrixChangingVisitor);
      extern PyTypeObject *PY_TYPE(RealMatrixChangingVisitor);

      class t_RealMatrixChangingVisitor {
      public:
        PyObject_HEAD
        RealMatrixChangingVisitor object;
        static PyObject *wrap_Object(const RealMatrixChangingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
