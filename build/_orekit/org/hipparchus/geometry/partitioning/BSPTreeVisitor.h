#ifndef org_hipparchus_geometry_partitioning_BSPTreeVisitor_H
#define org_hipparchus_geometry_partitioning_BSPTreeVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTreeVisitor$Order;
        class BSPTree;
      }
    }
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
    namespace geometry {
      namespace partitioning {

        class BSPTreeVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_visitInternalNode_f5df8cefa4689121,
            mid_visitLeafNode_f5df8cefa4689121,
            mid_visitOrder_6d9d99e5d696c4f5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BSPTreeVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BSPTreeVisitor(const BSPTreeVisitor& obj) : ::java::lang::Object(obj) {}

          void visitInternalNode(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
          void visitLeafNode(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order visitOrder(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
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
        extern PyType_Def PY_TYPE_DEF(BSPTreeVisitor);
        extern PyTypeObject *PY_TYPE(BSPTreeVisitor);

        class t_BSPTreeVisitor {
        public:
          PyObject_HEAD
          BSPTreeVisitor object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BSPTreeVisitor *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BSPTreeVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BSPTreeVisitor&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
