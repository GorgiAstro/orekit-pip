#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
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
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
                  mid_init$_8497861b879c83f7,
                  mid_getCovBasis_d2c8eb4129821f0e,
                  mid_getCovBasisID_d2c8eb4129821f0e,
                  mid_getCovConfidence_9981f74b2d109da6,
                  mid_getCovFrameEpoch_80e11148db499dda,
                  mid_getCovID_d2c8eb4129821f0e,
                  mid_getCovNextID_d2c8eb4129821f0e,
                  mid_getCovOrdering_08d7eff08cd4715e,
                  mid_getCovPrevID_d2c8eb4129821f0e,
                  mid_getCovReferenceFrame_0fc1562b68204151,
                  mid_getCovScaleMax_9981f74b2d109da6,
                  mid_getCovScaleMin_9981f74b2d109da6,
                  mid_getCovType_53d3e424bd18099f,
                  mid_getCovUnits_d751c1a57012b438,
                  mid_setCovBasis_105e1eadb709d9ac,
                  mid_setCovBasisID_105e1eadb709d9ac,
                  mid_setCovConfidence_1ad26e8c8c0cd65b,
                  mid_setCovFrameEpoch_8497861b879c83f7,
                  mid_setCovID_105e1eadb709d9ac,
                  mid_setCovNextID_105e1eadb709d9ac,
                  mid_setCovOrdering_e084f07c2339d9a4,
                  mid_setCovPrevID_105e1eadb709d9ac,
                  mid_setCovReferenceFrame_2c8b859a72c0094e,
                  mid_setCovScaleMax_1ad26e8c8c0cd65b,
                  mid_setCovScaleMin_1ad26e8c8c0cd65b,
                  mid_setCovType_60e103afec7f4bee,
                  mid_setCovUnits_aa335fea495d60e0,
                  mid_validate_1ad26e8c8c0cd65b,
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
