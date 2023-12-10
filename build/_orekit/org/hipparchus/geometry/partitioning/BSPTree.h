#ifndef org_hipparchus_geometry_partitioning_BSPTree_H
#define org_hipparchus_geometry_partitioning_BSPTree_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class BSPTree$VanishingCutHandler;
        class Hyperplane;
        class BSPTree$LeafMerger;
        class BSPTree;
        class BSPTreeVisitor;
      }
      class Point;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_2990946c992aafed,
            mid_init$_a6616e5a16388e97,
            mid_copySelf_5bcc186ed7144178,
            mid_getAttribute_4d26fd885228c716,
            mid_getCell_090f24d48d539012,
            mid_getCloseCuts_fdcaf1bcc15bca5f,
            mid_getCut_6e34449919366687,
            mid_getMinus_5bcc186ed7144178,
            mid_getParent_5bcc186ed7144178,
            mid_getPlus_5bcc186ed7144178,
            mid_insertCut_5bc340c02d9ac484,
            mid_insertInTree_0daf8859736f87dd,
            mid_merge_dfbabc273fbcf8e1,
            mid_pruneAroundConvexCell_eef8f25b38372685,
            mid_setAttribute_2990946c992aafed,
            mid_split_a6b6b20f5441afbd,
            mid_visit_f87f01e6869287b2,
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
