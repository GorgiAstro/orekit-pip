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
              mid_getTimeSystem_ee0a6b60b63a969e,
              mid_setTimeSystem_08d7048316d8d7b2,
              mid_validate_17db3a65980d3441,
              mid_getLaunchYear_02f02486e9727d8f,
              mid_getLaunchNumber_02f02486e9727d8f,
              mid_getLaunchPiece_92807efd57acb082,
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
