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
          mid_init$_7487621e90fe4291,
          mid_getA_08d37e3f77b7239d,
          mid_getB_08d37e3f77b7239d,
          mid_getCenter_d1b42a6748e907f9,
          mid_getCenterOfCurvature_7942696c79200ea4,
          mid_getFrame_cb151471db4570f0,
          mid_getU_d1b42a6748e907f9,
          mid_getV_d1b42a6748e907f9,
          mid_pointAt_c2b058e1eb7a8988,
          mid_projectToEllipse_42f03a1654758e56,
          mid_projectToEllipse_7942696c79200ea4,
          mid_toPlane_f59945942a1427c6,
          mid_toSpace_6c5279bc1e96d3cb,
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
