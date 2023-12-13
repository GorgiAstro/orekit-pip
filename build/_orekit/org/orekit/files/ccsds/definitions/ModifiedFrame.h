#ifndef org_orekit_files_ccsds_definitions_ModifiedFrame_H
#define org_orekit_files_ccsds_definitions_ModifiedFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class CelestialBodyFrame;
        }
      }
    }
    namespace bodies {
      class CelestialBody;
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
    namespace files {
      namespace ccsds {
        namespace definitions {

          class ModifiedFrame : public ::org::orekit::frames::Frame {
           public:
            enum {
              mid_init$_de69c2063d8ea113,
              mid_getCenterName_1c1fa1e935d6cdcf,
              mid_getRefFrame_5ac4f33db9e11fd5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ModifiedFrame(jobject obj) : ::org::orekit::frames::Frame(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ModifiedFrame(const ModifiedFrame& obj) : ::org::orekit::frames::Frame(obj) {}

            ModifiedFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame &, const ::org::orekit::bodies::CelestialBody &, const ::java::lang::String &);

            ::java::lang::String getCenterName() const;
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame getRefFrame() const;
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
          extern PyType_Def PY_TYPE_DEF(ModifiedFrame);
          extern PyTypeObject *PY_TYPE(ModifiedFrame);

          class t_ModifiedFrame {
          public:
            PyObject_HEAD
            ModifiedFrame object;
            static PyObject *wrap_Object(const ModifiedFrame&);
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
