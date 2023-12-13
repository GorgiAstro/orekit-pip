#ifndef org_hipparchus_linear_FieldVectorPreservingVisitor_H
#define org_hipparchus_linear_FieldVectorPreservingVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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

      class FieldVectorPreservingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_end_2ff8de927fda4153,
          mid_start_a0df4b8e4ed3805e,
          mid_visit_3e5e9beae9eb3b27,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldVectorPreservingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldVectorPreservingVisitor(const FieldVectorPreservingVisitor& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::FieldElement end() const;
        void start(jint, jint, jint) const;
        void visit(jint, const ::org::hipparchus::FieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldVectorPreservingVisitor);
      extern PyTypeObject *PY_TYPE(FieldVectorPreservingVisitor);

      class t_FieldVectorPreservingVisitor {
      public:
        PyObject_HEAD
        FieldVectorPreservingVisitor object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldVectorPreservingVisitor *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldVectorPreservingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldVectorPreservingVisitor&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
