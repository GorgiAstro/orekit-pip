#ifndef org_orekit_bodies_Ellipsoid_H
#define org_orekit_bodies_Ellipsoid_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
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
          mid_init$_a7d182119e533a5f,
          mid_getA_9981f74b2d109da6,
          mid_getB_9981f74b2d109da6,
          mid_getC_9981f74b2d109da6,
          mid_getFrame_cb151471db4570f0,
          mid_getPlaneSection_3f2e5878904410f7,
          mid_getPlaneSection_3f5fc96ca95b9a07,
          mid_isInside_f6d8940437db3446,
          mid_isInside_decdc24b3aebe77a,
          mid_pointOnLimb_1b84772486fb83f9,
          mid_pointOnLimb_ff0107f3aab86815,
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
