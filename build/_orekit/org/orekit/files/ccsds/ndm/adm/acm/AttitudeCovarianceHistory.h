#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistory_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeCovarianceHistoryMetadata;
              class AttitudeCovariance;
            }
          }
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
            namespace acm {

              class AttitudeCovarianceHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_0694642a06bba0c0,
                  mid_getCovariances_e62d3bb06d56d7e3,
                  mid_getMetadata_9cf45f3dda76eb07,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeCovarianceHistory(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeCovarianceHistory(const AttitudeCovarianceHistory& obj) : ::java::lang::Object(obj) {}

                AttitudeCovarianceHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata &, const ::java::util::List &);

                ::java::util::List getCovariances() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata getMetadata() const;
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
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudeCovarianceHistory);
              extern PyTypeObject *PY_TYPE(AttitudeCovarianceHistory);

              class t_AttitudeCovarianceHistory {
              public:
                PyObject_HEAD
                AttitudeCovarianceHistory object;
                static PyObject *wrap_Object(const AttitudeCovarianceHistory&);
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
