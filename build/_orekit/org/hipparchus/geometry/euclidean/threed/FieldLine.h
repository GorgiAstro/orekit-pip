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
              mid_init$_85c6fbe901c5f370,
              mid_closestPoint_80232c7072707623,
              mid_contains_f61e2266bee942fa,
              mid_contains_c8fb5394ceb559de,
              mid_distance_0a7109b183d5c7e5,
              mid_distance_561f21e3ac14fa34,
              mid_distance_5f51423dbe425445,
              mid_getAbscissa_561f21e3ac14fa34,
              mid_getAbscissa_5f51423dbe425445,
              mid_getDirection_5791f80683b5227e,
              mid_getOrigin_5791f80683b5227e,
              mid_getTolerance_456d9a2f64d6b28d,
              mid_intersection_80232c7072707623,
              mid_isSimilarTo_758d116bd2fac12a,
              mid_pointAt_14b0f58c06667f17,
              mid_pointAt_3023f195d3eecf7e,
              mid_reset_d35296e3a83f651e,
              mid_revert_40eb47b2eaf09cd1,
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
