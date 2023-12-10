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
                mid_init$_79e8f9691be69c80,
                mid_getCovarianceMatrix_7116bbecdd8ceb21,
                mid_getEpoch_aaa854c403487cf3,
                mid_getReferenceFrame_aa70fdb14ae9305f,
                mid_setCovarianceMatrixEntry_78e41e7b5124a628,
                mid_setEpoch_e82d68cd9f886886,
                mid_setReferenceFrame_a455f3ff24eb0b47,
                mid_validate_77e0f9a1f260e2e5,
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
