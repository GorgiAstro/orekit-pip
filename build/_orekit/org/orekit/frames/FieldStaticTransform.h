#ifndef org_orekit_frames_FieldStaticTransform_H
#define org_orekit_frames_FieldStaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Line;
          class Vector3D;
          class FieldLine;
          class FieldRotation;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class FieldStaticTransform;
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

      class FieldStaticTransform : public ::org::orekit::time::TimeStamped {
       public:
        enum {
          mid_compose_066a6913a4b63ff5,
          mid_compositeRotation_014853c586edcdd1,
          mid_compositeTranslation_44279ba3a6027e62,
          mid_getIdentity_2bcc0f7f43ffb45e,
          mid_getInverse_fe2c5c7bc73a25b6,
          mid_getRotation_73da4eeccf2b7e14,
          mid_getTranslation_2d64addf4c3391d9,
          mid_of_d8bca083a85ca2e7,
          mid_of_7bc4315b92dbfe6f,
          mid_of_860013017bff522f,
          mid_of_d7b67bfa134276b0,
          mid_transformLine_d12840109f20e722,
          mid_transformLine_74f3858d2d426a7f,
          mid_transformPosition_588ed0f09550adb9,
          mid_transformPosition_3d90e30d4cb13513,
          mid_transformVector_588ed0f09550adb9,
          mid_transformVector_3d90e30d4cb13513,
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
