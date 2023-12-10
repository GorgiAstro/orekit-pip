#ifndef org_hipparchus_geometry_partitioning_AbstractRegion_H
#define org_hipparchus_geometry_partitioning_AbstractRegion_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      namespace partitioning {
        class AbstractRegion;
        class SubHyperplane;
        class Transform;
        class Region;
        class Region$Location;
        class Hyperplane;
        class BoundaryProjection;
        class BSPTree;
      }
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
            mid_init$_52fbfb23c628acd5,
            mid_applyTransform_125abe747efd3c42,
            mid_buildNew_21f87056dd177f50,
            mid_checkPoint_50307f10d8b0681b,
            mid_checkPoint_9b5450307493913f,
            mid_contains_699b13c84f9f9ff1,
            mid_copySelf_54d714b9b8ebd2c9,
            mid_getBarycenter_e164db6eb4ec1f00,
            mid_getBoundarySize_dff5885c2c873297,
            mid_getSize_dff5885c2c873297,
            mid_getTolerance_dff5885c2c873297,
            mid_getTree_4457617bb6ed0c9d,
            mid_intersection_208a723630302f7b,
            mid_isEmpty_b108b35ef48e27bd,
            mid_isEmpty_06c832607c1f3329,
            mid_isFull_b108b35ef48e27bd,
            mid_isFull_06c832607c1f3329,
            mid_projectToBoundary_e9baadaaf6c2e7eb,
            mid_checkPoint_a8d4dfa8636caf0b,
            mid_checkPoint_c5f03bf79b0dd0ad,
            mid_computeGeometricalProperties_0fa09c18fee449d5,
            mid_setBarycenter_ebc8a8ff77d92c6e,
            mid_setBarycenter_8567c8fd9fae1122,
            mid_setSize_17db3a65980d3441,
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
