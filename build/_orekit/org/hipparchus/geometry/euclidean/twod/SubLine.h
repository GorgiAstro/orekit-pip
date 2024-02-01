#ifndef org_hipparchus_geometry_euclidean_twod_SubLine_H
#define org_hipparchus_geometry_euclidean_twod_SubLine_H

#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Segment;
          class Vector2D;
          class Euclidean2D;
          class SubLine;
        }
        namespace oned {
          class Euclidean1D;
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
              mid_init$_5e3e37b9bfc2bdc3,
              mid_init$_5428b0a00a62bde3,
              mid_init$_7f7842afd4d898dc,
              mid_getSegments_d751c1a57012b438,
              mid_intersection_b7cab121feeb7e2e,
              mid_split_b587049e19682418,
              mid_buildNew_35b28ef87fdef21f,
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
