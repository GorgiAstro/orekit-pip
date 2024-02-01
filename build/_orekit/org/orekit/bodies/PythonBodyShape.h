#ifndef org_orekit_bodies_PythonBodyShape_H
#define org_orekit_bodies_PythonBodyShape_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class BodyShape;
      class FieldGeodeticPoint;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Line;
          class FieldLine;
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class PythonBodyShape : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getBodyFrame_cb151471db4570f0,
          mid_getIntersectionPoint_ade5649cae5a4672,
          mid_getIntersectionPoint_9f0bcc9c00772903,
          mid_projectToGround_28dd2a6cc35491d2,
          mid_projectToGround_26b1db430bbeb49e,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_transform_f974aaaf2e73b405,
          mid_transform_0bfc32b1890053a9,
          mid_transform_52f3336802c12846,
          mid_transform_82a0f6c52928ba20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonBodyShape(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonBodyShape(const PythonBodyShape& obj) : ::java::lang::Object(obj) {}

        PythonBodyShape();

        void finalize() const;
        ::org::orekit::frames::Frame getBodyFrame() const;
        ::org::orekit::bodies::FieldGeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::bodies::GeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transform(const ::org::orekit::bodies::FieldGeodeticPoint &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D transform(const ::org::orekit::bodies::GeodeticPoint &) const;
        ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(PythonBodyShape);
      extern PyTypeObject *PY_TYPE(PythonBodyShape);

      class t_PythonBodyShape {
      public:
        PyObject_HEAD
        PythonBodyShape object;
        static PyObject *wrap_Object(const PythonBodyShape&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
