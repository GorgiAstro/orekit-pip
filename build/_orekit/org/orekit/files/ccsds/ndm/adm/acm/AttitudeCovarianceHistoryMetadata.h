#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
        namespace definitions {
          class FrameFacade;
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
          namespace adm {
            namespace acm {

              class AttitudeCovarianceHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getCovBasis_d2c8eb4129821f0e,
                  mid_getCovBasisID_d2c8eb4129821f0e,
                  mid_getCovID_d2c8eb4129821f0e,
                  mid_getCovPrevID_d2c8eb4129821f0e,
                  mid_getCovReferenceFrame_0fc1562b68204151,
                  mid_getCovType_74687e132732dee9,
                  mid_setCovBasis_105e1eadb709d9ac,
                  mid_setCovBasisID_105e1eadb709d9ac,
                  mid_setCovID_105e1eadb709d9ac,
                  mid_setCovPrevID_105e1eadb709d9ac,
                  mid_setCovReferenceFrame_2c8b859a72c0094e,
                  mid_setCovType_fceaef4829f7546b,
                  mid_validate_1ad26e8c8c0cd65b,
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
