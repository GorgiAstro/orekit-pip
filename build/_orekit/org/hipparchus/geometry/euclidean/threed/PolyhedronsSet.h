#ifndef org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H
#define org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class BSPTree;
      }
      namespace euclidean {
        namespace threed {
          class Line;
          class Vector3D;
          class Rotation;
          class Euclidean3D;
          class PolyhedronsSet;
          class PolyhedronsSet$BRep;
        }
        namespace twod {
          class Euclidean2D;
        }
      }
    }
    namespace exception {
      class MathRuntimeException;
    }
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
              mid_init$_10f281d777284cea,
              mid_init$_3c57d2e720eaa4f8,
              mid_init$_546559a08b08816f,
              mid_init$_bdacd7c5506b494c,
              mid_init$_b7afa53d597eefdc,
              mid_init$_c0cf786cd30233c5,
              mid_buildNew_ad25d981bf0661ee,
              mid_firstIntersection_e41ce56ec01ebfa0,
              mid_getBRep_7dd4c2a86e6aca17,
              mid_rotate_84307c85cd32152b,
              mid_translate_2477f00f88909b27,
              mid_computeGeometricalProperties_0640e6acf969ed28,
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
