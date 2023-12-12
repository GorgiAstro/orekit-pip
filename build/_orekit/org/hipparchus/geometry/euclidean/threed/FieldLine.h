#ifndef org_hipparchus_geometry_euclidean_threed_FieldLine_H
#define org_hipparchus_geometry_euclidean_threed_FieldLine_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
          class FieldLine;
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
              mid_init$_4c55045f6a03c721,
              mid_closestPoint_d840ee208e084141,
              mid_contains_7a86ea6adaa11bf8,
              mid_contains_7ccf3b3f40d5fcd3,
              mid_distance_e26e605b64a5a41d,
              mid_distance_b2798c156647508e,
              mid_distance_a22927126b45d148,
              mid_getAbscissa_b2798c156647508e,
              mid_getAbscissa_a22927126b45d148,
              mid_getDirection_2d64addf4c3391d9,
              mid_getOrigin_2d64addf4c3391d9,
              mid_getTolerance_557b8123390d8d0c,
              mid_intersection_d840ee208e084141,
              mid_isSimilarTo_6be0c7436f0b164d,
              mid_pointAt_9465a023313b1d29,
              mid_pointAt_68e9ce281b70d410,
              mid_reset_b2e28a0995250182,
              mid_revert_713655f9399cdc2f,
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
