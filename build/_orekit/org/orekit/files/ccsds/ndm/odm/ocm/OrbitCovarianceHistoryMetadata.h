#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
              class Ordering;
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
          namespace odm {
            namespace ocm {

              class OrbitCovarianceHistoryMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_20affcbd28542333,
                  mid_getCovBasis_3cffd47377eca18a,
                  mid_getCovBasisID_3cffd47377eca18a,
                  mid_getCovConfidence_557b8123390d8d0c,
                  mid_getCovFrameEpoch_7a97f7e149e79afb,
                  mid_getCovID_3cffd47377eca18a,
                  mid_getCovNextID_3cffd47377eca18a,
                  mid_getCovOrdering_315fd39b1c41dd4c,
                  mid_getCovPrevID_3cffd47377eca18a,
                  mid_getCovReferenceFrame_98f5fcaff3e3f9d2,
                  mid_getCovScaleMax_557b8123390d8d0c,
                  mid_getCovScaleMin_557b8123390d8d0c,
                  mid_getCovType_ada74ce902d29422,
                  mid_getCovUnits_0d9551367f7ecdef,
                  mid_setCovBasis_f5ffdf29129ef90a,
                  mid_setCovBasisID_f5ffdf29129ef90a,
                  mid_setCovConfidence_10f281d777284cea,
                  mid_setCovFrameEpoch_20affcbd28542333,
                  mid_setCovID_f5ffdf29129ef90a,
                  mid_setCovNextID_f5ffdf29129ef90a,
                  mid_setCovOrdering_aaad25c735d17afe,
                  mid_setCovPrevID_f5ffdf29129ef90a,
                  mid_setCovReferenceFrame_f55eee1236275bb1,
                  mid_setCovScaleMax_10f281d777284cea,
                  mid_setCovScaleMin_10f281d777284cea,
                  mid_setCovType_94fd56ae4b55b80e,
                  mid_setCovUnits_4ccaedadb068bdeb,
                  mid_validate_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitCovarianceHistoryMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitCovarianceHistoryMetadata(const OrbitCovarianceHistoryMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                OrbitCovarianceHistoryMetadata(const ::org::orekit::time::AbsoluteDate &);

                ::java::lang::String getCovBasis() const;
                ::java::lang::String getCovBasisID() const;
                jdouble getCovConfidence() const;
                ::org::orekit::time::AbsoluteDate getCovFrameEpoch() const;
                ::java::lang::String getCovID() const;
                ::java::lang::String getCovNextID() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering getCovOrdering() const;
                ::java::lang::String getCovPrevID() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getCovReferenceFrame() const;
                jdouble getCovScaleMax() const;
                jdouble getCovScaleMin() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType getCovType() const;
                ::java::util::List getCovUnits() const;
                void setCovBasis(const ::java::lang::String &) const;
                void setCovBasisID(const ::java::lang::String &) const;
                void setCovConfidence(jdouble) const;
                void setCovFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setCovID(const ::java::lang::String &) const;
                void setCovNextID(const ::java::lang::String &) const;
                void setCovOrdering(const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering &) const;
                void setCovPrevID(const ::java::lang::String &) const;
                void setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setCovScaleMax(jdouble) const;
                void setCovScaleMin(jdouble) const;
                void setCovType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType &) const;
                void setCovUnits(const ::java::util::List &) const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OrbitCovarianceHistoryMetadata);
              extern PyTypeObject *PY_TYPE(OrbitCovarianceHistoryMetadata);

              class t_OrbitCovarianceHistoryMetadata {
              public:
                PyObject_HEAD
                OrbitCovarianceHistoryMetadata object;
                static PyObject *wrap_Object(const OrbitCovarianceHistoryMetadata&);
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
