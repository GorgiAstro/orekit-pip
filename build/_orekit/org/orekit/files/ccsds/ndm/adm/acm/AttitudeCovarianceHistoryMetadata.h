#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class String;
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              class AttitudeCovarianceHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_getCovBasis_0090f7797e403f43,
                  mid_getCovBasisID_0090f7797e403f43,
                  mid_getCovID_0090f7797e403f43,
                  mid_getCovPrevID_0090f7797e403f43,
                  mid_getCovReferenceFrame_aa70fdb14ae9305f,
                  mid_getCovType_10ff8ccfa18eb164,
                  mid_setCovBasis_e939c6558ae8d313,
                  mid_setCovBasisID_e939c6558ae8d313,
                  mid_setCovID_e939c6558ae8d313,
                  mid_setCovPrevID_e939c6558ae8d313,
                  mid_setCovReferenceFrame_a455f3ff24eb0b47,
                  mid_setCovType_f40cd56ce69cda26,
                  mid_validate_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeCovarianceHistoryMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeCovarianceHistoryMetadata(const AttitudeCovarianceHistoryMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AttitudeCovarianceHistoryMetadata();

                ::java::lang::String getCovBasis() const;
                ::java::lang::String getCovBasisID() const;
                ::java::lang::String getCovID() const;
                ::java::lang::String getCovPrevID() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getCovReferenceFrame() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType getCovType() const;
                void setCovBasis(const ::java::lang::String &) const;
                void setCovBasisID(const ::java::lang::String &) const;
                void setCovID(const ::java::lang::String &) const;
                void setCovPrevID(const ::java::lang::String &) const;
                void setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setCovType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType &) const;
                void validate(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(AttitudeCovarianceHistoryMetadata);
              extern PyTypeObject *PY_TYPE(AttitudeCovarianceHistoryMetadata);

              class t_AttitudeCovarianceHistoryMetadata {
              public:
                PyObject_HEAD
                AttitudeCovarianceHistoryMetadata object;
                static PyObject *wrap_Object(const AttitudeCovarianceHistoryMetadata&);
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
