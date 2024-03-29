#ifndef org_hipparchus_linear_RealMatrixPreservingVisitor_H
#define org_hipparchus_linear_RealMatrixPreservingVisitor_H

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

      class RealMatrixPreservingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_end_9981f74b2d109da6,
          mid_start_ee5da648d666a7a9,
          mid_visit_e98d7b3e971b6087,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealMatrixPreservingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealMatrixPreservingVisitor(const RealMatrixPreservingVisitor& obj) : ::java::lang::Object(obj) {}

        jdouble end() const;
        void start(jint, jint, jint, jint, jint, jint) const;
        void visit(jint, jint, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealMatrixPreservingVisitor);
      extern PyTypeObject *PY_TYPE(RealMatrixPreservingVisitor);

      class t_RealMatrixPreservingVisitor {
      public:
        PyObject_HEAD
        RealMatrixPreservingVisitor object;
        static PyObject *wrap_Object(const RealMatrixPreservingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
