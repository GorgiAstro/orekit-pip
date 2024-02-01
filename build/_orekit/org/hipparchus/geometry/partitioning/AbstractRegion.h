#ifndef org_hipparchus_geometry_partitioning_AbstractRegion_H
#define org_hipparchus_geometry_partitioning_AbstractRegion_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BoundaryProjection;
        class Region$Location;
        class Hyperplane;
        class Transform;
        class BSPTree;
        class AbstractRegion;
        class Region;
        class SubHyperplane;
      }
      class Vector;
      class Point;
      class Space;
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

        class AbstractRegion : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c1549a35f56f5172,
            mid_applyTransform_8d90c95c02de34b1,
            mid_buildNew_1ca75e0dc0acb302,
            mid_checkPoint_f97c307d662f98c4,
            mid_checkPoint_6135f4b23c3db50f,
            mid_contains_0c83c5cab31e7721,
            mid_copySelf_55f0b52ab34f789e,
            mid_getBarycenter_e843ca29d3ae6a7a,
            mid_getBoundarySize_9981f74b2d109da6,
            mid_getSize_9981f74b2d109da6,
            mid_getTolerance_9981f74b2d109da6,
            mid_getTree_1fb787d65f399ae6,
            mid_intersection_f2a90cc714d34154,
            mid_isEmpty_eee3de00fe971136,
            mid_isEmpty_a99a68d4ebd480fd,
            mid_isFull_eee3de00fe971136,
            mid_isFull_a99a68d4ebd480fd,
            mid_projectToBoundary_5e847af8c64bed2a,
            mid_setSize_1ad26e8c8c0cd65b,
            mid_checkPoint_ec6ed373c47c3060,
            mid_checkPoint_d7a88ff5bb68233f,
            mid_computeGeometricalProperties_ff7cb6c242604316,
            mid_setBarycenter_6471499179a83603,
            mid_setBarycenter_08123e5563ae2ecd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractRegion(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractRegion(const AbstractRegion& obj) : ::java::lang::Object(obj) {}

          AbstractRegion(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > &, jdouble);

          AbstractRegion applyTransform(const ::org::hipparchus::geometry::partitioning::Transform &) const;
          AbstractRegion buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
          ::org::hipparchus::geometry::partitioning::Region$Location checkPoint(const ::org::hipparchus::geometry::Point &) const;
          ::org::hipparchus::geometry::partitioning::Region$Location checkPoint(const ::org::hipparchus::geometry::Vector &) const;
          jboolean contains(const ::org::hipparchus::geometry::partitioning::Region &) const;
          AbstractRegion copySelf() const;
          ::org::hipparchus::geometry::Point getBarycenter() const;
          jdouble getBoundarySize() const;
          jdouble getSize() const;
          jdouble getTolerance() const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractRegion);
        extern PyTypeObject *PY_TYPE(AbstractRegion);

        class t_AbstractRegion {
        public:
          PyObject_HEAD
          AbstractRegion object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_AbstractRegion *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractRegion&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractRegion&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
