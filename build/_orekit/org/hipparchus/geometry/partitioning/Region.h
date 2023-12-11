#ifndef org_hipparchus_geometry_partitioning_Region_H
#define org_hipparchus_geometry_partitioning_Region_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Region$Location;
        class SubHyperplane;
        class BoundaryProjection;
        class Region;
        class BSPTree;
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
            mid_buildNew_37b48e8bc9bf7f8e,
            mid_checkPoint_97aee1e2a4e02b02,
            mid_contains_ecd31bc5520bb9ef,
            mid_copySelf_fd006079784937f2,
            mid_getBarycenter_abb5df84e8ab06b8,
            mid_getBoundarySize_557b8123390d8d0c,
            mid_getSize_557b8123390d8d0c,
            mid_getTree_95b875058c69b395,
            mid_intersection_90bd3924ff8382db,
            mid_isEmpty_89b302893bdbe1f1,
            mid_isEmpty_c5db5624507e8c83,
            mid_isFull_89b302893bdbe1f1,
            mid_isFull_c5db5624507e8c83,
            mid_projectToBoundary_76fb0949df043b81,
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
