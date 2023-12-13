#ifndef org_hipparchus_geometry_partitioning_Region_H
#define org_hipparchus_geometry_partitioning_Region_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
        class BoundaryProjection;
        class Region$Location;
        class Region;
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
            mid_buildNew_4546e25898f209c3,
            mid_checkPoint_b7d493d130487009,
            mid_contains_5b003aec900d5457,
            mid_copySelf_3698fd1911856e70,
            mid_getBarycenter_4b90e5ca2d7b0c50,
            mid_getBoundarySize_b74f83833fdad017,
            mid_getSize_b74f83833fdad017,
            mid_getTree_cfe73ad9acef8c7c,
            mid_intersection_263a5980faef7dc3,
            mid_isEmpty_9ab94ac1dc23b105,
            mid_isEmpty_0c8ea3f1072db098,
            mid_isFull_9ab94ac1dc23b105,
            mid_isFull_0c8ea3f1072db098,
            mid_projectToBoundary_dcacfc1bc354b9c2,
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
