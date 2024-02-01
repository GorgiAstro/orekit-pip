#ifndef org_orekit_frames_LOF_H
#define org_orekit_frames_LOF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
    }
    namespace frames {
      class FieldTransform;
      class Transform;
      class LOF;
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
          mid_getName_d2c8eb4129821f0e,
          mid_isQuasiInertial_eee3de00fe971136,
          mid_rotationFromInertial_7972874aa60c5cbb,
          mid_rotationFromInertial_24d473279eeb35d9,
          mid_rotationFromLOF_937a2310960b8028,
          mid_rotationFromLOF_135a097ae4fe7e71,
          mid_rotationFromLOFInToLOFOut_dd0e71c1f4124dab,
          mid_rotationFromLOFInToLOFOut_97437eb6e0b89bf3,
          mid_transformFromInertial_1d02c6eb27a4e0c6,
          mid_transformFromInertial_3a054f4f7a97adb9,
          mid_transformFromLOF_625180b6bebc3e91,
          mid_transformFromLOF_48c41102db6636d1,
          mid_transformFromLOFInToLOFOut_9ed87e078c66a199,
          mid_transformFromLOFInToLOFOut_627c5c7b45a21c8e,
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
