#ifndef org_orekit_frames_encounter_PythonAbstractEncounterLOF_H
#define org_orekit_frames_encounter_PythonAbstractEncounterLOF_H

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
            mid_init$_433e87d544ab05d5,
            mid_finalize_ff7cb6c242604316,
            mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93,
            mid_getAxisNormalToCollisionPlane_10f9413c61ea347a,
            mid_getName_d2c8eb4129821f0e,
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
