#ifndef org_hipparchus_linear_DefaultFieldMatrixPreservingVisitor_H
#define org_hipparchus_linear_DefaultFieldMatrixPreservingVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrixPreservingVisitor;
    }
    class FieldElement;
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

      class DefaultFieldMatrixPreservingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_init$_d6f1e197c99df44f,
          mid_end_f6328613456309a1,
          mid_start_ee5da648d666a7a9,
          mid_visit_8de38856a6ebea36,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DefaultFieldMatrixPreservingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DefaultFieldMatrixPreservingVisitor(const DefaultFieldMatrixPreservingVisitor& obj) : ::java::lang::Object(obj) {}

        DefaultFieldMatrixPreservingVisitor(const ::org::hipparchus::FieldElement &);

        ::org::hipparchus::FieldElement end() const;
        void start(jint, jint, jint, jint, jint, jint) const;
        void visit(jint, jint, const ::org::hipparchus::FieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(DefaultFieldMatrixPreservingVisitor);
      extern PyTypeObject *PY_TYPE(DefaultFieldMatrixPreservingVisitor);

      class t_DefaultFieldMatrixPreservingVisitor {
      public:
        PyObject_HEAD
        DefaultFieldMatrixPreservingVisitor object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_DefaultFieldMatrixPreservingVisitor *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const DefaultFieldMatrixPreservingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const DefaultFieldMatrixPreservingVisitor&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
