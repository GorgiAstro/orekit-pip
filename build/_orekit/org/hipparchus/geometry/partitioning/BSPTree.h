#ifndef org_hipparchus_geometry_partitioning_BSPTree_H
#define org_hipparchus_geometry_partitioning_BSPTree_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class BSPTreeVisitor;
        class Hyperplane;
        class BSPTree$LeafMerger;
        class BSPTree$VanishingCutHandler;
        class BSPTree;
      }
      class Point;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class BSPTree : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_009757f2c0fd9090,
            mid_init$_ca658f887988cc98,
            mid_copySelf_80c5968462f40d4e,
            mid_getAttribute_e661fe3ba2fafb22,
            mid_getCell_f1bb6a3a109dcba3,
            mid_getCloseCuts_48ab7d97da8be63c,
            mid_getCut_0629297ff6ae927a,
            mid_getMinus_80c5968462f40d4e,
            mid_getParent_80c5968462f40d4e,
            mid_getPlus_80c5968462f40d4e,
            mid_insertCut_cb9274a363000a77,
            mid_insertInTree_fbfc4449abd27745,
            mid_merge_c231cd42a59a0e84,
            mid_pruneAroundConvexCell_1638395f54ad96d6,
            mid_setAttribute_009757f2c0fd9090,
            mid_split_481a2a5f24f43c3d,
            mid_visit_c71a0d90adbebbd5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BSPTree(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BSPTree(const BSPTree& obj) : ::java::lang::Object(obj) {}

          BSPTree();
          BSPTree(const ::java::lang::Object &);
          BSPTree(const ::org::hipparchus::geometry::partitioning::SubHyperplane &, const BSPTree &, const BSPTree &, const ::java::lang::Object &);

          BSPTree copySelf() const;
          ::java::lang::Object getAttribute() const;
          BSPTree getCell(const ::org::hipparchus::geometry::Point &, jdouble) const;
          ::java::util::List getCloseCuts(const ::org::hipparchus::geometry::Point &, jdouble) const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane getCut() const;
          BSPTree getMinus() const;
          BSPTree getParent() const;
          BSPTree getPlus() const;
          jboolean insertCut(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
          void insertInTree(const BSPTree &, jboolean, const ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler &) const;
          BSPTree merge(const BSPTree &, const ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger &) const;
          BSPTree pruneAroundConvexCell(const ::java::lang::Object &, const ::java::lang::Object &, const ::java::lang::Object &) const;
          void setAttribute(const ::java::lang::Object &) const;
          BSPTree split(const ::org::hipparchus::geometry::partitioning::SubHyperplane &) const;
          void visit(const ::org::hipparchus::geometry::partitioning::BSPTreeVisitor &) const;
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
        extern PyType_Def PY_TYPE_DEF(BSPTree);
        extern PyTypeObject *PY_TYPE(BSPTree);

        class t_BSPTree {
        public:
          PyObject_HEAD
          BSPTree object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BSPTree *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BSPTree&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BSPTree&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
