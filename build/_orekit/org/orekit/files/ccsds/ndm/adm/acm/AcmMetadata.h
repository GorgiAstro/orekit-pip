#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmMetadata_H

#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"

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
          namespace adm {
            namespace acm {

              class AcmMetadata : public ::org::orekit::files::ccsds::ndm::adm::AdmMetadata {
               public:
                enum {
                  mid_init$_e28302a82adb77ed,
                  mid_getAcmDataElements_d751c1a57012b438,
                  mid_getCatalogName_d2c8eb4129821f0e,
                  mid_getEpochT0_80e11148db499dda,
                  mid_getInternationalDesignator_d2c8eb4129821f0e,
                  mid_getNextLeapEpoch_80e11148db499dda,
                  mid_getNextLeapTaimutc_9981f74b2d109da6,
                  mid_getObjectDesignator_d2c8eb4129821f0e,
                  mid_getOdmMessageLink_d2c8eb4129821f0e,
                  mid_getOriginatorAddress_d2c8eb4129821f0e,
                  mid_getOriginatorEmail_d2c8eb4129821f0e,
                  mid_getOriginatorPOC_d2c8eb4129821f0e,
                  mid_getOriginatorPhone_d2c8eb4129821f0e,
                  mid_getOriginatorPosition_d2c8eb4129821f0e,
                  mid_getStartTime_80e11148db499dda,
                  mid_getStopTime_80e11148db499dda,
                  mid_getTaimutcT0_9981f74b2d109da6,
                  mid_setAcmDataElements_aa335fea495d60e0,
                  mid_setCatalogName_105e1eadb709d9ac,
                  mid_setEpochT0_8497861b879c83f7,
                  mid_setInternationalDesignator_105e1eadb709d9ac,
                  mid_setNextLeapEpoch_8497861b879c83f7,
                  mid_setNextLeapTaimutc_1ad26e8c8c0cd65b,
                  mid_setObjectDesignator_105e1eadb709d9ac,
                  mid_setOdmMessageLink_105e1eadb709d9ac,
                  mid_setOriginatorAddress_105e1eadb709d9ac,
                  mid_setOriginatorEmail_105e1eadb709d9ac,
                  mid_setOriginatorPOC_105e1eadb709d9ac,
                  mid_setOriginatorPhone_105e1eadb709d9ac,
                  mid_setOriginatorPosition_105e1eadb709d9ac,
                  mid_setStartTime_8497861b879c83f7,
                  mid_setStopTime_8497861b879c83f7,
                  mid_setTaimutcT0_1ad26e8c8c0cd65b,
                  mid_validate_1ad26e8c8c0cd65b,
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
