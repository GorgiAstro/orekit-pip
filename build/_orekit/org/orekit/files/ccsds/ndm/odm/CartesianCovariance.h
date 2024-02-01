#ifndef org_orekit_files_ccsds_ndm_odm_CartesianCovariance_H
#define org_orekit_files_ccsds_ndm_odm_CartesianCovariance_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
        namespace section {
          class Data;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class CartesianCovariance : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_ebbc8efa14fea36d,
                mid_getCovarianceMatrix_b2eebabce70526d8,
                mid_getEpoch_80e11148db499dda,
                mid_getReferenceFrame_0fc1562b68204151,
                mid_setCovarianceMatrixEntry_e98d7b3e971b6087,
                mid_setEpoch_8497861b879c83f7,
                mid_setReferenceFrame_2c8b859a72c0094e,
                mid_validate_1ad26e8c8c0cd65b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CartesianCovariance(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CartesianCovariance(const CartesianCovariance& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              CartesianCovariance(const ::java::util::function::Supplier &);

              ::org::hipparchus::linear::RealMatrix getCovarianceMatrix() const;
              ::org::orekit::time::AbsoluteDate getEpoch() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getReferenceFrame() const;
              void setCovarianceMatrixEntry(jint, jint, jdouble) const;
              void setEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
              void validate(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(CartesianCovariance);
            extern PyTypeObject *PY_TYPE(CartesianCovariance);

            class t_CartesianCovariance {
            public:
              PyObject_HEAD
              CartesianCovariance object;
              static PyObject *wrap_Object(const CartesianCovariance&);
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
