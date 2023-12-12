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
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace section {
          class Data;
        }
        namespace definitions {
          class FrameFacade;
        }
      }
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
                mid_init$_d1f229fbdda3f023,
                mid_getCovarianceMatrix_70a207fcbc031df2,
                mid_getEpoch_7a97f7e149e79afb,
                mid_getReferenceFrame_98f5fcaff3e3f9d2,
                mid_setCovarianceMatrixEntry_754312f3734d6e2f,
                mid_setEpoch_20affcbd28542333,
                mid_setReferenceFrame_f55eee1236275bb1,
                mid_validate_10f281d777284cea,
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
