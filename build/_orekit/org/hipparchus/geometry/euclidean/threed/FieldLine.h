#ifndef org_hipparchus_geometry_euclidean_threed_FieldLine_H
#define org_hipparchus_geometry_euclidean_threed_FieldLine_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldLine;
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
      namespace euclidean {
        namespace threed {

          class FieldLine : public ::java::lang::Object {
           public:
            enum {
              mid_init$_23eb1e83466508cd,
              mid_closestPoint_465816f33f087bba,
              mid_contains_19ce44a30ac2c75e,
              mid_contains_ab4ed00ccf0defd6,
              mid_distance_4d5c9a83dec064bc,
              mid_distance_11b158fbf85bdc54,
              mid_distance_2f5dcdf943d50d31,
              mid_getAbscissa_11b158fbf85bdc54,
              mid_getAbscissa_2f5dcdf943d50d31,
              mid_getDirection_716f50c86ffc8da7,
              mid_getOrigin_716f50c86ffc8da7,
              mid_getTolerance_dff5885c2c873297,
              mid_intersection_465816f33f087bba,
              mid_isSimilarTo_e14dd382f7b52011,
              mid_pointAt_3e101a58a2527fdf,
              mid_pointAt_e0e563985265c470,
              mid_reset_67d015490dd313e3,
              mid_revert_8bd95f1b4afb6092,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldLine(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldLine(const FieldLine& obj) : ::java::lang::Object(obj) {}

            FieldLine(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, jdouble);

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D closestPoint(const FieldLine &) const;
            jboolean contains(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            jboolean contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::CalculusFieldElement distance(const FieldLine &) const;
            ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::CalculusFieldElement getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getDirection() const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getOrigin() const;
            jdouble getTolerance() const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D intersection(const FieldLine &) const;
            jboolean isSimilarTo(const FieldLine &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D pointAt(jdouble) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D pointAt(const ::org::hipparchus::CalculusFieldElement &) const;
            void reset(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
            FieldLine revert() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldLine);
          extern PyTypeObject *PY_TYPE(FieldLine);

          class t_FieldLine {
          public:
            PyObject_HEAD
            FieldLine object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldLine *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldLine&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldLine&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
