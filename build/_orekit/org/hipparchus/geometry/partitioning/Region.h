#ifndef org_hipparchus_geometry_partitioning_Region_H
#define org_hipparchus_geometry_partitioning_Region_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BoundaryProjection;
        class Region$Location;
        class BSPTree;
        class Region;
        class SubHyperplane;
      }
      class Point;
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

        class Region : public ::java::lang::Object {
         public:
          enum {
            mid_buildNew_2630aa1a312e22d6,
            mid_checkPoint_f97c307d662f98c4,
            mid_contains_0c83c5cab31e7721,
            mid_copySelf_3069dff3a674defc,
            mid_getBarycenter_e843ca29d3ae6a7a,
            mid_getBoundarySize_9981f74b2d109da6,
            mid_getSize_9981f74b2d109da6,
            mid_getTree_1fb787d65f399ae6,
            mid_intersection_f2a90cc714d34154,
            mid_isEmpty_eee3de00fe971136,
            mid_isEmpty_a99a68d4ebd480fd,
            mid_isFull_eee3de00fe971136,
            mid_isFull_a99a68d4ebd480fd,
            mid_projectToBoundary_5e847af8c64bed2a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Region(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Region(const Region& obj) : ::java::lang::Object(obj) {}

          Region buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
          ::org::hipparchus::geometry::partitioning::Region$Location checkPoint(const ::org::hipparchus::geometry::Point &) const;
          jboolean contains(const Region &) const;
          Region copySelf() const;
          ::org::hipparchus::geometry::Point getBarycenter() const;
          jdouble getBoundarySize() const;
          jdouble getSize() const;
          ::org::hipparchus::geometry::partitioning::BSPTree getTree(jboolean) const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane &) const;
          jboolean isEmpty() const;
          jboolean isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
          jboolean isFull() const;
          jboolean isFull(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection projectToBoundary(const ::org::hipparchus::geometry::Point &) const;
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
        extern PyType_Def PY_TYPE_DEF(Region);
        extern PyTypeObject *PY_TYPE(Region);

        class t_Region {
        public:
          PyObject_HEAD
          Region object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Region *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Region&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Region&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
