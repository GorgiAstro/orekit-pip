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
                mid_init$_7ae3461a92a43152,
                mid_getCdrgdrg_456d9a2f64d6b28d,
                mid_getCdrgn_456d9a2f64d6b28d,
                mid_getCdrgndot_456d9a2f64d6b28d,
                mid_getCdrgr_456d9a2f64d6b28d,
                mid_getCdrgrdot_456d9a2f64d6b28d,
                mid_getCdrgt_456d9a2f64d6b28d,
                mid_getCdrgtdot_456d9a2f64d6b28d,
                mid_getCndotn_456d9a2f64d6b28d,
                mid_getCndotndot_456d9a2f64d6b28d,
                mid_getCndotr_456d9a2f64d6b28d,
                mid_getCndotrdot_456d9a2f64d6b28d,
                mid_getCndott_456d9a2f64d6b28d,
                mid_getCndottdot_456d9a2f64d6b28d,
                mid_getCnn_456d9a2f64d6b28d,
                mid_getCnr_456d9a2f64d6b28d,
                mid_getCnt_456d9a2f64d6b28d,
                mid_getCrdotn_456d9a2f64d6b28d,
                mid_getCrdotr_456d9a2f64d6b28d,
                mid_getCrdotrdot_456d9a2f64d6b28d,
                mid_getCrdott_456d9a2f64d6b28d,
                mid_getCrr_456d9a2f64d6b28d,
                mid_getCsrpdrg_456d9a2f64d6b28d,
                mid_getCsrpn_456d9a2f64d6b28d,
                mid_getCsrpndot_456d9a2f64d6b28d,
                mid_getCsrpr_456d9a2f64d6b28d,
                mid_getCsrprdot_456d9a2f64d6b28d,
                mid_getCsrpsrp_456d9a2f64d6b28d,
                mid_getCsrpt_456d9a2f64d6b28d,
                mid_getCsrptdot_456d9a2f64d6b28d,
                mid_getCtdotn_456d9a2f64d6b28d,
                mid_getCtdotr_456d9a2f64d6b28d,
                mid_getCtdotrdot_456d9a2f64d6b28d,
                mid_getCtdott_456d9a2f64d6b28d,
                mid_getCtdottdot_456d9a2f64d6b28d,
                mid_getCthrdrg_456d9a2f64d6b28d,
                mid_getCthrn_456d9a2f64d6b28d,
                mid_getCthrndot_456d9a2f64d6b28d,
                mid_getCthrr_456d9a2f64d6b28d,
                mid_getCthrrdot_456d9a2f64d6b28d,
                mid_getCthrsrp_456d9a2f64d6b28d,
                mid_getCthrt_456d9a2f64d6b28d,
                mid_getCthrtdot_456d9a2f64d6b28d,
                mid_getCthrthr_456d9a2f64d6b28d,
                mid_getCtr_456d9a2f64d6b28d,
                mid_getCtt_456d9a2f64d6b28d,
                mid_getRTNCovarianceMatrix_7116bbecdd8ceb21,
                mid_setCdrgdrg_77e0f9a1f260e2e5,
                mid_setCdrgn_77e0f9a1f260e2e5,
                mid_setCdrgndot_77e0f9a1f260e2e5,
                mid_setCdrgr_77e0f9a1f260e2e5,
                mid_setCdrgrdot_77e0f9a1f260e2e5,
                mid_setCdrgt_77e0f9a1f260e2e5,
                mid_setCdrgtdot_77e0f9a1f260e2e5,
                mid_setCndotn_77e0f9a1f260e2e5,
                mid_setCndotndot_77e0f9a1f260e2e5,
                mid_setCndotr_77e0f9a1f260e2e5,
                mid_setCndotrdot_77e0f9a1f260e2e5,
                mid_setCndott_77e0f9a1f260e2e5,
                mid_setCndottdot_77e0f9a1f260e2e5,
                mid_setCnn_77e0f9a1f260e2e5,
                mid_setCnr_77e0f9a1f260e2e5,
                mid_setCnt_77e0f9a1f260e2e5,
                mid_setCovarianceMatrixEntry_78e41e7b5124a628,
                mid_setCrdotn_77e0f9a1f260e2e5,
                mid_setCrdotr_77e0f9a1f260e2e5,
                mid_setCrdotrdot_77e0f9a1f260e2e5,
                mid_setCrdott_77e0f9a1f260e2e5,
                mid_setCrr_77e0f9a1f260e2e5,
                mid_setCsrpdrg_77e0f9a1f260e2e5,
                mid_setCsrpn_77e0f9a1f260e2e5,
                mid_setCsrpndot_77e0f9a1f260e2e5,
                mid_setCsrpr_77e0f9a1f260e2e5,
                mid_setCsrprdot_77e0f9a1f260e2e5,
                mid_setCsrpsrp_77e0f9a1f260e2e5,
                mid_setCsrpt_77e0f9a1f260e2e5,
                mid_setCsrptdot_77e0f9a1f260e2e5,
                mid_setCtdotn_77e0f9a1f260e2e5,
                mid_setCtdotr_77e0f9a1f260e2e5,
                mid_setCtdotrdot_77e0f9a1f260e2e5,
                mid_setCtdott_77e0f9a1f260e2e5,
                mid_setCtdottdot_77e0f9a1f260e2e5,
                mid_setCthrdrg_77e0f9a1f260e2e5,
                mid_setCthrn_77e0f9a1f260e2e5,
                mid_setCthrndot_77e0f9a1f260e2e5,
                mid_setCthrr_77e0f9a1f260e2e5,
                mid_setCthrrdot_77e0f9a1f260e2e5,
                mid_setCthrsrp_77e0f9a1f260e2e5,
                mid_setCthrt_77e0f9a1f260e2e5,
                mid_setCthrtdot_77e0f9a1f260e2e5,
                mid_setCthrthr_77e0f9a1f260e2e5,
                mid_setCtr_77e0f9a1f260e2e5,
                mid_setCtt_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
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
