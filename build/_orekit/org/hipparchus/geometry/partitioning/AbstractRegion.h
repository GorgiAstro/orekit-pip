#ifndef org_hipparchus_geometry_partitioning_AbstractRegion_H
#define org_hipparchus_geometry_partitioning_AbstractRegion_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Region$Location;
        class SubHyperplane;
        class Transform;
        class AbstractRegion;
        class Hyperplane;
        class BoundaryProjection;
        class Region;
        class BSPTree;
      }
      class Point;
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
            mid_init$_64db3602bb13fcb5,
            mid_applyTransform_684309aa9a3df0d0,
            mid_buildNew_6e3699f82e9de739,
            mid_checkPoint_97aee1e2a4e02b02,
            mid_checkPoint_2d47c74d96169553,
            mid_contains_ecd31bc5520bb9ef,
            mid_copySelf_9eae9a77af60b946,
            mid_getBarycenter_abb5df84e8ab06b8,
            mid_getBoundarySize_557b8123390d8d0c,
            mid_getSize_557b8123390d8d0c,
            mid_getTolerance_557b8123390d8d0c,
            mid_getTree_95b875058c69b395,
            mid_intersection_90bd3924ff8382db,
            mid_isEmpty_89b302893bdbe1f1,
            mid_isEmpty_c5db5624507e8c83,
            mid_isFull_89b302893bdbe1f1,
            mid_isFull_c5db5624507e8c83,
            mid_projectToBoundary_76fb0949df043b81,
            mid_checkPoint_83334f71fe202e99,
            mid_checkPoint_fefefdeec93351ea,
            mid_computeGeometricalProperties_0640e6acf969ed28,
            mid_setBarycenter_21c52cb9d5c70940,
            mid_setBarycenter_d0a7b63ee924ba4e,
            mid_setSize_10f281d777284cea,
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
