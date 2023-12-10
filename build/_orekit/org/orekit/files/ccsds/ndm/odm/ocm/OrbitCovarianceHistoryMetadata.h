#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovarianceHistoryMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
              class Ordering;
            }
          }
        }
        namespace definitions {
          class FrameFacade;
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace time {
      class AbsoluteDate;
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
                  mid_init$_600a2a61652bc473,
                  mid_getCovBasis_11b109bd155ca898,
                  mid_getCovBasisID_11b109bd155ca898,
                  mid_getCovConfidence_dff5885c2c873297,
                  mid_getCovFrameEpoch_85703d13e302437e,
                  mid_getCovID_11b109bd155ca898,
                  mid_getCovNextID_11b109bd155ca898,
                  mid_getCovOrdering_99f30435104fb7a1,
                  mid_getCovPrevID_11b109bd155ca898,
                  mid_getCovReferenceFrame_5d5dd95b04037824,
                  mid_getCovScaleMax_dff5885c2c873297,
                  mid_getCovScaleMin_dff5885c2c873297,
                  mid_getCovType_f6a584069fbe1b12,
                  mid_getCovUnits_2afa36052df4765d,
                  mid_setCovBasis_d0bc48d5b00dc40c,
                  mid_setCovBasisID_d0bc48d5b00dc40c,
                  mid_setCovConfidence_17db3a65980d3441,
                  mid_setCovFrameEpoch_600a2a61652bc473,
                  mid_setCovID_d0bc48d5b00dc40c,
                  mid_setCovNextID_d0bc48d5b00dc40c,
                  mid_setCovOrdering_3f694760f2dd1e10,
                  mid_setCovPrevID_d0bc48d5b00dc40c,
                  mid_setCovReferenceFrame_849bc9e3b38b9bcb,
                  mid_setCovScaleMax_17db3a65980d3441,
                  mid_setCovScaleMin_17db3a65980d3441,
                  mid_setCovType_fa6b10c2faa6bff6,
                  mid_setCovUnits_de3e021e7266b71e,
                  mid_validate_17db3a65980d3441,
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
