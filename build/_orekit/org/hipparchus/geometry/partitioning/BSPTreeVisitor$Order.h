#ifndef org_hipparchus_geometry_partitioning_BSPTreeVisitor$Order_H
#define org_hipparchus_geometry_partitioning_BSPTreeVisitor$Order_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTreeVisitor$Order;
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

        class BSPTreeVisitor$Order : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_d76f867903c94a08,
            mid_values_6ee79ae9922e7e20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BSPTreeVisitor$Order(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BSPTreeVisitor$Order(const BSPTreeVisitor$Order& obj) : ::java::lang::Enum(obj) {}

          static BSPTreeVisitor$Order *MINUS_PLUS_SUB;
          static BSPTreeVisitor$Order *MINUS_SUB_PLUS;
          static BSPTreeVisitor$Order *PLUS_MINUS_SUB;
          static BSPTreeVisitor$Order *PLUS_SUB_MINUS;
          static BSPTreeVisitor$Order *SUB_MINUS_PLUS;
          static BSPTreeVisitor$Order *SUB_PLUS_MINUS;

          static BSPTreeVisitor$Order valueOf(const ::java::lang::String &);
          static JArray< BSPTreeVisitor$Order > values();
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
        extern PyType_Def PY_TYPE_DEF(BSPTreeVisitor$Order);
        extern PyTypeObject *PY_TYPE(BSPTreeVisitor$Order);

        class t_BSPTreeVisitor$Order {
        public:
          PyObject_HEAD
          BSPTreeVisitor$Order object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BSPTreeVisitor$Order *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BSPTreeVisitor$Order&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BSPTreeVisitor$Order&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
