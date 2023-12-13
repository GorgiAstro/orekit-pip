#ifndef org_hipparchus_geometry_euclidean_threed_FieldLine_H
#define org_hipparchus_geometry_euclidean_threed_FieldLine_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
          class FieldLine;
        }
      }
    }
    class CalculusFieldElement;
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
              mid_init$_fc292051dd180810,
              mid_closestPoint_530a74c0248a60b8,
              mid_contains_f7871dc9552d25d0,
              mid_contains_82d995e738c9e027,
              mid_distance_69aa7759254493eb,
              mid_distance_f475fa22e4944acc,
              mid_distance_40bcacaf1f5c8f3e,
              mid_getAbscissa_f475fa22e4944acc,
              mid_getAbscissa_40bcacaf1f5c8f3e,
              mid_getDirection_ff5ac73a7b43eddd,
              mid_getOrigin_ff5ac73a7b43eddd,
              mid_getTolerance_b74f83833fdad017,
              mid_intersection_530a74c0248a60b8,
              mid_isSimilarTo_03c53b554cf7b8cc,
              mid_pointAt_c6e22cf5a7df5c99,
              mid_pointAt_0e25f993119a02fa,
              mid_reset_e67380c15d7bb85a,
              mid_revert_8b601b81eef3c976,
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
