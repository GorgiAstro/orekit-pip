#ifndef org_orekit_frames_FieldStaticTransform_H
#define org_orekit_frames_FieldStaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class StaticTransform;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldLine;
          class FieldVector3D;
          class Line;
          class FieldRotation;
          class Vector3D;
        }
      }
    }
    class Field;
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

      class FieldStaticTransform : public ::org::orekit::time::TimeStamped {
       public:
        enum {
          mid_compose_e718ef15d9487dde,
          mid_compositeRotation_63d03d752aea77b3,
          mid_compositeTranslation_e78a51049c739df6,
          mid_getIdentity_47701bd9c773f171,
          mid_getInverse_b4e9bd069b43219a,
          mid_getRotation_1d339a2ee3a3323a,
          mid_getTranslation_716f50c86ffc8da7,
          mid_of_ccf560e3672a239e,
          mid_of_c4eae0c7e1e1b864,
          mid_of_06614a63a9481c60,
          mid_of_1817b764fbb99071,
          mid_transformLine_98e8513ff63d3587,
          mid_transformLine_1542cd68fd018a55,
          mid_transformPosition_a173408e2b1f78b2,
          mid_transformPosition_7a9aa2e8b906f1a5,
          mid_transformVector_a173408e2b1f78b2,
          mid_transformVector_7a9aa2e8b906f1a5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldStaticTransform(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldStaticTransform(const FieldStaticTransform& obj) : ::org::orekit::time::TimeStamped(obj) {}

        static FieldStaticTransform compose(const ::org::orekit::time::FieldAbsoluteDate &, const FieldStaticTransform &, const FieldStaticTransform &);
        static ::org::hipparchus::geometry::euclidean::threed::FieldRotation compositeRotation(const FieldStaticTransform &, const FieldStaticTransform &);
        static ::org::hipparchus::geometry::euclidean::threed::FieldVector3D compositeTranslation(const FieldStaticTransform &, const FieldStaticTransform &);
        static FieldStaticTransform getIdentity(const ::org::hipparchus::Field &);
        FieldStaticTransform getInverse() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getTranslation() const;
        static FieldStaticTransform of(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        static FieldStaticTransform of(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        static FieldStaticTransform of(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::StaticTransform &);
        static FieldStaticTransform of(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        ::org::hipparchus::geometry::euclidean::threed::FieldLine transformLine(const ::org::hipparchus::geometry::euclidean::threed::FieldLine &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldLine transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FieldStaticTransform);
      extern PyTypeObject *PY_TYPE(FieldStaticTransform);

      class t_FieldStaticTransform {
      public:
        PyObject_HEAD
        FieldStaticTransform object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldStaticTransform *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldStaticTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldStaticTransform&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
