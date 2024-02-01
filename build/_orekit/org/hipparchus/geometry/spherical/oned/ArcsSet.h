#ifndef org_hipparchus_geometry_spherical_oned_ArcsSet_H
#define org_hipparchus_geometry_spherical_oned_ArcsSet_H

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
    class Collection;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class BoundaryProjection;
        class BSPTree;
        class SubHyperplane;
      }
      namespace spherical {
        namespace oned {
          class ArcsSet;
          class Sphere1D;
          class Arc;
          class ArcsSet$InconsistentStateAt2PiWrapping;
          class ArcsSet$Split;
        }
      }
      class Point;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          class ArcsSet : public ::org::hipparchus::geometry::partitioning::AbstractRegion {
           public:
            enum {
              mid_init$_1ad26e8c8c0cd65b,
              mid_init$_83911a7bf86bdb7d,
              mid_init$_457d0c956b0d24c0,
              mid_init$_bd28dc6055dc5bbd,
              mid_asList_d751c1a57012b438,
              mid_buildNew_a140a584558c5d8b,
              mid_iterator_4f613ccd2f803b4b,
              mid_projectToBoundary_5e847af8c64bed2a,
              mid_split_dfd39b6ce0109805,
              mid_computeGeometricalProperties_ff7cb6c242604316,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArcsSet(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArcsSet(const ArcsSet& obj) : ::org::hipparchus::geometry::partitioning::AbstractRegion(obj) {}

            ArcsSet(jdouble);
            ArcsSet(const ::org::hipparchus::geometry::partitioning::BSPTree &, jdouble);
            ArcsSet(const ::java::util::Collection &, jdouble);
            ArcsSet(jdouble, jdouble, jdouble);

            ::java::util::List asList() const;
            ArcsSet buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree &) const;
            ::java::util::Iterator iterator() const;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection projectToBoundary(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split split(const ::org::hipparchus::geometry::spherical::oned::Arc &) const;
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
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(ArcsSet);
          extern PyTypeObject *PY_TYPE(ArcsSet);

          class t_ArcsSet {
          public:
            PyObject_HEAD
            ArcsSet object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_ArcsSet *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ArcsSet&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ArcsSet&, PyTypeObject *, PyTypeObject *);
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
