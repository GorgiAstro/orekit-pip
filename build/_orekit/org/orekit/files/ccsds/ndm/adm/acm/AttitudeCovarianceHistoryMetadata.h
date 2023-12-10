#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
                  mid_init$_0fa09c18fee449d5,
                  mid_getCovBasis_11b109bd155ca898,
                  mid_getCovBasisID_11b109bd155ca898,
                  mid_getCovID_11b109bd155ca898,
                  mid_getCovPrevID_11b109bd155ca898,
                  mid_getCovReferenceFrame_5d5dd95b04037824,
                  mid_getCovType_dbbc6c3c22ca640c,
                  mid_setCovBasis_d0bc48d5b00dc40c,
                  mid_setCovBasisID_d0bc48d5b00dc40c,
                  mid_setCovID_d0bc48d5b00dc40c,
                  mid_setCovPrevID_d0bc48d5b00dc40c,
                  mid_setCovReferenceFrame_849bc9e3b38b9bcb,
                  mid_setCovType_c9a39b1c926f77b0,
                  mid_validate_17db3a65980d3441,
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
