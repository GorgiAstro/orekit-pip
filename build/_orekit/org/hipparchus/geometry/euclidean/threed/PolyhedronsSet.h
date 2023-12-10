#ifndef org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H
#define org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class PolyhedronsSet$BRep;
          class Rotation;
          class PolyhedronsSet;
          class Line;
          class Vector3D;
          class Euclidean3D;
        }
        namespace twod {
          class Euclidean2D;
        }
      }
      namespace partitioning {
        class SubHyperplane;
        class BSPTree;
      }
    }
    namespace exception {
      class MathRuntimeException;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class PolyhedronsSet : public ::org::hipparchus::geometry::partitioning::AbstractRegion {
           public:
            enum {
              mid_init$_17db3a65980d3441,
              mid_init$_fabe76086a822e9e,
              mid_init$_748cd2c51a955d77,
              mid_init$_1f4d55383238fbb5,
              mid_init$_fc22ef365b06a732,
              mid_init$_e64bbe9910cbd659,
              mid_buildNew_20bbe3dcfa244809,
              mid_firstIntersection_505c363342ef9e07,
              mid_getBRep_56002d4c9835e187,
              mid_rotate_0d7142cf5cc58689,
              mid_translate_1f148067d6db6edf,
              mid_computeGeometricalProperties_0fa09c18fee449d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PolyhedronsSet(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PolyhedronsSet(const PolyhedronsSet& obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {}

            PolyhedronsSet(jdouble);
            PolyhedronsSet(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep &, jdouble);
            PolyhedronsSet(const ::org::hipparchus::geometry::partitioning::BSPTree &, jdouble);
            PolyhedronsSet(const ::java::util::Collection &, jdouble);
            PolyhedronsSet(const ::java::util::List &, const ::java::util::List &, jdouble);
            PolyhedronsSet(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            PolyhedronsSet buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
            ::org::hipparchus::geometry::partitioning::SubHyperplane firstIntersection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Line &) const;
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep getBRep() const;
            PolyhedronsSet rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &) const;
            PolyhedronsSet translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(PolyhedronsSet);
          extern PyTypeObject *PY_TYPE(PolyhedronsSet);

          class t_PolyhedronsSet {
          public:
            PyObject_HEAD
            PolyhedronsSet object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PolyhedronsSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PolyhedronsSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PolyhedronsSet&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
