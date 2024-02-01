#ifndef org_hipparchus_geometry_euclidean_twod_PolygonsSet_H
#define org_hipparchus_geometry_euclidean_twod_PolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Euclidean2D;
          class Vector2D;
          class PolygonsSet;
        }
        namespace oned {
          class Euclidean1D;
        }
      }
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
      }
    }
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
              mid_init$_1ad26e8c8c0cd65b,
              mid_init$_13c8781402997e7b,
              mid_init$_83911a7bf86bdb7d,
              mid_init$_457d0c956b0d24c0,
              mid_init$_edc3692668d70430,
              mid_buildNew_d65d8015a754d547,
              mid_getVertices_3148fb2528a2077d,
              mid_computeGeometricalProperties_ff7cb6c242604316,
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
