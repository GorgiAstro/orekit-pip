#ifndef org_orekit_files_ccsds_definitions_SpacecraftBodyFrame$BaseEquipment_H
#define org_orekit_files_ccsds_definitions_SpacecraftBodyFrame$BaseEquipment_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class SpacecraftBodyFrame$BaseEquipment;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class SpacecraftBodyFrame$BaseEquipment : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_6b893f9b2aec118a,
              mid_values_1c208ef2bdfa2dc3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpacecraftBodyFrame$BaseEquipment(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpacecraftBodyFrame$BaseEquipment(const SpacecraftBodyFrame$BaseEquipment& obj) : ::java::lang::Enum(obj) {}

            static SpacecraftBodyFrame$BaseEquipment *ACC;
            static SpacecraftBodyFrame$BaseEquipment *ACTUATOR;
            static SpacecraftBodyFrame$BaseEquipment *AST;
            static SpacecraftBodyFrame$BaseEquipment *CSS;
            static SpacecraftBodyFrame$BaseEquipment *DSS;
            static SpacecraftBodyFrame$BaseEquipment *ESA;
            static SpacecraftBodyFrame$BaseEquipment *GYRO;
            static SpacecraftBodyFrame$BaseEquipment *GYRO_FRAME;
            static SpacecraftBodyFrame$BaseEquipment *IMU_FRAME;
            static SpacecraftBodyFrame$BaseEquipment *INSTRUMENT;
            static SpacecraftBodyFrame$BaseEquipment *MTA;
            static SpacecraftBodyFrame$BaseEquipment *RW;
            static SpacecraftBodyFrame$BaseEquipment *SA;
            static SpacecraftBodyFrame$BaseEquipment *SC_BODY;
            static SpacecraftBodyFrame$BaseEquipment *SENSOR;
            static SpacecraftBodyFrame$BaseEquipment *STARTRACKER;
            static SpacecraftBodyFrame$BaseEquipment *TAM;

            static SpacecraftBodyFrame$BaseEquipment valueOf(const ::java::lang::String &);
            static JArray< SpacecraftBodyFrame$BaseEquipment > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment);
          extern PyTypeObject *PY_TYPE(SpacecraftBodyFrame$BaseEquipment);

          class t_SpacecraftBodyFrame$BaseEquipment {
          public:
            PyObject_HEAD
            SpacecraftBodyFrame$BaseEquipment object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpacecraftBodyFrame$BaseEquipment *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpacecraftBodyFrame$BaseEquipment&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpacecraftBodyFrame$BaseEquipment&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
