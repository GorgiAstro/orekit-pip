#ifndef org_orekit_frames_encounter_PythonAbstractEncounterLOF_H
#define org_orekit_frames_encounter_PythonAbstractEncounterLOF_H

#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"

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
      }
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        class PythonAbstractEncounterLOF : public ::org::orekit::frames::encounter::AbstractEncounterLOF {
         public:
          enum {
            mid_init$_0cd9ca2f4cf79e0a,
            mid_finalize_0fa09c18fee449d5,
            mid_getAxisNormalToCollisionPlane_d52645e0d4c07563,
            mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc,
            mid_getName_11b109bd155ca898,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_rotationFromInertial_d59b144da7c7851f,
            mid_rotationFromInertial_2ba248090f65b129,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractEncounterLOF(jobject obj) : ::org::orekit::frames::encounter::AbstractEncounterLOF(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractEncounterLOF(const PythonAbstractEncounterLOF& obj) : ::org::orekit::frames::encounter::AbstractEncounterLOF(obj) {}

          PythonAbstractEncounterLOF(const ::org::orekit::utils::PVCoordinates &);

          void finalize() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getAxisNormalToCollisionPlane() const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAxisNormalToCollisionPlane(const ::org::hipparchus::Field &) const;
          ::java::lang::String getName() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAbstractEncounterLOF);
        extern PyTypeObject *PY_TYPE(PythonAbstractEncounterLOF);

        class t_PythonAbstractEncounterLOF {
        public:
          PyObject_HEAD
          PythonAbstractEncounterLOF object;
          static PyObject *wrap_Object(const PythonAbstractEncounterLOF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
