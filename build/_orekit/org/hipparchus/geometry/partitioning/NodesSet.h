#ifndef org_hipparchus_geometry_partitioning_NodesSet_H
#define org_hipparchus_geometry_partitioning_NodesSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTree;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class NodesSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_add_083ba3410c8af631,
            mid_addAll_616dc59fbc71e214,
            mid_iterator_4d23511a9f0db098,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NodesSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NodesSet(const NodesSet& obj) : ::java::lang::Object(obj) {}

          NodesSet();

          void add(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
          void addAll(const ::java::lang::Iterable &) const;
          ::java::util::Iterator iterator() const;
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
        extern PyType_Def PY_TYPE_DEF(NodesSet);
        extern PyTypeObject *PY_TYPE(NodesSet);

        class t_NodesSet {
        public:
          PyObject_HEAD
          NodesSet object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NodesSet *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NodesSet&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NodesSet&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
