#ifndef org_hipparchus_geometry_partitioning_AbstractRegion_H
#define org_hipparchus_geometry_partitioning_AbstractRegion_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace partitioning {
        class Transform;
        class Region;
        class Hyperplane;
        class Region$Location;
        class AbstractRegion;
        class BSPTree;
        class SubHyperplane;
        class BoundaryProjection;
      }
      class Vector;
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
            mid_init$_0ac82b5b7c238a40,
            mid_applyTransform_77825de2d339997c,
            mid_buildNew_3384298d17fb447d,
            mid_checkPoint_153fabdeca87a5c4,
            mid_checkPoint_72bc5cad7c856665,
            mid_contains_b25943163cbdf489,
            mid_copySelf_acb6092c5eac86b3,
            mid_getBarycenter_268784e47ab908a6,
            mid_getBoundarySize_456d9a2f64d6b28d,
            mid_getSize_456d9a2f64d6b28d,
            mid_getTolerance_456d9a2f64d6b28d,
            mid_getTree_5bed1988454faad9,
            mid_intersection_55f41ec2172e02d3,
            mid_isEmpty_e470b6d9e0d979db,
            mid_isEmpty_257992acaacae48a,
            mid_isFull_e470b6d9e0d979db,
            mid_isFull_257992acaacae48a,
            mid_projectToBoundary_a3932f0f8ec705f8,
            mid_setSize_77e0f9a1f260e2e5,
            mid_checkPoint_fc1bfdf07c2c223f,
            mid_checkPoint_c4fd9d1092ff2129,
            mid_computeGeometricalProperties_7ae3461a92a43152,
            mid_setBarycenter_757a0a52ad332378,
            mid_setBarycenter_0a3f49fb37fbe874,
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
