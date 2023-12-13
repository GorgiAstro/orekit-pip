#ifndef org_hipparchus_geometry_partitioning_BSPTree_H
#define org_hipparchus_geometry_partitioning_BSPTree_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTreeVisitor;
        class BSPTree;
        class SubHyperplane;
        class BSPTree$LeafMerger;
        class Hyperplane;
        class BSPTree$VanishingCutHandler;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_55f3c894852c27a3,
            mid_init$_935c58c45f94c5fa,
            mid_copySelf_f839a360566776b0,
            mid_getAttribute_541690f9ee81d3ad,
            mid_getCell_2cf328ec4679b7e5,
            mid_getCloseCuts_d02a7a3faed5cf00,
            mid_getCut_0417f9f9ce6ee466,
            mid_getMinus_f839a360566776b0,
            mid_getParent_f839a360566776b0,
            mid_getPlus_f839a360566776b0,
            mid_insertCut_806ecfbca1984226,
            mid_insertInTree_9946f3d4e49f1069,
            mid_merge_e39f58f6e5885e63,
            mid_pruneAroundConvexCell_c149c90734e740da,
            mid_setAttribute_55f3c894852c27a3,
            mid_split_056ecd249b79ab3d,
            mid_visit_ad25ba9d976eb6ad,
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
