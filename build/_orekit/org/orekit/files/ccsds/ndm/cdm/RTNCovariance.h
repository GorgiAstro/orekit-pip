#ifndef org_orekit_files_ccsds_ndm_cdm_RTNCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_RTNCovariance_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class RTNCovariance : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_getCdrgdrg_b74f83833fdad017,
                mid_getCdrgn_b74f83833fdad017,
                mid_getCdrgndot_b74f83833fdad017,
                mid_getCdrgr_b74f83833fdad017,
                mid_getCdrgrdot_b74f83833fdad017,
                mid_getCdrgt_b74f83833fdad017,
                mid_getCdrgtdot_b74f83833fdad017,
                mid_getCndotn_b74f83833fdad017,
                mid_getCndotndot_b74f83833fdad017,
                mid_getCndotr_b74f83833fdad017,
                mid_getCndotrdot_b74f83833fdad017,
                mid_getCndott_b74f83833fdad017,
                mid_getCndottdot_b74f83833fdad017,
                mid_getCnn_b74f83833fdad017,
                mid_getCnr_b74f83833fdad017,
                mid_getCnt_b74f83833fdad017,
                mid_getCrdotn_b74f83833fdad017,
                mid_getCrdotr_b74f83833fdad017,
                mid_getCrdotrdot_b74f83833fdad017,
                mid_getCrdott_b74f83833fdad017,
                mid_getCrr_b74f83833fdad017,
                mid_getCsrpdrg_b74f83833fdad017,
                mid_getCsrpn_b74f83833fdad017,
                mid_getCsrpndot_b74f83833fdad017,
                mid_getCsrpr_b74f83833fdad017,
                mid_getCsrprdot_b74f83833fdad017,
                mid_getCsrpsrp_b74f83833fdad017,
                mid_getCsrpt_b74f83833fdad017,
                mid_getCsrptdot_b74f83833fdad017,
                mid_getCtdotn_b74f83833fdad017,
                mid_getCtdotr_b74f83833fdad017,
                mid_getCtdotrdot_b74f83833fdad017,
                mid_getCtdott_b74f83833fdad017,
                mid_getCtdottdot_b74f83833fdad017,
                mid_getCthrdrg_b74f83833fdad017,
                mid_getCthrn_b74f83833fdad017,
                mid_getCthrndot_b74f83833fdad017,
                mid_getCthrr_b74f83833fdad017,
                mid_getCthrrdot_b74f83833fdad017,
                mid_getCthrsrp_b74f83833fdad017,
                mid_getCthrt_b74f83833fdad017,
                mid_getCthrtdot_b74f83833fdad017,
                mid_getCthrthr_b74f83833fdad017,
                mid_getCtr_b74f83833fdad017,
                mid_getCtt_b74f83833fdad017,
                mid_getRTNCovarianceMatrix_f77d745f2128c391,
                mid_setCdrgdrg_8ba9fe7a847cecad,
                mid_setCdrgn_8ba9fe7a847cecad,
                mid_setCdrgndot_8ba9fe7a847cecad,
                mid_setCdrgr_8ba9fe7a847cecad,
                mid_setCdrgrdot_8ba9fe7a847cecad,
                mid_setCdrgt_8ba9fe7a847cecad,
                mid_setCdrgtdot_8ba9fe7a847cecad,
                mid_setCndotn_8ba9fe7a847cecad,
                mid_setCndotndot_8ba9fe7a847cecad,
                mid_setCndotr_8ba9fe7a847cecad,
                mid_setCndotrdot_8ba9fe7a847cecad,
                mid_setCndott_8ba9fe7a847cecad,
                mid_setCndottdot_8ba9fe7a847cecad,
                mid_setCnn_8ba9fe7a847cecad,
                mid_setCnr_8ba9fe7a847cecad,
                mid_setCnt_8ba9fe7a847cecad,
                mid_setCovarianceMatrixEntry_94fe8d9ffeb50676,
                mid_setCrdotn_8ba9fe7a847cecad,
                mid_setCrdotr_8ba9fe7a847cecad,
                mid_setCrdotrdot_8ba9fe7a847cecad,
                mid_setCrdott_8ba9fe7a847cecad,
                mid_setCrr_8ba9fe7a847cecad,
                mid_setCsrpdrg_8ba9fe7a847cecad,
                mid_setCsrpn_8ba9fe7a847cecad,
                mid_setCsrpndot_8ba9fe7a847cecad,
                mid_setCsrpr_8ba9fe7a847cecad,
                mid_setCsrprdot_8ba9fe7a847cecad,
                mid_setCsrpsrp_8ba9fe7a847cecad,
                mid_setCsrpt_8ba9fe7a847cecad,
                mid_setCsrptdot_8ba9fe7a847cecad,
                mid_setCtdotn_8ba9fe7a847cecad,
                mid_setCtdotr_8ba9fe7a847cecad,
                mid_setCtdotrdot_8ba9fe7a847cecad,
                mid_setCtdott_8ba9fe7a847cecad,
                mid_setCtdottdot_8ba9fe7a847cecad,
                mid_setCthrdrg_8ba9fe7a847cecad,
                mid_setCthrn_8ba9fe7a847cecad,
                mid_setCthrndot_8ba9fe7a847cecad,
                mid_setCthrr_8ba9fe7a847cecad,
                mid_setCthrrdot_8ba9fe7a847cecad,
                mid_setCthrsrp_8ba9fe7a847cecad,
                mid_setCthrt_8ba9fe7a847cecad,
                mid_setCthrtdot_8ba9fe7a847cecad,
                mid_setCthrthr_8ba9fe7a847cecad,
                mid_setCtr_8ba9fe7a847cecad,
                mid_setCtt_8ba9fe7a847cecad,
                mid_validate_8ba9fe7a847cecad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RTNCovariance(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RTNCovariance(const RTNCovariance& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              RTNCovariance();

              jdouble getCdrgdrg() const;
              jdouble getCdrgn() const;
              jdouble getCdrgndot() const;
              jdouble getCdrgr() const;
              jdouble getCdrgrdot() const;
              jdouble getCdrgt() const;
              jdouble getCdrgtdot() const;
              jdouble getCndotn() const;
              jdouble getCndotndot() const;
              jdouble getCndotr() const;
              jdouble getCndotrdot() const;
              jdouble getCndott() const;
              jdouble getCndottdot() const;
              jdouble getCnn() const;
              jdouble getCnr() const;
              jdouble getCnt() const;
              jdouble getCrdotn() const;
              jdouble getCrdotr() const;
              jdouble getCrdotrdot() const;
              jdouble getCrdott() const;
              jdouble getCrr() const;
              jdouble getCsrpdrg() const;
              jdouble getCsrpn() const;
              jdouble getCsrpndot() const;
              jdouble getCsrpr() const;
              jdouble getCsrprdot() const;
              jdouble getCsrpsrp() const;
              jdouble getCsrpt() const;
              jdouble getCsrptdot() const;
              jdouble getCtdotn() const;
              jdouble getCtdotr() const;
              jdouble getCtdotrdot() const;
              jdouble getCtdott() const;
              jdouble getCtdottdot() const;
              jdouble getCthrdrg() const;
              jdouble getCthrn() const;
              jdouble getCthrndot() const;
              jdouble getCthrr() const;
              jdouble getCthrrdot() const;
              jdouble getCthrsrp() const;
              jdouble getCthrt() const;
              jdouble getCthrtdot() const;
              jdouble getCthrthr() const;
              jdouble getCtr() const;
              jdouble getCtt() const;
              ::org::hipparchus::linear::RealMatrix getRTNCovarianceMatrix() const;
              void setCdrgdrg(jdouble) const;
              void setCdrgn(jdouble) const;
              void setCdrgndot(jdouble) const;
              void setCdrgr(jdouble) const;
              void setCdrgrdot(jdouble) const;
              void setCdrgt(jdouble) const;
              void setCdrgtdot(jdouble) const;
              void setCndotn(jdouble) const;
              void setCndotndot(jdouble) const;
              void setCndotr(jdouble) const;
              void setCndotrdot(jdouble) const;
              void setCndott(jdouble) const;
              void setCndottdot(jdouble) const;
              void setCnn(jdouble) const;
              void setCnr(jdouble) const;
              void setCnt(jdouble) const;
              void setCovarianceMatrixEntry(jint, jint, jdouble) const;
              void setCrdotn(jdouble) const;
              void setCrdotr(jdouble) const;
              void setCrdotrdot(jdouble) const;
              void setCrdott(jdouble) const;
              void setCrr(jdouble) const;
              void setCsrpdrg(jdouble) const;
              void setCsrpn(jdouble) const;
              void setCsrpndot(jdouble) const;
              void setCsrpr(jdouble) const;
              void setCsrprdot(jdouble) const;
              void setCsrpsrp(jdouble) const;
              void setCsrpt(jdouble) const;
              void setCsrptdot(jdouble) const;
              void setCtdotn(jdouble) const;
              void setCtdotr(jdouble) const;
              void setCtdotrdot(jdouble) const;
              void setCtdott(jdouble) const;
              void setCtdottdot(jdouble) const;
              void setCthrdrg(jdouble) const;
              void setCthrn(jdouble) const;
              void setCthrndot(jdouble) const;
              void setCthrr(jdouble) const;
              void setCthrrdot(jdouble) const;
              void setCthrsrp(jdouble) const;
              void setCthrt(jdouble) const;
              void setCthrtdot(jdouble) const;
              void setCthrthr(jdouble) const;
              void setCtr(jdouble) const;
              void setCtt(jdouble) const;
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(RTNCovariance);
            extern PyTypeObject *PY_TYPE(RTNCovariance);

            class t_RTNCovariance {
            public:
              PyObject_HEAD
              RTNCovariance object;
              static PyObject *wrap_Object(const RTNCovariance&);
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
