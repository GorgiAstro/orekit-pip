#ifndef org_hipparchus_geometry_partitioning_BSPTree_H
#define org_hipparchus_geometry_partitioning_BSPTree_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace partitioning {
        class Hyperplane;
        class BSPTree$LeafMerger;
        class BSPTreeVisitor;
        class BSPTree;
        class BSPTree$VanishingCutHandler;
        class SubHyperplane;
      }
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
            mid_init$_7ae3461a92a43152,
            mid_init$_7ca0d9438822cb0b,
            mid_init$_d7acb37d69da303f,
            mid_copySelf_ec08d7579464d8a2,
            mid_getAttribute_dfd7647d9110ac9f,
            mid_getCell_4ea49dc3d1d970a9,
            mid_getCloseCuts_e422c0b808638456,
            mid_getCut_a66e04f05d5608cc,
            mid_getMinus_ec08d7579464d8a2,
            mid_getParent_ec08d7579464d8a2,
            mid_getPlus_ec08d7579464d8a2,
            mid_insertCut_b99f508aafd89c77,
            mid_insertInTree_fbac4d079e23ef4e,
            mid_merge_d7b304bb164ebb5e,
            mid_pruneAroundConvexCell_378b9a70983ca2dd,
            mid_setAttribute_7ca0d9438822cb0b,
            mid_split_543eb723c89dfca4,
            mid_visit_7ce3dc52f494910d,
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
