#ifndef org_hipparchus_linear_DefaultFieldMatrixChangingVisitor_H
#define org_hipparchus_linear_DefaultFieldMatrixChangingVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class FieldMatrixChangingVisitor;
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

      class DefaultFieldMatrixChangingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8d8d85cc6e14d2f7,
          mid_end_2ff8de927fda4153,
          mid_start_ea412797eafea800,
          mid_visit_52bb8aebd493cd71,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DefaultFieldMatrixChangingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DefaultFieldMatrixChangingVisitor(const DefaultFieldMatrixChangingVisitor& obj) : ::java::lang::Object(obj) {}

        DefaultFieldMatrixChangingVisitor(const ::org::hipparchus::FieldElement &);

        ::org::hipparchus::FieldElement end() const;
        void start(jint, jint, jint, jint, jint, jint) const;
        ::org::hipparchus::FieldElement visit(jint, jint, const ::org::hipparchus::FieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(DefaultFieldMatrixChangingVisitor);
      extern PyTypeObject *PY_TYPE(DefaultFieldMatrixChangingVisitor);

      class t_DefaultFieldMatrixChangingVisitor {
      public:
        PyObject_HEAD
        DefaultFieldMatrixChangingVisitor object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_DefaultFieldMatrixChangingVisitor *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const DefaultFieldMatrixChangingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const DefaultFieldMatrixChangingVisitor&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
