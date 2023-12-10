#ifndef org_orekit_frames_encounter_EncounterLOF_H
#define org_orekit_frames_encounter_EncounterLOF_H

#include "org/orekit/frames/LOF.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class FieldVector3D;
          class FieldRotation;
          class Vector3D;
        }
        namespace twod {
          class FieldVector2D;
          class Vector2D;
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
      class AbsoluteDate;
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
      namespace encounter {

        class EncounterLOF : public ::org::orekit::frames::LOF {
         public:
          enum {
            mid_computeProjectionMatrix_688b496048ff947b,
            mid_computeProjectionMatrix_da96d53489e4adf9,
            mid_getAxisNormalToCollisionPlane_d52645e0d4c07563,
            mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc,
            mid_getFieldOther_90f77345373c3eb7,
            mid_getOther_9b7c658c14883c84,
            mid_isQuasiInertial_b108b35ef48e27bd,
            mid_projectOntoCollisionPlane_92f5981810110281,
            mid_projectOntoCollisionPlane_6888ee2da1e4e6ff,
            mid_projectOntoCollisionPlane_1409f31dc074a11f,
            mid_projectOntoCollisionPlane_e9b72403ad502221,
            mid_rotationFromInertial_48dfcf66fb3ed19c,
            mid_rotationFromInertial_475182fd71c6851b,
            mid_rotationFromInertial_d59b144da7c7851f,
            mid_rotationFromInertial_00be22c00009a46d,
            mid_rotationFromInertial_076f35c1feeb36b3,
            mid_rotationFromInertial_2ba248090f65b129,
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
