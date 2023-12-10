#ifndef org_orekit_frames_encounter_AbstractEncounterLOF_H
#define org_orekit_frames_encounter_AbstractEncounterLOF_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
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
    namespace frames {
      namespace encounter {
        class EncounterLOF;
      }
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

        class AbstractEncounterLOF : public ::java::lang::Object {
         public:
          enum {
            mid_getFieldOther_b10aa29cc18662da,
            mid_getOther_6761e3f334368d44,
            mid_rotationFromInertial_9a23f79cd11b74e7,
            mid_rotationFromInertial_f3b8fc53bbbd7a0a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractEncounterLOF(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractEncounterLOF(const AbstractEncounterLOF& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::utils::FieldPVCoordinates getFieldOther(const ::org::hipparchus::Field &) const;
          ::org::orekit::utils::PVCoordinates getOther() const;
          ::org::hipparchus::geometry::euclidean::threed::Rotation rotationFromInertial(const ::org::orekit::utils::PVCoordinates &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation rotationFromInertial(const ::org::hipparchus::Field &, const ::org::orekit::utils::FieldPVCoordinates &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractEncounterLOF);
        extern PyTypeObject *PY_TYPE(AbstractEncounterLOF);

        class t_AbstractEncounterLOF {
        public:
          PyObject_HEAD
          AbstractEncounterLOF object;
          static PyObject *wrap_Object(const AbstractEncounterLOF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif