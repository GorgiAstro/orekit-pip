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
          class Rotation;
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
          mid_compose_6b0bfb2dd341a96e,
          mid_compositeRotation_ecfeec6247167490,
          mid_compositeTranslation_0790dea5478dfcd9,
          mid_getIdentity_4707295cf0323d2d,
          mid_getInverse_4707295cf0323d2d,
          mid_getRotation_4d68cff5f6e4403a,
          mid_getTranslation_032312bdeb3f2f93,
          mid_of_393b3689e1280c7c,
          mid_of_46ea5ea7380cdd86,
          mid_of_8587fe0e07620421,
          mid_transformLine_450cf7eaaaca6326,
          mid_transformPosition_df37e4d755ff0467,
          mid_transformPosition_53c542efd8574582,
          mid_transformVector_df37e4d755ff0467,
          mid_transformVector_53c542efd8574582,
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
