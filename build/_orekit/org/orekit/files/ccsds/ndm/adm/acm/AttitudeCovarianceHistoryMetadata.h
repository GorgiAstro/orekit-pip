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
                  mid_init$_0640e6acf969ed28,
                  mid_getCovBasis_3cffd47377eca18a,
                  mid_getCovBasisID_3cffd47377eca18a,
                  mid_getCovID_3cffd47377eca18a,
                  mid_getCovPrevID_3cffd47377eca18a,
                  mid_getCovReferenceFrame_98f5fcaff3e3f9d2,
                  mid_getCovType_270107b6f5cd254c,
                  mid_setCovBasis_f5ffdf29129ef90a,
                  mid_setCovBasisID_f5ffdf29129ef90a,
                  mid_setCovID_f5ffdf29129ef90a,
                  mid_setCovPrevID_f5ffdf29129ef90a,
                  mid_setCovReferenceFrame_f55eee1236275bb1,
                  mid_setCovType_424aa6ac7cc5c170,
                  mid_validate_10f281d777284cea,
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
