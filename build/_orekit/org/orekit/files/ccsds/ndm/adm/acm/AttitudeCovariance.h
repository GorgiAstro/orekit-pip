#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovariance_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
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
                  mid_init$_671b73630fd8606f,
                  mid_getDate_80e11148db499dda,
                  mid_getMatrix_4fb5d9750db49b3f,
                  mid_getType_74687e132732dee9,
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
