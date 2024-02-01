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
        class Hyperplane;
        class BSPTree;
        class BSPTreeVisitor;
        class SubHyperplane;
        class BSPTree$LeafMerger;
        class BSPTree$VanishingCutHandler;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_83ee235bb1e64e94,
            mid_init$_2376fb9458a8cab3,
            mid_copySelf_c3378f4554ff6b45,
            mid_getAttribute_704a5bee58538972,
            mid_getCell_8dd9c197139bedc4,
            mid_getCloseCuts_61904aad38223443,
            mid_getCut_24c5633e830ec593,
            mid_getMinus_c3378f4554ff6b45,
            mid_getParent_c3378f4554ff6b45,
            mid_getPlus_c3378f4554ff6b45,
            mid_insertCut_51737f919fe0cf72,
            mid_insertInTree_254fe1807762a1b9,
            mid_merge_c0fb7b9ce803d4f3,
            mid_pruneAroundConvexCell_5609764ef0441416,
            mid_setAttribute_83ee235bb1e64e94,
            mid_split_ef9a8149f8c25d8e,
            mid_visit_3be3464833921e33,
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
