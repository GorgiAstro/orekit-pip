#ifndef org_orekit_frames_encounter_PythonEncounterLOF_H
#define org_orekit_frames_encounter_PythonEncounterLOF_H

#include "java/lang/Object.h"

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
      }
    }
    class Field;
  }
  namespace orekit {
    namespace frames {
      namespace encounter {
        class EncounterLOF;
      }
    }
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

        class PythonEncounterLOF : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a,
            mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf,
            mid_getFieldOther_dda60cf1427afe76,
            mid_getName_3cffd47377eca18a,
            mid_getOther_77bd7b3cdab2713e,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_rotationFromInertial_0158ab79fb625627,
            mid_rotationFromInertial_ea6e3434436b926f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEncounterLOF(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEncounterLOF(const PythonEncounterLOF& obj) : ::java::lang::Object(obj) {}

          PythonEncounterLOF();

          void finalize() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getAxisNormalToCollisionPlane() const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAxisNormalToCollisionPlane(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::FieldPVCoordinates getFieldOther(const ::org::hipparchus::Field &) const;
          ::java::lang::String getName() const;
          ::org::orekit::utils::PVCoordinates getOther() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonEncounterLOF);
        extern PyTypeObject *PY_TYPE(PythonEncounterLOF);

        class t_PythonEncounterLOF {
        public:
          PyObject_HEAD
          PythonEncounterLOF object;
          static PyObject *wrap_Object(const PythonEncounterLOF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
