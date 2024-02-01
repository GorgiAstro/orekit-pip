#ifndef org_orekit_files_ccsds_ndm_odm_CartesianCovarianceWriter_H
#define org_orekit_files_ccsds_ndm_odm_CartesianCovarianceWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class CartesianCovariance;
          }
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
        namespace ndm {
          namespace odm {

            class CartesianCovarianceWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_init$_db5fbd02eabc380d,
                mid_writeContent_05c6d36d73082fa6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CartesianCovarianceWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CartesianCovarianceWriter(const CartesianCovarianceWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}

              CartesianCovarianceWriter(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance &);
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
            extern PyType_Def PY_TYPE_DEF(CartesianCovarianceWriter);
            extern PyTypeObject *PY_TYPE(CartesianCovarianceWriter);

            class t_CartesianCovarianceWriter {
            public:
              PyObject_HEAD
              CartesianCovarianceWriter object;
              static PyObject *wrap_Object(const CartesianCovarianceWriter&);
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
