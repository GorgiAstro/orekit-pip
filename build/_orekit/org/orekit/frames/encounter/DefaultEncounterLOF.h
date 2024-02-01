#ifndef org_orekit_frames_encounter_DefaultEncounterLOF_H
#define org_orekit_frames_encounter_DefaultEncounterLOF_H

#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"

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

        class DefaultEncounterLOF : public ::org::orekit::frames::encounter::AbstractEncounterLOF {
         public:
          enum {
            mid_init$_b375bc79f588a172,
            mid_init$_433e87d544ab05d5,
            mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93,
            mid_getAxisNormalToCollisionPlane_10f9413c61ea347a,
            mid_getName_d2c8eb4129821f0e,
            mid_rotationFromInertial_b6feed19a568aaff,
            mid_rotationFromInertial_0c632cd592d334d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DefaultEncounterLOF(jobject obj) : ::org::orekit::frames::encounter::AbstractEncounterLOF(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DefaultEncounterLOF(const DefaultEncounterLOF& obj) : ::org::orekit::frames::encounter::AbstractEncounterLOF(obj) {}

          DefaultEncounterLOF(const ::org::orekit::utils::FieldPVCoordinates &);
          DefaultEncounterLOF(const ::org::orekit::utils::PVCoordinates &);

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
        extern PyType_Def PY_TYPE_DEF(DefaultEncounterLOF);
        extern PyTypeObject *PY_TYPE(DefaultEncounterLOF);

        class t_DefaultEncounterLOF {
        public:
          PyObject_HEAD
          DefaultEncounterLOF object;
          static PyObject *wrap_Object(const DefaultEncounterLOF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
