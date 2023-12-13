#ifndef org_hipparchus_linear_DependentVectorsHandler_H
#define org_hipparchus_linear_DependentVectorsHandler_H

#include "java/lang/Enum.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    class Field;
    namespace linear {
      class RealVector;
      class DependentVectorsHandler;
      class FieldVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class DependentVectorsHandler : public ::java::lang::Enum {
       public:
        enum {
          mid_manageDependent_20b0475ecaa6f78f,
          mid_manageDependent_91c5f5a3a628b8ee,
          mid_valueOf_1747ed25a6ab74f9,
          mid_values_795c2a9a023601ca,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DependentVectorsHandler(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DependentVectorsHandler(const DependentVectorsHandler& obj) : ::java::lang::Enum(obj) {}

        static DependentVectorsHandler *ADD_ZERO_VECTOR;
        static DependentVectorsHandler *GENERATE_EXCEPTION;
        static DependentVectorsHandler *REDUCE_BASE_TO_SPAN;

        jint manageDependent(jint, const ::java::util::List &) const;
        jint manageDependent(const ::org::hipparchus::Field &, jint, const ::java::util::List &) const;
        static DependentVectorsHandler valueOf(const ::java::lang::String &);
        static JArray< DependentVectorsHandler > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(DependentVectorsHandler);
      extern PyTypeObject *PY_TYPE(DependentVectorsHandler);

      class t_DependentVectorsHandler {
      public:
        PyObject_HEAD
        DependentVectorsHandler object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_DependentVectorsHandler *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const DependentVectorsHandler&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const DependentVectorsHandler&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
