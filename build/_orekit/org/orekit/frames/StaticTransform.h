#ifndef org_orekit_frames_StaticTransform_H
#define org_orekit_frames_StaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
          class Line;
          class Rotation;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class StaticTransform;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_compose_8d4aa90b08e0a7e3,
          mid_compositeRotation_caebcd4047ef9312,
          mid_compositeTranslation_9e300b01ed590b12,
          mid_getIdentity_00930874428900c5,
          mid_getInverse_00930874428900c5,
          mid_getRotation_ff298a39b3cae5da,
          mid_getTranslation_8b724f8b4fdad1a2,
          mid_of_119c524e27aa8136,
          mid_of_967fc4f87ccb447c,
          mid_of_5349cbaa7f64f62d,
          mid_transformLine_372f5ec6b8d717a8,
          mid_transformPosition_49157187b00e5904,
          mid_transformPosition_f21507e4850a184e,
          mid_transformVector_49157187b00e5904,
          mid_transformVector_f21507e4850a184e,
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
