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
                mid_init$_80d0ce2c6f944208,
                mid_getCovarianceMatrix_f77d745f2128c391,
                mid_getEpoch_c325492395d89b24,
                mid_getReferenceFrame_69d8be1b6b0a1a94,
                mid_setCovarianceMatrixEntry_94fe8d9ffeb50676,
                mid_setEpoch_02135a6ef25adb4b,
                mid_setReferenceFrame_4755133c5c4c59be,
                mid_validate_8ba9fe7a847cecad,
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
