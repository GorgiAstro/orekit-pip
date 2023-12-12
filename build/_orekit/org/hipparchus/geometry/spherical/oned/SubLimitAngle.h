#ifndef org_hipparchus_geometry_spherical_oned_SubLimitAngle_H
#define org_hipparchus_geometry_spherical_oned_SubLimitAngle_H

#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class Sphere1D;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          class SubLimitAngle : public ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane {
           public:
            enum {
              mid_init$_08c86faf9fec8eaa,
              mid_getSize_557b8123390d8d0c,
              mid_isEmpty_89b302893bdbe1f1,
              mid_split_ae8e2bbf2389e86e,
              mid_buildNew_0ffd07a16ed53139,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubLimitAngle(jobject obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubLimitAngle(const SubLimitAngle& obj) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(obj) {}

            SubLimitAngle(const ::org::hipparchus::geometry::partitioning::Hyperplane &, const ::org::hipparchus::geometry::partitioning::Region &);

            jdouble getSize() const;
            jboolean isEmpty() const;
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
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(SubLimitAngle);
          extern PyTypeObject *PY_TYPE(SubLimitAngle);

          class t_SubLimitAngle {
          public:
            PyObject_HEAD
            SubLimitAngle object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_SubLimitAngle *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SubLimitAngle&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SubLimitAngle&, PyTypeObject *, PyTypeObject *);
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
