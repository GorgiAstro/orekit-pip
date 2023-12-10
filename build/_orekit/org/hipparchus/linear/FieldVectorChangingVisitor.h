#ifndef org_hipparchus_linear_FieldVectorChangingVisitor_H
#define org_hipparchus_linear_FieldVectorChangingVisitor_H

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

      class FieldVectorChangingVisitor : public ::java::lang::Object {
       public:
        enum {
          mid_end_7e89936bdf79375b,
          mid_start_c80ec2f7d8b5fe87,
          mid_visit_344984fcd6be0043,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldVectorChangingVisitor(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldVectorChangingVisitor(const FieldVectorChangingVisitor& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::FieldElement end() const;
        void start(jint, jint, jint) const;
        ::org::hipparchus::FieldElement visit(jint, const ::org::hipparchus::FieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(FieldVectorChangingVisitor);
      extern PyTypeObject *PY_TYPE(FieldVectorChangingVisitor);

      class t_FieldVectorChangingVisitor {
      public:
        PyObject_HEAD
        FieldVectorChangingVisitor object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldVectorChangingVisitor *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldVectorChangingVisitor&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldVectorChangingVisitor&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif