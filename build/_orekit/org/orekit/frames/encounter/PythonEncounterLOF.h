#ifndef org_orekit_frames_encounter_PythonEncounterLOF_H
#define org_orekit_frames_encounter_PythonEncounterLOF_H

#include "java/lang/Object.h"

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
    namespace frames {
      namespace encounter {
        class EncounterLOF;
      }
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
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93,
            mid_getAxisNormalToCollisionPlane_10f9413c61ea347a,
            mid_getFieldOther_aab2b71a889b2b8a,
            mid_getName_d2c8eb4129821f0e,
            mid_getOther_78e01095d7eced90,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_rotationFromInertial_b6feed19a568aaff,
            mid_rotationFromInertial_0c632cd592d334d1,
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
