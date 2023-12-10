#ifndef org_hipparchus_geometry_euclidean_twod_PolygonsSet_H
#define org_hipparchus_geometry_euclidean_twod_PolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class BSPTree;
      }
      namespace euclidean {
        namespace twod {
          class Euclidean2D;
          class PolygonsSet;
          class Vector2D;
        }
        namespace oned {
          class Euclidean1D;
        }
      }
    }
  }
}
namespace java {
  namespace util {
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
        namespace twod {

          class PolygonsSet : public ::org::hipparchus::geometry::partitioning::AbstractRegion {
           public:
            enum {
              mid_init$_17db3a65980d3441,
              mid_init$_1ff06be7733ea843,
              mid_init$_748cd2c51a955d77,
              mid_init$_1f4d55383238fbb5,
              mid_init$_cf6593b07e7e8f64,
              mid_buildNew_977d6495eb74d6fe,
              mid_getVertices_d1ff93c1a48f2b3f,
              mid_computeGeometricalProperties_0fa09c18fee449d5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PolygonsSet(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PolygonsSet(const PolygonsSet& obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {}

            PolygonsSet(jdouble);
            PolygonsSet(jdouble, const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > &);
            PolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree &, jdouble);
            PolygonsSet(const ::java::util::Collection &, jdouble);
            PolygonsSet(jdouble, jdouble, jdouble, jdouble, jdouble);

            PolygonsSet buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > getVertices() const;
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
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(PolygonsSet);
          extern PyTypeObject *PY_TYPE(PolygonsSet);

          class t_PolygonsSet {
          public:
            PyObject_HEAD
            PolygonsSet object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PolygonsSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PolygonsSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PolygonsSet&, PyTypeObject *, PyTypeObject *);
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
