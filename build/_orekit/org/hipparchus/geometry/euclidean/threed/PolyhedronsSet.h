#ifndef org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H
#define org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class PolyhedronsSet$BRep;
          class Euclidean3D;
          class PolyhedronsSet;
          class Vector3D;
          class Rotation;
          class Line;
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
              mid_init$_77e0f9a1f260e2e5,
              mid_init$_4535d6cb9170f124,
              mid_init$_3e72dd0bd3a69a59,
              mid_init$_b832ff2fd1b54c87,
              mid_init$_983b22c4b36f878a,
              mid_init$_c618f65720f1b668,
              mid_buildNew_d63bb7e6b124b271,
              mid_firstIntersection_35b9df4a7109e3eb,
              mid_getBRep_b9db630e46c093bb,
              mid_rotate_6640f6f7a491ea06,
              mid_translate_3b9027e260eba8fe,
              mid_computeGeometricalProperties_7ae3461a92a43152,
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
