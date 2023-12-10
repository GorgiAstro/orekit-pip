#ifndef org_orekit_bodies_FieldEllipse_H
#define org_orekit_bodies_FieldEllipse_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
        namespace twod {
          class FieldVector2D;
        }
      }
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
  namespace orekit {
    namespace bodies {

      class FieldEllipse : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ae772aa1e16db643,
          mid_getA_e6d4d3215c30992a,
          mid_getB_e6d4d3215c30992a,
          mid_getCenter_5791f80683b5227e,
          mid_getCenterOfCurvature_5e94b047a6786e99,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getU_5791f80683b5227e,
          mid_getV_5791f80683b5227e,
          mid_pointAt_3023f195d3eecf7e,
          mid_projectToEllipse_dc7eea29a4d4ad51,
          mid_projectToEllipse_5e94b047a6786e99,
          mid_toPlane_cc9be632777be51e,
          mid_toSpace_f08c9c2e7b3f66a1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldEllipse(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldEllipse(const FieldEllipse& obj) : ::java::lang::Object(obj) {}

        FieldEllipse(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::Frame &);

        ::org::hipparchus::CalculusFieldElement getA() const;
        ::org::hipparchus::CalculusFieldElement getB() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getCenter() const;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D &) const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getU() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getV() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D pointAt(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates projectToEllipse(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D &) const;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D toPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D toSpace(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(FieldEllipse);
      extern PyTypeObject *PY_TYPE(FieldEllipse);

      class t_FieldEllipse {
      public:
        PyObject_HEAD
        FieldEllipse object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldEllipse *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldEllipse&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldEllipse&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
