#ifndef org_hipparchus_linear_FieldMatrixPreservingVisitor_H
#define org_hipparchus_linear_FieldMatrixPreservingVisitor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class FieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class FieldMatrixPreservingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_end_f6328613456309a1,
          mid_start_ee5da648d666a7a9,
          mid_visit_8de38856a6ebea36,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldMatrixPreservingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldMatrixPreservingVisitor(const FieldMatrixPreservingVisitor& obj) : ::java::lang::Object(obj) {}

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
      extern PyType_Def PY_TYPE_DEF(FieldMatrixPreservingVisitor);
      extern PyTypeObject *PY_TYPE(FieldMatrixPreservingVisitor);

      class t_FieldMatrixPreservingVisitor {
      public:
        PyObject_HEAD
        FieldMatrixPreservingVisitor object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldMatrixPreservingVisitor *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldMatrixPreservingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldMatrixPreservingVisitor&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
