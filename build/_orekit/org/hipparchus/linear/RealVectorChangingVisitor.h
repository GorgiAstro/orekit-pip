#ifndef org_hipparchus_linear_RealVectorChangingVisitor_H
#define org_hipparchus_linear_RealVectorChangingVisitor_H

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

      class RealVectorChangingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_end_456d9a2f64d6b28d,
          mid_start_c80ec2f7d8b5fe87,
          mid_visit_31332242d1624d2c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealVectorChangingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealVectorChangingVisitor(const RealVectorChangingVisitor& obj) : ::java::lang::Object(obj) {}

        jdouble end() const;
        void start(jint, jint, jint) const;
        jdouble visit(jint, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealVectorChangingVisitor);
      extern PyTypeObject *PY_TYPE(RealVectorChangingVisitor);

      class t_RealVectorChangingVisitor {
      public:
        PyObject_HEAD
        RealVectorChangingVisitor object;
        static PyObject *wrap_Object(const RealVectorChangingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
