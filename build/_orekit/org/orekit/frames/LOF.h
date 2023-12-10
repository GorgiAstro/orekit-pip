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
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
    }
    namespace frames {
      class LOF;
      class Transform;
      class FieldTransform;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class LOF : public ::java::lang::Object {
       public:
        enum {
          mid_getName_0090f7797e403f43,
          mid_isQuasiInertial_e470b6d9e0d979db,
          mid_rotationFromInertial_95b12e29918a648c,
          mid_rotationFromInertial_346e8a02c9c839ea,
          mid_rotationFromLOF_2ec698306e9b37ca,
          mid_rotationFromLOF_4b952147e4e318b8,
          mid_rotationFromLOFInToLOFOut_8ea5b3a117471cdf,
          mid_rotationFromLOFInToLOFOut_9dd87494b0f9e748,
          mid_transformFromInertial_5297631fe491fbbb,
          mid_transformFromInertial_a489f9a3310608b1,
          mid_transformFromLOF_d5579a18e868b96d,
          mid_transformFromLOF_a9cbf0255b770c0c,
          mid_transformFromLOFInToLOFOut_1a57e4ecea717a7f,
          mid_transformFromLOFInToLOFOut_f733aa0af86dce16,
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
        ::org::orekit::frames::Transform transformFromLOF(const LOF &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
        ::org::orekit::frames::FieldTransform transformFromLOF(const LOF &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        static ::org::orekit::frames::FieldTransform transformFromLOFInToLOFOut(const LOF &, const LOF &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
        static ::org::orekit::frames::Transform transformFromLOFInToLOFOut(const LOF &, const LOF &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &);
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
