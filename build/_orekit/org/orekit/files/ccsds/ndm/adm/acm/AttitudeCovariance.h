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
                  mid_init$_b8baade554523355,
                  mid_getDate_aaa854c403487cf3,
                  mid_getMatrix_6938007bdd8d6602,
                  mid_getType_10ff8ccfa18eb164,
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
