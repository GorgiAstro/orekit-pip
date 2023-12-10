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
              class AttitudeCovariance;
              class AttitudeCovarianceHistoryMetadata;
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
                  mid_init$_186db5cf0e2febaa,
                  mid_getCovariances_a6156df500549a58,
                  mid_getMetadata_27ea627e4253db55,
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