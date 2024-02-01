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
          class FieldRotation;
          class FieldLine;
          class Vector3D;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class StaticTransform;
    }
    namespace time {
      class FieldAbsoluteDate;
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
          mid_compose_ebab87a33ad369ad,
          mid_compositeRotation_9224249227678983,
          mid_compositeTranslation_c038933d1378a0bd,
          mid_getIdentity_36b14e3675d8ede7,
          mid_getInverse_bfbe5d9ed8a9e205,
          mid_getRotation_5c8e6f300713559c,
          mid_getTranslation_d1b42a6748e907f9,
          mid_of_60fff8a5a742947d,
          mid_of_4bfdcd3b46c17e93,
          mid_of_c7d28104fea4ef5c,
          mid_of_93161fc49a3f70f0,
          mid_transformLine_2d18eed4cd66eb61,
          mid_transformLine_e2ca4ae3a4ea3c4a,
          mid_transformPosition_df37e4d755ff0467,
          mid_transformPosition_f577b57448bfefd2,
          mid_transformVector_df37e4d755ff0467,
          mid_transformVector_f577b57448bfefd2,
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
