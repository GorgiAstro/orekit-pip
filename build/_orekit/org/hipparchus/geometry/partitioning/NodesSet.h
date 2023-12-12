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
            mid_init$_0640e6acf969ed28,
            mid_add_5865d893f5a7dd72,
            mid_addAll_f63faef051c62dc2,
            mid_iterator_834a3801c426326d,
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
