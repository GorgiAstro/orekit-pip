#ifndef org_hipparchus_geometry_partitioning_Region_H
#define org_hipparchus_geometry_partitioning_Region_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Region;
        class Region$Location;
        class BSPTree;
        class SubHyperplane;
        class BoundaryProjection;
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
            mid_buildNew_c5623595bd3a3a84,
            mid_checkPoint_153fabdeca87a5c4,
            mid_contains_b25943163cbdf489,
            mid_copySelf_9552c312bc09a7e5,
            mid_getBarycenter_268784e47ab908a6,
            mid_getBoundarySize_456d9a2f64d6b28d,
            mid_getSize_456d9a2f64d6b28d,
            mid_getTree_5bed1988454faad9,
            mid_intersection_55f41ec2172e02d3,
            mid_isEmpty_e470b6d9e0d979db,
            mid_isEmpty_257992acaacae48a,
            mid_isFull_e470b6d9e0d979db,
            mid_isFull_257992acaacae48a,
            mid_projectToBoundary_a3932f0f8ec705f8,
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
