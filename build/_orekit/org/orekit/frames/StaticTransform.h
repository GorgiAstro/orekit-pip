#ifndef org_orekit_frames_StaticTransform_H
#define org_orekit_frames_StaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
          class FieldVector3D;
          class Line;
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
          mid_compose_9cc4c308b30c4347,
          mid_compositeRotation_8d24f716dff864dd,
          mid_compositeTranslation_3477dd066ed5954b,
          mid_getIdentity_85643104a022b593,
          mid_getInverse_85643104a022b593,
          mid_getRotation_24d2e432e376f9a0,
          mid_getTranslation_17a952530a808943,
          mid_of_3ede0c963b9ef830,
          mid_of_54b6c6b3a96b6dd2,
          mid_of_cd1da3ccebfd8543,
          mid_transformLine_4ef7d9e66a21640e,
          mid_transformPosition_8ff2edc0ecba4b6e,
          mid_transformPosition_afd63a09f6d01e4c,
          mid_transformVector_8ff2edc0ecba4b6e,
          mid_transformVector_afd63a09f6d01e4c,
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
