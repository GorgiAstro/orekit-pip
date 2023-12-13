#ifndef org_orekit_files_ccsds_section_Metadata_H
#define org_orekit_files_ccsds_section_Metadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeSystem;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          class Metadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
           public:
            enum {
              mid_getTimeSystem_91b7f51e80ad440f,
              mid_setTimeSystem_00f5ccc3311d9b97,
              mid_validate_8ba9fe7a847cecad,
              mid_getLaunchYear_f0ba70671b70c6e5,
              mid_getLaunchNumber_f0ba70671b70c6e5,
              mid_getLaunchPiece_6f0f3576df9f75ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Metadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Metadata(const Metadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

            ::org::orekit::files::ccsds::definitions::TimeSystem getTimeSystem() const;
            void setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem &) const;
            void validate(jdouble) const;
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(Metadata);
          extern PyTypeObject *PY_TYPE(Metadata);

          class t_Metadata {
          public:
            PyObject_HEAD
            Metadata object;
            static PyObject *wrap_Object(const Metadata&);
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
