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
          mid_end_b74f83833fdad017,
          mid_start_ea412797eafea800,
          mid_visit_31a9a04938175810,
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
