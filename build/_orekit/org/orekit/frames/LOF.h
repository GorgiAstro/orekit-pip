#ifndef org_orekit_frames_LOF_H
#define org_orekit_frames_LOF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class Transform;
      class LOF;
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
          class FieldRotation;
          class Rotation;
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
          mid_getName_1c1fa1e935d6cdcf,
          mid_isQuasiInertial_9ab94ac1dc23b105,
          mid_rotationFromInertial_9c03210e4a66b8b3,
          mid_rotationFromInertial_8f928c19e9edde2b,
          mid_rotationFromLOF_a4b25c0232d43859,
          mid_rotationFromLOF_68a01a5cb563ead4,
          mid_rotationFromLOFInToLOFOut_885e11fa763be356,
          mid_rotationFromLOFInToLOFOut_71053c63fef56b06,
          mid_transformFromInertial_e4502aed5587981a,
          mid_transformFromInertial_b95ac950aa1cdd61,
          mid_transformFromLOF_28d6d2ecbe474174,
          mid_transformFromLOF_484988e303f6b17e,
          mid_transformFromLOFInToLOFOut_575ca9c31554eb21,
          mid_transformFromLOFInToLOFOut_61f6e71d06b6e152,
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
        ::org::orekit::frames::FieldTransform transformFromInertial(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        ::org::orekit::frames::Transform transformFromInertial(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::orekit::frames::Transform transformFromLOF(const LOF &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::orekit::frames::FieldTransform transformFromLOF(const LOF &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
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
