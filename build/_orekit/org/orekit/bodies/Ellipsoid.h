#ifndef org_orekit_bodies_Ellipsoid_H
#define org_orekit_bodies_Ellipsoid_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace exception {
      class MathRuntimeException;
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class FieldEllipse;
      class Ellipse;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class Ellipsoid : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a5d66ee321de235c,
          mid_getA_dff5885c2c873297,
          mid_getB_dff5885c2c873297,
          mid_getC_dff5885c2c873297,
          mid_getFrame_b86f9f61d97a7244,
          mid_getPlaneSection_2e3bc4c6568da5d5,
          mid_getPlaneSection_dc0ab9a321179f6f,
          mid_isInside_19ce44a30ac2c75e,
          mid_isInside_ab4ed00ccf0defd6,
          mid_pointOnLimb_9dc4d243618c0821,
          mid_pointOnLimb_e2a27ed5c4e12f6f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Ellipsoid(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Ellipsoid(const Ellipsoid& obj) : ::java::lang::Object(obj) {}

        Ellipsoid(const ::org::orekit::frames::Frame &, jdouble, jdouble, jdouble);

        jdouble getA() const;
        jdouble getB() const;
        jdouble getC() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::bodies::FieldEllipse getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::orekit::bodies::Ellipse getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        jboolean isInside(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        jboolean isInside(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(Ellipsoid);
      extern PyTypeObject *PY_TYPE(Ellipsoid);

      class t_Ellipsoid {
      public:
        PyObject_HEAD
        Ellipsoid object;
        static PyObject *wrap_Object(const Ellipsoid&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
