#ifndef org_orekit_bodies_Ellipsoid_H
#define org_orekit_bodies_Ellipsoid_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
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
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class Ellipsoid : public ::java::lang::Object {
       public:
        enum {
          mid_init$_cb97547c6cf5fb1e,
          mid_getA_456d9a2f64d6b28d,
          mid_getB_456d9a2f64d6b28d,
          mid_getC_456d9a2f64d6b28d,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getPlaneSection_3bfaf4cd80ac687d,
          mid_getPlaneSection_af1c511f98e824a6,
          mid_isInside_f61e2266bee942fa,
          mid_isInside_c8fb5394ceb559de,
          mid_pointOnLimb_5ff6d50248c66b4d,
          mid_pointOnLimb_ccf2ee059c93e01e,
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
