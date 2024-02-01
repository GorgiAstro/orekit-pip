#ifndef org_hipparchus_geometry_euclidean_threed_FieldLine_H
#define org_hipparchus_geometry_euclidean_threed_FieldLine_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldLine;
          class Vector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
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
              mid_init$_61231ec3563f33c2,
              mid_closestPoint_982f3c7e14164ce8,
              mid_contains_f6d8940437db3446,
              mid_contains_decdc24b3aebe77a,
              mid_distance_638d706d80819744,
              mid_distance_aa19eca086a185fe,
              mid_distance_1cfc77d18e0355ee,
              mid_getAbscissa_aa19eca086a185fe,
              mid_getAbscissa_1cfc77d18e0355ee,
              mid_getDirection_d1b42a6748e907f9,
              mid_getOrigin_d1b42a6748e907f9,
              mid_getTolerance_9981f74b2d109da6,
              mid_intersection_982f3c7e14164ce8,
              mid_isSimilarTo_35c55ea9632578f1,
              mid_pointAt_9fc2ffdb71a4cfdb,
              mid_pointAt_c2b058e1eb7a8988,
              mid_reset_45d220651e48f081,
              mid_revert_d5b9b48b2c4cd04f,
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
