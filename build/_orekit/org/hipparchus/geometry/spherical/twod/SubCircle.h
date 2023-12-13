#ifndef org_hipparchus_geometry_spherical_twod_SubCircle_H
#define org_hipparchus_geometry_spherical_twod_SubCircle_H

#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane$SplitSubHyperplane;
        class Hyperplane;
        class Region;
      }
      namespace spherical {
        namespace oned {
          class Sphere1D;
        }
        namespace twod {
          class Sphere2D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          class SubCircle : public ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane {
           public:
            enum {
              mid_init$_6ae2db4be0bbe390,
              mid_split_30674c36ae2fcf9f,
              mid_buildNew_3d919cfe5b11c3d0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubCircle(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubCircle(const SubCircle& obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {}

            SubCircle(const ::org::hipparchus::geometry::partitioning::Hyperplane &, const ::org::hipparchus::geometry::partitioning::Region &);

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
      namespace spherical {
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(SubCircle);
          extern PyTypeObject *PY_TYPE(SubCircle);

          class t_SubCircle {
          public:
            PyObject_HEAD
            SubCircle object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_SubCircle *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SubCircle&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SubCircle&, PyTypeObject *, PyTypeObject *);
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
