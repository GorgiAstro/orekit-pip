#ifndef org_orekit_frames_LOF_H
#define org_orekit_frames_LOF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOF;
      class Transform;
      class FieldTransform;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldRotation;
        }
      }
    }
    class Field;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class LOF : public ::java::lang::Object {
       public:
        enum {
          mid_getName_3cffd47377eca18a,
          mid_isQuasiInertial_89b302893bdbe1f1,
          mid_rotationFromInertial_9b71bf39454b4a07,
          mid_rotationFromInertial_1022f468fb3d1015,
          mid_rotationFromLOF_4589fd7f02974794,
          mid_rotationFromLOF_3d58d3c4fbbdd666,
          mid_rotationFromLOFInToLOFOut_9a9c25ec3dddff77,
          mid_rotationFromLOFInToLOFOut_dc0beda38c449646,
          mid_transformFromInertial_2a23f2d721e3dbf7,
          mid_transformFromInertial_770b64ef6abe3e27,
          mid_transformFromLOF_c10a26e3ee070a26,
          mid_transformFromLOF_434b8bd008c153c5,
          mid_transformFromLOFInToLOFOut_0b931f6337724e6c,
          mid_transformFromLOFInToLOFOut_fbf49304709710af,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LOF(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LOF(const LOF& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getName() const;
        jboolean isQuasiInertial() const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromLOF(const LOF &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromLOF(const ::org::hipparchus::Field &, const LOF &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        static ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromLOFInToLOFOut(const LOF &, const LOF &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &);
        static ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromLOFInToLOFOut(const ::org::hipparchus::Field &, const LOF &, const LOF &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
        ::org::orekit::frames::Transform transformFromInertial(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::orekit::frames::FieldTransform transformFromInertial(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::frames::FieldTransform transformFromLOF(const LOF &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::frames::Transform transformFromLOF(const LOF &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        static ::org::orekit::frames::Transform transformFromLOFInToLOFOut(const LOF &, const LOF &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &);
        static ::org::orekit::frames::FieldTransform transformFromLOFInToLOFOut(const LOF &, const LOF &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(LOF);
      extern PyTypeObject *PY_TYPE(LOF);

      class t_LOF {
      public:
        PyObject_HEAD
        LOF object;
        static PyObject *wrap_Object(const LOF&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
