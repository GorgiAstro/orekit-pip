#ifndef org_orekit_files_ccsds_ndm_odm_UserDefined_H
#define org_orekit_files_ccsds_ndm_odm_UserDefined_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class Map;
  }
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
        namespace ndm {
          namespace odm {

            class UserDefined : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_addEntry_96073c87872b7a97,
                mid_getParameters_d6753b7055940a54,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserDefined(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UserDefined(const UserDefined& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              static ::java::lang::String *USER_DEFINED_PREFIX;
              static ::java::lang::String *USER_DEFINED_XML_ATTRIBUTE;
              static ::java::lang::String *USER_DEFINED_XML_TAG;

              UserDefined();

              void addEntry(const ::java::lang::String &, const ::java::lang::String &) const;
              ::java::util::Map getParameters() const;
            };
          }
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
        namespace ndm {
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(UserDefined);
            extern PyTypeObject *PY_TYPE(UserDefined);

            class t_UserDefined {
            public:
              PyObject_HEAD
              UserDefined object;
              static PyObject *wrap_Object(const UserDefined&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
