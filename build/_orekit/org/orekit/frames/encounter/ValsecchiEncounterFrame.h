#ifndef org_orekit_frames_encounter_ValsecchiEncounterFrame_H
#define org_orekit_frames_encounter_ValsecchiEncounterFrame_H

#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
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
      namespace encounter {

        class ValsecchiEncounterFrame : public ::org::orekit::frames::encounter::AbstractEncounterLOF {
         public:
          enum {
            mid_init$_3e711dd03f656c50,
            mid_init$_e7272d224e58d28f,
            mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2,
            mid_getAxisNormalToCollisionPlane_98221d2e63674019,
            mid_getName_1c1fa1e935d6cdcf,
            mid_rotationFromInertial_bf95090cc5e2a8d4,
            mid_rotationFromInertial_8851faa33644affd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ValsecchiEncounterFrame(jobject obj) : ::org::orekit::frames::encounter::AbstractEncounterLOF(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ValsecchiEncounterFrame(const ValsecchiEncounterFrame& obj) : ::org::orekit::frames::encounter::AbstractEncounterLOF(obj) {}

          ValsecchiEncounterFrame(const ::org::orekit::utils::FieldPVCoordinates &);
          ValsecchiEncounterFrame(const ::org::orekit::utils::PVCoordinates &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getAxisNormalToCollisionPlane() const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAxisNormalToCollisionPlane(const ::org::hipparchus::Field &) const;
          ::java::lang::String getName() const;
          ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::utils::PVCoordinates &, const ::org::orekit::utils::PVCoordinates &) const;
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
        extern PyType_Def PY_TYPE_DEF(ValsecchiEncounterFrame);
        extern PyTypeObject *PY_TYPE(ValsecchiEncounterFrame);

        class t_ValsecchiEncounterFrame {
        public:
          PyObject_HEAD
          ValsecchiEncounterFrame object;
          static PyObject *wrap_Object(const ValsecchiEncounterFrame&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
