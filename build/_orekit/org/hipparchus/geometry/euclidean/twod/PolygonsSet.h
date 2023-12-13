#ifndef org_hipparchus_geometry_euclidean_twod_PolygonsSet_H
#define org_hipparchus_geometry_euclidean_twod_PolygonsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
      }
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class PolygonsSet;
          class Euclidean2D;
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
              mid_init$_8ba9fe7a847cecad,
              mid_init$_42b4b0384e7885c8,
              mid_init$_936ab5386aba1bbf,
              mid_init$_16deaf08470737f9,
              mid_init$_aeb39721bc4af7d2,
              mid_buildNew_bda529a52bd5e417,
              mid_getVertices_cffdee33260f7ff8,
              mid_computeGeometricalProperties_a1fa5dae97ea5ed2,
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
