#ifndef org_orekit_files_ccsds_ndm_odm_CartesianCovariance_H
#define org_orekit_files_ccsds_ndm_odm_CartesianCovariance_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
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
                mid_init$_4c1598888ef52491,
                mid_getCovarianceMatrix_688b496048ff947b,
                mid_getEpoch_85703d13e302437e,
                mid_getReferenceFrame_5d5dd95b04037824,
                mid_setCovarianceMatrixEntry_1506189166690b5e,
                mid_setEpoch_600a2a61652bc473,
                mid_setReferenceFrame_849bc9e3b38b9bcb,
                mid_validate_17db3a65980d3441,
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
