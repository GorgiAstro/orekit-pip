#ifndef org_hipparchus_linear_RealVectorPreservingVisitor_H
#define org_hipparchus_linear_RealVectorPreservingVisitor_H

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

      class RealVectorPreservingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_end_b74f83833fdad017,
          mid_start_a0df4b8e4ed3805e,
          mid_visit_d5322b8b512aeb26,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealVectorPreservingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealVectorPreservingVisitor(const RealVectorPreservingVisitor& obj) : ::java::lang::Object(obj) {}

        jdouble end() const;
        void start(jint, jint, jint) const;
        void visit(jint, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealVectorPreservingVisitor);
      extern PyTypeObject *PY_TYPE(RealVectorPreservingVisitor);

      class t_RealVectorPreservingVisitor {
      public:
        PyObject_HEAD
        RealVectorPreservingVisitor object;
        static PyObject *wrap_Object(const RealVectorPreservingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
