#ifndef org_orekit_frames_FieldStaticTransform_H
#define org_orekit_frames_FieldStaticTransform_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
          class FieldLine;
          class Line;
          class FieldRotation;
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
          mid_compose_d5bdc0c8fd5f2279,
          mid_compositeRotation_d19ca496962484e6,
          mid_compositeTranslation_08f366667a037862,
          mid_getIdentity_d18340e2e2a53d56,
          mid_getInverse_dd9256b23dabf6f6,
          mid_getRotation_ac4489fdef1c3aef,
          mid_getTranslation_5791f80683b5227e,
          mid_of_15d6b0d0037f2e50,
          mid_of_def843b29e44d147,
          mid_of_cd804267ea95b63a,
          mid_of_d6fd7734a1a942ba,
          mid_transformLine_9988662f7c6f1b6c,
          mid_transformLine_14caeddcfca8ca0c,
          mid_transformPosition_8ff2edc0ecba4b6e,
          mid_transformPosition_89718cf054290f11,
          mid_transformVector_8ff2edc0ecba4b6e,
          mid_transformVector_89718cf054290f11,
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
