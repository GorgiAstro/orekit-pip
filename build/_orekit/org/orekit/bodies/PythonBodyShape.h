#ifndef org_orekit_bodies_PythonBodyShape_H
#define org_orekit_bodies_PythonBodyShape_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
      class GeodeticPoint;
      class FieldGeodeticPoint;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Line;
          class Vector3D;
          class FieldLine;
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
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getBodyFrame_6c9bc0a928c56d4e,
          mid_getIntersectionPoint_6391bd6fdaac29a3,
          mid_getIntersectionPoint_884873e1d3d77c4e,
          mid_projectToGround_3d4e9a6447a03aa9,
          mid_projectToGround_4c5eeaf1ff845fca,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_transform_8b70a50ea3e1f728,
          mid_transform_8b264141c1de262c,
          mid_transform_8e052cb77f98e021,
          mid_transform_4dfad8dc678d42b2,
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
        ::org::orekit::bodies::GeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::bodies::FieldGeodeticPoint getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::utils::TimeStampedPVCoordinates projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transform(const ::org::orekit::bodies::FieldGeodeticPoint &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D transform(const ::org::orekit::bodies::GeodeticPoint &) const;
        ::org::orekit::bodies::FieldGeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::bodies::GeodeticPoint transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &) const;
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
