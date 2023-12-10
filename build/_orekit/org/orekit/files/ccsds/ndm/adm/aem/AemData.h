#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemData_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemData_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedAngularCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace section {
          class Data;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              class AemData : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_addData_08b6a6e4f74e1c7d,
                  mid_getAngularCoordinates_a6156df500549a58,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AemData(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemData(const AemData& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AemData();

                jboolean addData(const ::org::orekit::utils::TimeStampedAngularCoordinates &) const;
                ::java::util::List getAngularCoordinates() const;
              };
            }
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
          namespace adm {
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemData);
              extern PyTypeObject *PY_TYPE(AemData);

              class t_AemData {
              public:
                PyObject_HEAD
                AemData object;
                static PyObject *wrap_Object(const AemData&);
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
}

#endif
