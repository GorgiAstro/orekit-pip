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
    namespace bodies {
      class FieldEllipse;
      class Ellipse;
    }
    namespace frames {
      class Frame;
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
          mid_init$_736cb871345d6087,
          mid_getA_b74f83833fdad017,
          mid_getB_b74f83833fdad017,
          mid_getC_b74f83833fdad017,
          mid_getFrame_2c51111cc6894ba1,
          mid_getPlaneSection_fc24a7c1bc5c2624,
          mid_getPlaneSection_af7d57647b7c1409,
          mid_isInside_f7871dc9552d25d0,
          mid_isInside_82d995e738c9e027,
          mid_pointOnLimb_f9c086f1066c613d,
          mid_pointOnLimb_301a09f2b4c627de,
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
