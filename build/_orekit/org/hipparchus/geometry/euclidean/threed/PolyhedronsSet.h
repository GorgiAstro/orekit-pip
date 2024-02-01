#ifndef org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H
#define org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class PolyhedronsSet$BRep;
          class Line;
          class Rotation;
          class Euclidean3D;
          class Vector3D;
          class PolyhedronsSet;
        }
        namespace twod {
          class Euclidean2D;
        }
      }
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
      }
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
              mid_init$_1ad26e8c8c0cd65b,
              mid_init$_d1eb831c560f7a84,
              mid_init$_83911a7bf86bdb7d,
              mid_init$_457d0c956b0d24c0,
              mid_init$_14f88b2d4dcff36a,
              mid_init$_a3fea7634f569ef9,
              mid_buildNew_8e97708e063ea4d1,
              mid_firstIntersection_2a83991eb1314ee9,
              mid_getBRep_962634ebcba7d012,
              mid_rotate_63bdd2668b712b4a,
              mid_translate_22e928e5df94d5c5,
              mid_computeGeometricalProperties_ff7cb6c242604316,
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
