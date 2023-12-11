#ifndef org_hipparchus_geometry_partitioning_BSPTree$LeafMerger_H
#define org_hipparchus_geometry_partitioning_BSPTree$LeafMerger_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
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

        class BSPTree$LeafMerger : public ::java::lang::Object {
         public:
          enum {
            mid_merge_451709fdd8386167,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BSPTree$LeafMerger(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BSPTree$LeafMerger(const BSPTree$LeafMerger& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::partitioning::BSPTree merge(const ::org::hipparchus::geometry::partitioning::BSPTree &, const ::org::hipparchus::geometry::partitioning::BSPTree &, const ::org::hipparchus::geometry::partitioning::BSPTree &, jboolean, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(BSPTree$LeafMerger);
        extern PyTypeObject *PY_TYPE(BSPTree$LeafMerger);

        class t_BSPTree$LeafMerger {
        public:
          PyObject_HEAD
          BSPTree$LeafMerger object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BSPTree$LeafMerger *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BSPTree$LeafMerger&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BSPTree$LeafMerger&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
