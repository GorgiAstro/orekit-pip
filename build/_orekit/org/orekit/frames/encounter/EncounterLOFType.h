#ifndef org_orekit_frames_encounter_EncounterLOFType_H
#define org_orekit_frames_encounter_EncounterLOFType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class PVCoordinates;
    }
    namespace frames {
      namespace encounter {
        class EncounterLOF;
        class EncounterLOFType;
      }
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

        class EncounterLOFType : public ::java::lang::Enum {
         public:
          enum {
            mid_getFrame_ac16d6afadb4c631,
            mid_getFrame_b8e27c184b1c01f4,
            mid_valueOf_4789c47c63e254ea,
            mid_values_4657dfc3f058fcd8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EncounterLOFType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EncounterLOFType(const EncounterLOFType& obj) : ::java::lang::Enum(obj) {}

          static EncounterLOFType *DEFAULT;
          static EncounterLOFType *VALSECCHI;

          ::org::orekit::frames::encounter::EncounterLOF getFrame(const ::org::orekit::utils::FieldPVCoordinates &) const;
          ::org::orekit::frames::encounter::EncounterLOF getFrame(const ::org::orekit::utils::PVCoordinates &) const;
          static EncounterLOFType valueOf(const ::java::lang::String &);
          static JArray< EncounterLOFType > values();
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
        extern PyType_Def PY_TYPE_DEF(EncounterLOFType);
        extern PyTypeObject *PY_TYPE(EncounterLOFType);

        class t_EncounterLOFType {
        public:
          PyObject_HEAD
          EncounterLOFType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EncounterLOFType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EncounterLOFType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EncounterLOFType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
