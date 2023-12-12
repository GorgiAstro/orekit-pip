#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovariance_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeCovarianceType;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
  namespace hipparchus {
    namespace linear {
      class DiagonalMatrix;
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
        namespace ndm {
          namespace adm {
            namespace acm {

              class AttitudeCovariance : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_bb99cd754d655876,
                  mid_getDate_7a97f7e149e79afb,
                  mid_getMatrix_b1a245683de9728d,
                  mid_getType_270107b6f5cd254c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeCovariance(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeCovariance(const AttitudeCovariance& obj) : ::java::lang::Object(obj) {}

                AttitudeCovariance(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType &, const ::org::orekit::time::AbsoluteDate &, const JArray< ::java::lang::String > &, jint);

                ::org::orekit::time::AbsoluteDate getDate() const;
                ::org::hipparchus::linear::DiagonalMatrix getMatrix() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType getType() const;
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
              extern PyType_Def PY_TYPE_DEF(AttitudeCovariance);
              extern PyTypeObject *PY_TYPE(AttitudeCovariance);

              class t_AttitudeCovariance {
              public:
                PyObject_HEAD
                AttitudeCovariance object;
                static PyObject *wrap_Object(const AttitudeCovariance&);
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
