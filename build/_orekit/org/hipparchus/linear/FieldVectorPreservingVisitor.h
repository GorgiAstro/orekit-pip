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
          mid_end_7e89936bdf79375b,
          mid_start_c80ec2f7d8b5fe87,
          mid_visit_9dd724c9bf212c41,
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
