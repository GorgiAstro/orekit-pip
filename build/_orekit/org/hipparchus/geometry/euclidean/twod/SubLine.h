#ifndef org_hipparchus_geometry_euclidean_twod_SubLine_H
#define org_hipparchus_geometry_euclidean_twod_SubLine_H

#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
        }
        namespace twod {
          class Segment;
          class Vector2D;
          class Euclidean2D;
          class SubLine;
        }
      }
      namespace partitioning {
        class Hyperplane;
        class SubHyperplane$SplitSubHyperplane;
        class Region;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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

          class SubLine : public ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane {
           public:
            enum {
              mid_init$_1bab0430894827a0,
              mid_init$_08c86faf9fec8eaa,
              mid_init$_b2fa07e96193ae69,
              mid_getSegments_0d9551367f7ecdef,
              mid_intersection_0b14c58c51fe99fb,
              mid_split_ae8e2bbf2389e86e,
              mid_buildNew_0ffd07a16ed53139,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubLine(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubLine(const SubLine& obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {}

            SubLine(const ::org::hipparchus::geometry::euclidean::twod::Segment &);
            SubLine(const ::org::hipparchus::geometry::partitioning::Hyperplane &, const ::org::hipparchus::geometry::partitioning::Region &);
            SubLine(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, jdouble);

            ::java::util::List getSegments() const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D intersection(const SubLine &, jboolean) const;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane split(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
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
          extern PyType_Def PY_TYPE_DEF(SubLine);
          extern PyTypeObject *PY_TYPE(SubLine);

          class t_SubLine {
          public:
            PyObject_HEAD
            SubLine object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_SubLine *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SubLine&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SubLine&, PyTypeObject *, PyTypeObject *);
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
