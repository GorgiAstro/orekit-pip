#ifndef org_orekit_frames_StaticTransform_H
#define org_orekit_frames_StaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldVector3D;
          class Line;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class StaticTransform;
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
    namespace frames {

      class StaticTransform : public ::org::orekit::time::TimeStamped {
       public:
        enum {
          mid_compose_7a5c3cae55152ca0,
          mid_compositeRotation_2920b8429bffe4e4,
          mid_compositeTranslation_0e9f75ed5fba5021,
          mid_getIdentity_892837e768e813bc,
          mid_getInverse_892837e768e813bc,
          mid_getRotation_de86c7efc42eac14,
          mid_getTranslation_d52645e0d4c07563,
          mid_of_8f193838cddcbf3f,
          mid_of_d51cd3cdc979d52c,
          mid_of_a6281f2a11dd190b,
          mid_transformLine_5e58e99e528470fd,
          mid_transformPosition_a173408e2b1f78b2,
          mid_transformPosition_d0fe714ef34714f7,
          mid_transformVector_a173408e2b1f78b2,
          mid_transformVector_d0fe714ef34714f7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StaticTransform(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StaticTransform(const StaticTransform& obj) : ::org::orekit::time::TimeStamped(obj) {}

        static StaticTransform compose(const ::org::orekit::time::AbsoluteDate &, const StaticTransform &, const StaticTransform &);
        static ::org::hipparchus::geometry::euclidean::threed::Rotation compositeRotation(const StaticTransform &, const StaticTransform &);
        static ::org::hipparchus::geometry::euclidean::threed::Vector3D compositeTranslation(const StaticTransform &, const StaticTransform &);
        static StaticTransform getIdentity();
        StaticTransform getInverse() const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getTranslation() const;
        static StaticTransform of(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &);
        static StaticTransform of(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
        static StaticTransform of(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &);
        ::org::hipparchus::geometry::euclidean::threed::Line transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(StaticTransform);
      extern PyTypeObject *PY_TYPE(StaticTransform);

      class t_StaticTransform {
      public:
        PyObject_HEAD
        StaticTransform object;
        static PyObject *wrap_Object(const StaticTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
