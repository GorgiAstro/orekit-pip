#ifndef org_orekit_files_ccsds_definitions_SpacecraftBodyFrame_H
#define org_orekit_files_ccsds_definitions_SpacecraftBodyFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class SpacecraftBodyFrame$BaseEquipment;
          class SpacecraftBodyFrame;
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

          class SpacecraftBodyFrame : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f69b717b12fd8ff6,
              mid_getBaseEquipment_9dfad51eee66d075,
              mid_getLabel_d2c8eb4129821f0e,
              mid_parse_e7a268bc991ab0c6,
              mid_toString_d2c8eb4129821f0e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpacecraftBodyFrame(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpacecraftBodyFrame(const SpacecraftBodyFrame& obj) : ::java::lang::Object(obj) {}

            SpacecraftBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment &, const ::java::lang::String &);

            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment getBaseEquipment() const;
            ::java::lang::String getLabel() const;
            static SpacecraftBodyFrame parse(const ::java::lang::String &);
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(SpacecraftBodyFrame);
          extern PyTypeObject *PY_TYPE(SpacecraftBodyFrame);

          class t_SpacecraftBodyFrame {
          public:
            PyObject_HEAD
            SpacecraftBodyFrame object;
            static PyObject *wrap_Object(const SpacecraftBodyFrame&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
