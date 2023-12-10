#ifndef org_orekit_frames_LOF_H
#define org_orekit_frames_LOF_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class Transform;
      class LOF;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
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
          mid_getName_11b109bd155ca898,
          mid_isQuasiInertial_b108b35ef48e27bd,
          mid_rotationFromInertial_475182fd71c6851b,
          mid_rotationFromInertial_076f35c1feeb36b3,
          mid_rotationFromLOF_19113ef4e598287b,
          mid_rotationFromLOF_8088d480809c18c4,
          mid_rotationFromLOFInToLOFOut_42ccf97cd80cbf07,
          mid_rotationFromLOFInToLOFOut_0e21e2ef6cf8e3e4,
          mid_transformFromInertial_2f33e71311570caf,
          mid_transformFromInertial_ebe03c8ec9572105,
          mid_transformFromLOF_0bcf38086fabd19a,
          mid_transformFromLOF_66098893b8c09c76,
          mid_transformFromLOFInToLOFOut_8e8b5e9a81637430,
          mid_transformFromLOFInToLOFOut_9504937c4fb78046,
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
