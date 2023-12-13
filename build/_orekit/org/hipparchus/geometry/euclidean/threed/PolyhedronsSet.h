#ifndef org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H
#define org_hipparchus_geometry_euclidean_threed_PolyhedronsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BSPTree;
        class SubHyperplane;
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class PolyhedronsSet$BRep;
          class Line;
          class Euclidean3D;
          class Rotation;
          class PolyhedronsSet;
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
              mid_init$_8ba9fe7a847cecad,
              mid_init$_5c8a1dde536da6df,
              mid_init$_936ab5386aba1bbf,
              mid_init$_16deaf08470737f9,
              mid_init$_3ec226cbba8fb999,
              mid_init$_f52a2398ff588db1,
              mid_buildNew_770980e770be1770,
              mid_firstIntersection_72c56cde01db3a53,
              mid_getBRep_b209c5db604582f1,
              mid_rotate_0fb78dbfaa114bbd,
              mid_translate_2e8219aa47d34a5a,
              mid_computeGeometricalProperties_a1fa5dae97ea5ed2,
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
