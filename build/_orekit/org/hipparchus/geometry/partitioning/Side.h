#ifndef org_hipparchus_geometry_partitioning_Side_H
#define org_hipparchus_geometry_partitioning_Side_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Side;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class Side : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_d19b5a5f8c112d36,
            mid_values_1468d4d7056992c9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Side(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Side(const Side& obj) : ::java::lang::Enum(obj) {}

          static Side *BOTH;
          static Side *HYPER;
          static Side *MINUS;
          static Side *PLUS;

          static Side valueOf(const ::java::lang::String &);
          static JArray< Side > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        extern PyType_Def PY_TYPE_DEF(Side);
        extern PyTypeObject *PY_TYPE(Side);

        class t_Side {
        public:
          PyObject_HEAD
          Side object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Side *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Side&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Side&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
