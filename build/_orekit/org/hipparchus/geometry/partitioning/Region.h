#ifndef org_hipparchus_geometry_partitioning_Region_H
#define org_hipparchus_geometry_partitioning_Region_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class Region;
        class Region$Location;
        class BoundaryProjection;
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
            mid_buildNew_017f430783bf20c2,
            mid_checkPoint_50307f10d8b0681b,
            mid_contains_699b13c84f9f9ff1,
            mid_copySelf_b72f8ac992e26582,
            mid_getBarycenter_e164db6eb4ec1f00,
            mid_getBoundarySize_dff5885c2c873297,
            mid_getSize_dff5885c2c873297,
            mid_getTree_4457617bb6ed0c9d,
            mid_intersection_208a723630302f7b,
            mid_isEmpty_b108b35ef48e27bd,
            mid_isEmpty_06c832607c1f3329,
            mid_isFull_b108b35ef48e27bd,
            mid_isFull_06c832607c1f3329,
            mid_projectToBoundary_e9baadaaf6c2e7eb,
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
