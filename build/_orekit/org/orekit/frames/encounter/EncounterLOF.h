#ifndef org_orekit_frames_encounter_EncounterLOF_H
#define org_orekit_frames_encounter_EncounterLOF_H

#include "org/orekit/frames/LOF.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
          class Rotation;
          class FieldRotation;
        }
        namespace twod {
          class FieldVector2D;
          class Vector2D;
        }
      }
    }
    namespace linear {
      class FieldMatrix;
      class RealMatrix;
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
      namespace encounter {

        class EncounterLOF : public ::org::orekit::frames::LOF {
         public:
          enum {
            mid_computeProjectionMatrix_70a207fcbc031df2,
            mid_computeProjectionMatrix_3547a3eeb1e69366,
            mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a,
            mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf,
            mid_getFieldOther_dda60cf1427afe76,
            mid_getOther_77bd7b3cdab2713e,
            mid_isQuasiInertial_89b302893bdbe1f1,
            mid_projectOntoCollisionPlane_7f02e62a67dbd97c,
            mid_projectOntoCollisionPlane_3b3b6a3c97d1f7fa,
            mid_projectOntoCollisionPlane_60dc3401cb1a0936,
            mid_projectOntoCollisionPlane_340b47d21842d02c,
            mid_rotationFromInertial_8b424804999938a4,
            mid_rotationFromInertial_9b71bf39454b4a07,
            mid_rotationFromInertial_0158ab79fb625627,
            mid_rotationFromInertial_352d2666b9e583bd,
            mid_rotationFromInertial_1022f468fb3d1015,
            mid_rotationFromInertial_ea6e3434436b926f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EncounterLOF(jobject obj) : ::org::orekit::frames::LOF(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EncounterLOF(const EncounterLOF& obj) : ::org::orekit::frames::LOF(obj) {}

          ::org::hipparchus::linear::RealMatrix computeProjectionMatrix() const;
          ::org::hipparchus::linear::FieldMatrix computeProjectionMatrix(const ::org::hipparchus::Field &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getAxisNormalToCollisionPlane() const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAxisNormalToCollisionPlane(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::FieldPVCoordinates getFieldOther(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::PVCoordinates getOther() const;
          jboolean isQuasiInertial() const;
          ::org::hipparchus::geometry::euclidean::twod::FieldVector2D projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &) const;
          ::org::hipparchus::geometry::euclidean::twod::Vector2D projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::linear::FieldMatrix projectOntoCollisionPlane(const ::org::hipparchus::linear::FieldMatrix &) const;
          ::org::hipparchus::linear::RealMatrix projectOntoCollisionPlane(const ::org::hipparchus::linear::RealMatrix &) const;
          ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::utils::PVCoordinates &) const;
          ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinates &) const;
          ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::utils::FieldPVCoordinates &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {
        extern PyType_Def PY_TYPE_DEF(EncounterLOF);
        extern PyTypeObject *PY_TYPE(EncounterLOF);

        class t_EncounterLOF {
        public:
          PyObject_HEAD
          EncounterLOF object;
          static PyObject *wrap_Object(const EncounterLOF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
