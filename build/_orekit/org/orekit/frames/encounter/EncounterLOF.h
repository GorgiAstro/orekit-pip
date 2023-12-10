#ifndef org_orekit_frames_encounter_EncounterLOF_H
#define org_orekit_frames_encounter_EncounterLOF_H

#include "org/orekit/frames/LOF.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
          class FieldVector3D;
          class FieldRotation;
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
  namespace orekit {
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
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
            mid_computeProjectionMatrix_7116bbecdd8ceb21,
            mid_computeProjectionMatrix_66ba1a35ed9fb7d4,
            mid_getAxisNormalToCollisionPlane_17a952530a808943,
            mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d,
            mid_getFieldOther_b10aa29cc18662da,
            mid_getOther_6761e3f334368d44,
            mid_isQuasiInertial_e470b6d9e0d979db,
            mid_projectOntoCollisionPlane_cc9be632777be51e,
            mid_projectOntoCollisionPlane_e74bef55b3143874,
            mid_projectOntoCollisionPlane_311c21c57522a65c,
            mid_projectOntoCollisionPlane_e00cd33aedcc5bd0,
            mid_rotationFromInertial_9a23f79cd11b74e7,
            mid_rotationFromInertial_95b12e29918a648c,
            mid_rotationFromInertial_891f682396b75876,
            mid_rotationFromInertial_f3b8fc53bbbd7a0a,
            mid_rotationFromInertial_346e8a02c9c839ea,
            mid_rotationFromInertial_0483676d141ad17c,
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
