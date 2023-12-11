#ifndef org_orekit_frames_StaticTransform_H
#define org_orekit_frames_StaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Line;
          class Vector3D;
          class Rotation;
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
          mid_compose_a8493a788ad7e6d7,
          mid_compositeRotation_a14cf49a0e69bd18,
          mid_compositeTranslation_321e282a5bae744e,
          mid_getIdentity_f798b00aed778de3,
          mid_getInverse_f798b00aed778de3,
          mid_getRotation_1e0dc1a6788897b9,
          mid_getTranslation_f88961cca75a2c0a,
          mid_of_98e36f1d1f4224b7,
          mid_of_c2b09d9d4d0d9834,
          mid_of_f2223268ce3ed4bf,
          mid_transformLine_a329f937d459e992,
          mid_transformPosition_588ed0f09550adb9,
          mid_transformPosition_b48aa9aef740fa79,
          mid_transformVector_588ed0f09550adb9,
          mid_transformVector_b48aa9aef740fa79,
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
