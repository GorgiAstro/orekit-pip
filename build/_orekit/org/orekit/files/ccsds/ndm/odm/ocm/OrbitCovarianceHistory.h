#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistory_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitCovariance;
              class OrbitCovarianceHistoryMetadata;
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
          namespace odm {
            namespace ocm {

              class OrbitCovarianceHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_9302c61a34ecedaf,
                  mid_getCovariances_a6156df500549a58,
                  mid_getMetadata_ab36bd1c715bb8f7,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitCovarianceHistory(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitCovarianceHistory(const OrbitCovarianceHistory& obj) : ::java::lang::Object(obj) {}

                OrbitCovarianceHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata &, const ::java::util::List &);

                ::java::util::List getCovariances() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata getMetadata() const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OrbitCovarianceHistory);
              extern PyTypeObject *PY_TYPE(OrbitCovarianceHistory);

              class t_OrbitCovarianceHistory {
              public:
                PyObject_HEAD
                OrbitCovarianceHistory object;
                static PyObject *wrap_Object(const OrbitCovarianceHistory&);
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
