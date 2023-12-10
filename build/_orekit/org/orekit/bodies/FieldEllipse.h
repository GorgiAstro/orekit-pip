#ifndef org_orekit_bodies_FieldEllipse_H
#define org_orekit_bodies_FieldEllipse_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class FieldVector2D;
        }
        namespace threed {
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
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
  namespace orekit {
    namespace bodies {

      class FieldEllipse : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a80d078788493a03,
          mid_getA_eba8e72a22c984ac,
          mid_getB_eba8e72a22c984ac,
          mid_getCenter_716f50c86ffc8da7,
          mid_getCenterOfCurvature_516439063b85838d,
          mid_getFrame_b86f9f61d97a7244,
          mid_getU_716f50c86ffc8da7,
          mid_getV_716f50c86ffc8da7,
          mid_pointAt_e0e563985265c470,
          mid_projectToEllipse_2c604bfeb0a28a2f,
          mid_projectToEllipse_516439063b85838d,
          mid_toPlane_92f5981810110281,
          mid_toSpace_cd76bd749d804094,
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
