#ifndef org_orekit_frames_encounter_EncounterLOF_H
#define org_orekit_frames_encounter_EncounterLOF_H

#include "org/orekit/frames/LOF.h"

namespace org {
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldRotation;
          class FieldVector3D;
          class Rotation;
        }
        namespace twod {
          class Vector2D;
          class FieldVector2D;
        }
      }
    }
    class Field;
    namespace linear {
      class RealMatrix;
      class FieldMatrix;
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
            mid_computeProjectionMatrix_f77d745f2128c391,
            mid_computeProjectionMatrix_6a4a6a8dba9fd9fb,
            mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2,
            mid_getAxisNormalToCollisionPlane_98221d2e63674019,
            mid_getFieldOther_dac7b66b757e9da0,
            mid_getOther_180fb117720acb76,
            mid_isQuasiInertial_9ab94ac1dc23b105,
            mid_projectOntoCollisionPlane_9f54cac39580172c,
            mid_projectOntoCollisionPlane_9d707d8812de06bd,
            mid_projectOntoCollisionPlane_e74c5d5fdc2ea025,
            mid_projectOntoCollisionPlane_be124f4006dc9f69,
            mid_rotationFromInertial_7e9d52385b0ba3f0,
            mid_rotationFromInertial_9c03210e4a66b8b3,
            mid_rotationFromInertial_bf95090cc5e2a8d4,
            mid_rotationFromInertial_80cbd49af33092b8,
            mid_rotationFromInertial_8f928c19e9edde2b,
            mid_rotationFromInertial_8851faa33644affd,
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
