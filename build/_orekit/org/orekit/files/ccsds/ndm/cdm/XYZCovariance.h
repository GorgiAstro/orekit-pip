#ifndef org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H

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

            class XYZCovariance : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_50a2e0b139e80a58,
                mid_getCdrgdrg_456d9a2f64d6b28d,
                mid_getCdrgx_456d9a2f64d6b28d,
                mid_getCdrgxdot_456d9a2f64d6b28d,
                mid_getCdrgy_456d9a2f64d6b28d,
                mid_getCdrgydot_456d9a2f64d6b28d,
                mid_getCdrgz_456d9a2f64d6b28d,
                mid_getCdrgzdot_456d9a2f64d6b28d,
                mid_getCsrpdrg_456d9a2f64d6b28d,
                mid_getCsrpsrp_456d9a2f64d6b28d,
                mid_getCsrpx_456d9a2f64d6b28d,
                mid_getCsrpxdot_456d9a2f64d6b28d,
                mid_getCsrpy_456d9a2f64d6b28d,
                mid_getCsrpydot_456d9a2f64d6b28d,
                mid_getCsrpz_456d9a2f64d6b28d,
                mid_getCsrpzdot_456d9a2f64d6b28d,
                mid_getCthrdrg_456d9a2f64d6b28d,
                mid_getCthrsrp_456d9a2f64d6b28d,
                mid_getCthrthr_456d9a2f64d6b28d,
                mid_getCthrx_456d9a2f64d6b28d,
                mid_getCthrxdot_456d9a2f64d6b28d,
                mid_getCthry_456d9a2f64d6b28d,
                mid_getCthrydot_456d9a2f64d6b28d,
                mid_getCthrz_456d9a2f64d6b28d,
                mid_getCthrzdot_456d9a2f64d6b28d,
                mid_getCxdotx_456d9a2f64d6b28d,
                mid_getCxdotxdot_456d9a2f64d6b28d,
                mid_getCxdoty_456d9a2f64d6b28d,
                mid_getCxdotz_456d9a2f64d6b28d,
                mid_getCxx_456d9a2f64d6b28d,
                mid_getCydotx_456d9a2f64d6b28d,
                mid_getCydotxdot_456d9a2f64d6b28d,
                mid_getCydoty_456d9a2f64d6b28d,
                mid_getCydotydot_456d9a2f64d6b28d,
                mid_getCydotz_456d9a2f64d6b28d,
                mid_getCyx_456d9a2f64d6b28d,
                mid_getCyy_456d9a2f64d6b28d,
                mid_getCzdotx_456d9a2f64d6b28d,
                mid_getCzdotxdot_456d9a2f64d6b28d,
                mid_getCzdoty_456d9a2f64d6b28d,
                mid_getCzdotydot_456d9a2f64d6b28d,
                mid_getCzdotz_456d9a2f64d6b28d,
                mid_getCzdotzdot_456d9a2f64d6b28d,
                mid_getCzx_456d9a2f64d6b28d,
                mid_getCzy_456d9a2f64d6b28d,
                mid_getCzz_456d9a2f64d6b28d,
                mid_getXYZCovarianceMatrix_7116bbecdd8ceb21,
                mid_isCovXYZset_e470b6d9e0d979db,
                mid_setCdrgdrg_77e0f9a1f260e2e5,
                mid_setCdrgx_77e0f9a1f260e2e5,
                mid_setCdrgxdot_77e0f9a1f260e2e5,
                mid_setCdrgy_77e0f9a1f260e2e5,
                mid_setCdrgydot_77e0f9a1f260e2e5,
                mid_setCdrgz_77e0f9a1f260e2e5,
                mid_setCdrgzdot_77e0f9a1f260e2e5,
                mid_setCovarianceMatrixEntry_78e41e7b5124a628,
                mid_setCsrpdrg_77e0f9a1f260e2e5,
                mid_setCsrpsrp_77e0f9a1f260e2e5,
                mid_setCsrpx_77e0f9a1f260e2e5,
                mid_setCsrpxdot_77e0f9a1f260e2e5,
                mid_setCsrpy_77e0f9a1f260e2e5,
                mid_setCsrpydot_77e0f9a1f260e2e5,
                mid_setCsrpz_77e0f9a1f260e2e5,
                mid_setCsrpzdot_77e0f9a1f260e2e5,
                mid_setCthrdrg_77e0f9a1f260e2e5,
                mid_setCthrsrp_77e0f9a1f260e2e5,
                mid_setCthrthr_77e0f9a1f260e2e5,
                mid_setCthrx_77e0f9a1f260e2e5,
                mid_setCthrxdot_77e0f9a1f260e2e5,
                mid_setCthry_77e0f9a1f260e2e5,
                mid_setCthrydot_77e0f9a1f260e2e5,
                mid_setCthrz_77e0f9a1f260e2e5,
                mid_setCthrzdot_77e0f9a1f260e2e5,
                mid_setCxdotx_77e0f9a1f260e2e5,
                mid_setCxdotxdot_77e0f9a1f260e2e5,
                mid_setCxdoty_77e0f9a1f260e2e5,
                mid_setCxdotz_77e0f9a1f260e2e5,
                mid_setCxx_77e0f9a1f260e2e5,
                mid_setCydotx_77e0f9a1f260e2e5,
                mid_setCydotxdot_77e0f9a1f260e2e5,
                mid_setCydoty_77e0f9a1f260e2e5,
                mid_setCydotydot_77e0f9a1f260e2e5,
                mid_setCydotz_77e0f9a1f260e2e5,
                mid_setCyx_77e0f9a1f260e2e5,
                mid_setCyy_77e0f9a1f260e2e5,
                mid_setCzdotx_77e0f9a1f260e2e5,
                mid_setCzdotxdot_77e0f9a1f260e2e5,
                mid_setCzdoty_77e0f9a1f260e2e5,
                mid_setCzdotydot_77e0f9a1f260e2e5,
                mid_setCzdotz_77e0f9a1f260e2e5,
                mid_setCzdotzdot_77e0f9a1f260e2e5,
                mid_setCzx_77e0f9a1f260e2e5,
                mid_setCzy_77e0f9a1f260e2e5,
                mid_setCzz_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit XYZCovariance(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              XYZCovariance(const XYZCovariance& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              XYZCovariance(jboolean);

              jdouble getCdrgdrg() const;
              jdouble getCdrgx() const;
              jdouble getCdrgxdot() const;
              jdouble getCdrgy() const;
              jdouble getCdrgydot() const;
              jdouble getCdrgz() const;
              jdouble getCdrgzdot() const;
              jdouble getCsrpdrg() const;
              jdouble getCsrpsrp() const;
              jdouble getCsrpx() const;
              jdouble getCsrpxdot() const;
              jdouble getCsrpy() const;
              jdouble getCsrpydot() const;
              jdouble getCsrpz() const;
              jdouble getCsrpzdot() const;
              jdouble getCthrdrg() const;
              jdouble getCthrsrp() const;
              jdouble getCthrthr() const;
              jdouble getCthrx() const;
              jdouble getCthrxdot() const;
              jdouble getCthry() const;
              jdouble getCthrydot() const;
              jdouble getCthrz() const;
              jdouble getCthrzdot() const;
              jdouble getCxdotx() const;
              jdouble getCxdotxdot() const;
              jdouble getCxdoty() const;
              jdouble getCxdotz() const;
              jdouble getCxx() const;
              jdouble getCydotx() const;
              jdouble getCydotxdot() const;
              jdouble getCydoty() const;
              jdouble getCydotydot() const;
              jdouble getCydotz() const;
              jdouble getCyx() const;
              jdouble getCyy() const;
              jdouble getCzdotx() const;
              jdouble getCzdotxdot() const;
              jdouble getCzdoty() const;
              jdouble getCzdotydot() const;
              jdouble getCzdotz() const;
              jdouble getCzdotzdot() const;
              jdouble getCzx() const;
              jdouble getCzy() const;
              jdouble getCzz() const;
              ::org::hipparchus::linear::RealMatrix getXYZCovarianceMatrix() const;
              jboolean isCovXYZset() const;
              void setCdrgdrg(jdouble) const;
              void setCdrgx(jdouble) const;
              void setCdrgxdot(jdouble) const;
              void setCdrgy(jdouble) const;
              void setCdrgydot(jdouble) const;
              void setCdrgz(jdouble) const;
              void setCdrgzdot(jdouble) const;
              void setCovarianceMatrixEntry(jint, jint, jdouble) const;
              void setCsrpdrg(jdouble) const;
              void setCsrpsrp(jdouble) const;
              void setCsrpx(jdouble) const;
              void setCsrpxdot(jdouble) const;
              void setCsrpy(jdouble) const;
              void setCsrpydot(jdouble) const;
              void setCsrpz(jdouble) const;
              void setCsrpzdot(jdouble) const;
              void setCthrdrg(jdouble) const;
              void setCthrsrp(jdouble) const;
              void setCthrthr(jdouble) const;
              void setCthrx(jdouble) const;
              void setCthrxdot(jdouble) const;
              void setCthry(jdouble) const;
              void setCthrydot(jdouble) const;
              void setCthrz(jdouble) const;
              void setCthrzdot(jdouble) const;
              void setCxdotx(jdouble) const;
              void setCxdotxdot(jdouble) const;
              void setCxdoty(jdouble) const;
              void setCxdotz(jdouble) const;
              void setCxx(jdouble) const;
              void setCydotx(jdouble) const;
              void setCydotxdot(jdouble) const;
              void setCydoty(jdouble) const;
              void setCydotydot(jdouble) const;
              void setCydotz(jdouble) const;
              void setCyx(jdouble) const;
              void setCyy(jdouble) const;
              void setCzdotx(jdouble) const;
              void setCzdotxdot(jdouble) const;
              void setCzdoty(jdouble) const;
              void setCzdotydot(jdouble) const;
              void setCzdotz(jdouble) const;
              void setCzdotzdot(jdouble) const;
              void setCzx(jdouble) const;
              void setCzy(jdouble) const;
              void setCzz(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(XYZCovariance);
            extern PyTypeObject *PY_TYPE(XYZCovariance);

            class t_XYZCovariance {
            public:
              PyObject_HEAD
              XYZCovariance object;
              static PyObject *wrap_Object(const XYZCovariance&);
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
