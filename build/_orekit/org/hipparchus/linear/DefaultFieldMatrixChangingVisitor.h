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
          mid_init$_f96eb0f00086e90d,
          mid_end_99097cb60cf2d774,
          mid_start_5aa4d40be6f39408,
          mid_visit_67d71003e110b686,
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
