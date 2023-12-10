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
    namespace linear {
      class DependentVectorsHandler;
      class RealVector;
      class FieldVector;
    }
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class DependentVectorsHandler : public ::java::lang::Enum {
       public:
        enum {
          mid_manageDependent_6ff729c408795275,
          mid_manageDependent_55a90ba7dcaff80c,
          mid_valueOf_ac716b038b45c93c,
          mid_values_218cb98788baa394,
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
