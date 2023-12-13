#ifndef org_orekit_frames_FieldStaticTransform_H
#define org_orekit_frames_FieldStaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldRotation;
          class FieldVector3D;
          class FieldLine;
          class Line;
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
          mid_compose_9105b66daa9d24f1,
          mid_compositeRotation_2208b259da045dcf,
          mid_compositeTranslation_6d6daa21bda0ae5f,
          mid_getIdentity_fcb78665b94e4648,
          mid_getInverse_f5bae1937d1edbc7,
          mid_getRotation_1e54a5caa5199c2e,
          mid_getTranslation_ff5ac73a7b43eddd,
          mid_of_7dd5a16ee5376cd6,
          mid_of_48b63227f7d28e46,
          mid_of_bd0a27faa06d5d8d,
          mid_of_9fd334eaeb2212b6,
          mid_transformLine_f23b0a932a8a1dcc,
          mid_transformLine_2cacbd5ce2a6a87d,
          mid_transformPosition_49157187b00e5904,
          mid_transformPosition_356b02aa715afa02,
          mid_transformVector_49157187b00e5904,
          mid_transformVector_356b02aa715afa02,
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
