#ifndef org_orekit_frames_encounter_EncounterLOF_H
#define org_orekit_frames_encounter_EncounterLOF_H

#include "org/orekit/frames/LOF.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
          class Rotation;
          class Vector3D;
        }
        namespace twod {
          class Vector2D;
          class FieldVector2D;
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
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
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
            mid_computeProjectionMatrix_b2eebabce70526d8,
            mid_computeProjectionMatrix_7cd40d804f1ccfb8,
            mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93,
            mid_getAxisNormalToCollisionPlane_10f9413c61ea347a,
            mid_getFieldOther_aab2b71a889b2b8a,
            mid_getOther_78e01095d7eced90,
            mid_isQuasiInertial_eee3de00fe971136,
            mid_projectOntoCollisionPlane_f59945942a1427c6,
            mid_projectOntoCollisionPlane_2e7d3e3e3ac549f4,
            mid_projectOntoCollisionPlane_b180f987191970ad,
            mid_projectOntoCollisionPlane_5a8a8185eb309db7,
            mid_rotationFromInertial_cc3fb55bcf18d696,
            mid_rotationFromInertial_7972874aa60c5cbb,
            mid_rotationFromInertial_b6feed19a568aaff,
            mid_rotationFromInertial_5554d692f1f7262c,
            mid_rotationFromInertial_24d473279eeb35d9,
            mid_rotationFromInertial_0c632cd592d334d1,
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
