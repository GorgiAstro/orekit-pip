#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H

#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"

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
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AcmElements;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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

              class AcmMetadata : public ::org::orekit::files::ccsds::ndm::adm::AdmMetadata {
               public:
                enum {
                  mid_init$_47d99c12e4a42886,
                  mid_getAcmDataElements_2afa36052df4765d,
                  mid_getCatalogName_11b109bd155ca898,
                  mid_getEpochT0_85703d13e302437e,
                  mid_getInternationalDesignator_11b109bd155ca898,
                  mid_getNextLeapEpoch_85703d13e302437e,
                  mid_getNextLeapTaimutc_dff5885c2c873297,
                  mid_getObjectDesignator_11b109bd155ca898,
                  mid_getOdmMessageLink_11b109bd155ca898,
                  mid_getOriginatorAddress_11b109bd155ca898,
                  mid_getOriginatorEmail_11b109bd155ca898,
                  mid_getOriginatorPOC_11b109bd155ca898,
                  mid_getOriginatorPhone_11b109bd155ca898,
                  mid_getOriginatorPosition_11b109bd155ca898,
                  mid_getStartTime_85703d13e302437e,
                  mid_getStopTime_85703d13e302437e,
                  mid_getTaimutcT0_dff5885c2c873297,
                  mid_setAcmDataElements_de3e021e7266b71e,
                  mid_setCatalogName_d0bc48d5b00dc40c,
                  mid_setEpochT0_600a2a61652bc473,
                  mid_setInternationalDesignator_d0bc48d5b00dc40c,
                  mid_setNextLeapEpoch_600a2a61652bc473,
                  mid_setNextLeapTaimutc_17db3a65980d3441,
                  mid_setObjectDesignator_d0bc48d5b00dc40c,
                  mid_setOdmMessageLink_d0bc48d5b00dc40c,
                  mid_setOriginatorAddress_d0bc48d5b00dc40c,
                  mid_setOriginatorEmail_d0bc48d5b00dc40c,
                  mid_setOriginatorPOC_d0bc48d5b00dc40c,
                  mid_setOriginatorPhone_d0bc48d5b00dc40c,
                  mid_setOriginatorPosition_d0bc48d5b00dc40c,
                  mid_setStartTime_600a2a61652bc473,
                  mid_setStopTime_600a2a61652bc473,
                  mid_setTaimutcT0_17db3a65980d3441,
                  mid_validate_17db3a65980d3441,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmMetadata(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmMetadata(const AcmMetadata& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(obj) {}

                AcmMetadata(const ::org::orekit::data::DataContext &);

                ::java::util::List getAcmDataElements() const;
                ::java::lang::String getCatalogName() const;
                ::org::orekit::time::AbsoluteDate getEpochT0() const;
                ::java::lang::String getInternationalDesignator() const;
                ::org::orekit::time::AbsoluteDate getNextLeapEpoch() const;
                jdouble getNextLeapTaimutc() const;
                ::java::lang::String getObjectDesignator() const;
                ::java::lang::String getOdmMessageLink() const;
                ::java::lang::String getOriginatorAddress() const;
                ::java::lang::String getOriginatorEmail() const;
                ::java::lang::String getOriginatorPOC() const;
                ::java::lang::String getOriginatorPhone() const;
                ::java::lang::String getOriginatorPosition() const;
                ::org::orekit::time::AbsoluteDate getStartTime() const;
                ::org::orekit::time::AbsoluteDate getStopTime() const;
                jdouble getTaimutcT0() const;
                void setAcmDataElements(const ::java::util::List &) const;
                void setCatalogName(const ::java::lang::String &) const;
                void setEpochT0(const ::org::orekit::time::AbsoluteDate &) const;
                void setInternationalDesignator(const ::java::lang::String &) const;
                void setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setNextLeapTaimutc(jdouble) const;
                void setObjectDesignator(const ::java::lang::String &) const;
                void setOdmMessageLink(const ::java::lang::String &) const;
                void setOriginatorAddress(const ::java::lang::String &) const;
                void setOriginatorEmail(const ::java::lang::String &) const;
                void setOriginatorPOC(const ::java::lang::String &) const;
                void setOriginatorPhone(const ::java::lang::String &) const;
                void setOriginatorPosition(const ::java::lang::String &) const;
                void setStartTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setStopTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setTaimutcT0(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(AcmMetadata);
              extern PyTypeObject *PY_TYPE(AcmMetadata);

              class t_AcmMetadata {
              public:
                PyObject_HEAD
                AcmMetadata object;
                static PyObject *wrap_Object(const AcmMetadata&);
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
