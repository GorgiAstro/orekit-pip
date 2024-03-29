#ifndef org_hipparchus_geometry_partitioning_BoundaryAttribute_H
#define org_hipparchus_geometry_partitioning_BoundaryAttribute_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class NodesSet;
        class SubHyperplane;
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

        class BoundaryAttribute : public ::java::lang::Object {
         public:
          enum {
            mid_getPlusInside_24c5633e830ec593,
            mid_getPlusOutside_24c5633e830ec593,
            mid_getSplitters_aee8e9a530911700,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoundaryAttribute(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BoundaryAttribute(const BoundaryAttribute& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane getPlusInside() const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane getPlusOutside() const;
          ::org::hipparchus::geometry::partitioning::NodesSet getSplitters() const;
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
        extern PyType_Def PY_TYPE_DEF(BoundaryAttribute);
        extern PyTypeObject *PY_TYPE(BoundaryAttribute);

        class t_BoundaryAttribute {
        public:
          PyObject_HEAD
          BoundaryAttribute object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BoundaryAttribute *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BoundaryAttribute&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BoundaryAttribute&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
