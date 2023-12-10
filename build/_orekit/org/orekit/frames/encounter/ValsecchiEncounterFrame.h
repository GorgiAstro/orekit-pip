#ifndef org_orekit_frames_encounter_ValsecchiEncounterFrame_H
#define org_orekit_frames_encounter_ValsecchiEncounterFrame_H

#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"

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
      }
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class PVCoordinates;
      class FieldPVCoordinates;
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
      namespace encounter {

        class ValsecchiEncounterFrame : public ::org::orekit::frames::encounter::AbstractEncounterLOF {
         public:
          enum {
            mid_init$_2fcbcb00b2514447,
            mid_init$_d12117948cc23ea0,
            mid_getAxisNormalToCollisionPlane_17a952530a808943,
            mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d,
            mid_getName_0090f7797e403f43,
            mid_rotationFromInertial_891f682396b75876,
            mid_rotationFromInertial_0483676d141ad17c,
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
