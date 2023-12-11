#ifndef org_orekit_bodies_FieldEllipse_H
#define org_orekit_bodies_FieldEllipse_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace frames {
      class Frame;
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
          mid_init$_d08588a8ab820125,
          mid_getA_613c8f46c659f636,
          mid_getB_613c8f46c659f636,
          mid_getCenter_2d64addf4c3391d9,
          mid_getCenterOfCurvature_453f66131fc0f21f,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getU_2d64addf4c3391d9,
          mid_getV_2d64addf4c3391d9,
          mid_pointAt_68e9ce281b70d410,
          mid_projectToEllipse_f6b3fdf5ec92a07f,
          mid_projectToEllipse_453f66131fc0f21f,
          mid_toPlane_7f02e62a67dbd97c,
          mid_toSpace_695484e81a048fc5,
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
