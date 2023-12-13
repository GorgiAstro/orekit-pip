#ifndef org_hipparchus_geometry_partitioning_AbstractRegion_H
#define org_hipparchus_geometry_partitioning_AbstractRegion_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      namespace partitioning {
        class AbstractRegion;
        class BSPTree;
        class SubHyperplane;
        class Hyperplane;
        class Transform;
        class BoundaryProjection;
        class Region$Location;
        class Region;
      }
      class Point;
      class Vector;
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
            mid_init$_28c58d4b5ab18011,
            mid_applyTransform_66e0444279d1d22f,
            mid_buildNew_a544652f009b15b3,
            mid_checkPoint_b7d493d130487009,
            mid_checkPoint_76eec5df4f8e9f91,
            mid_contains_5b003aec900d5457,
            mid_copySelf_120f692cdf258b6b,
            mid_getBarycenter_4b90e5ca2d7b0c50,
            mid_getBoundarySize_b74f83833fdad017,
            mid_getSize_b74f83833fdad017,
            mid_getTolerance_b74f83833fdad017,
            mid_getTree_cfe73ad9acef8c7c,
            mid_intersection_263a5980faef7dc3,
            mid_isEmpty_9ab94ac1dc23b105,
            mid_isEmpty_0c8ea3f1072db098,
            mid_isFull_9ab94ac1dc23b105,
            mid_isFull_0c8ea3f1072db098,
            mid_projectToBoundary_dcacfc1bc354b9c2,
            mid_checkPoint_ac92bd09349b2beb,
            mid_checkPoint_82d45aa9cd8e9e11,
            mid_computeGeometricalProperties_a1fa5dae97ea5ed2,
            mid_setBarycenter_2b4eca658e1fd4fe,
            mid_setBarycenter_4a734be168570bee,
            mid_setSize_8ba9fe7a847cecad,
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
