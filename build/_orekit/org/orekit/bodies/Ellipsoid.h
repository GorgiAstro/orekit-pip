#ifndef org_orekit_bodies_Ellipsoid_H
#define org_orekit_bodies_Ellipsoid_H

#include "java/lang/Object.h"

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
          mid_init$_563f09c906576b6f,
          mid_getA_557b8123390d8d0c,
          mid_getB_557b8123390d8d0c,
          mid_getC_557b8123390d8d0c,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getPlaneSection_8bcf26874b6ac495,
          mid_getPlaneSection_0c53fe7c07ad58f7,
          mid_isInside_7a86ea6adaa11bf8,
          mid_isInside_7ccf3b3f40d5fcd3,
          mid_pointOnLimb_b3579c1d2113481e,
          mid_pointOnLimb_720ad0a891308b00,
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
