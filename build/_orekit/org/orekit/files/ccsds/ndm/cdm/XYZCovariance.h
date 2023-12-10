#ifndef org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_XYZCovariance_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
                mid_init$_bd04c9335fb9e4cf,
                mid_getCdrgdrg_dff5885c2c873297,
                mid_getCdrgx_dff5885c2c873297,
                mid_getCdrgxdot_dff5885c2c873297,
                mid_getCdrgy_dff5885c2c873297,
                mid_getCdrgydot_dff5885c2c873297,
                mid_getCdrgz_dff5885c2c873297,
                mid_getCdrgzdot_dff5885c2c873297,
                mid_getCsrpdrg_dff5885c2c873297,
                mid_getCsrpsrp_dff5885c2c873297,
                mid_getCsrpx_dff5885c2c873297,
                mid_getCsrpxdot_dff5885c2c873297,
                mid_getCsrpy_dff5885c2c873297,
                mid_getCsrpydot_dff5885c2c873297,
                mid_getCsrpz_dff5885c2c873297,
                mid_getCsrpzdot_dff5885c2c873297,
                mid_getCthrdrg_dff5885c2c873297,
                mid_getCthrsrp_dff5885c2c873297,
                mid_getCthrthr_dff5885c2c873297,
                mid_getCthrx_dff5885c2c873297,
                mid_getCthrxdot_dff5885c2c873297,
                mid_getCthry_dff5885c2c873297,
                mid_getCthrydot_dff5885c2c873297,
                mid_getCthrz_dff5885c2c873297,
                mid_getCthrzdot_dff5885c2c873297,
                mid_getCxdotx_dff5885c2c873297,
                mid_getCxdotxdot_dff5885c2c873297,
                mid_getCxdoty_dff5885c2c873297,
                mid_getCxdotz_dff5885c2c873297,
                mid_getCxx_dff5885c2c873297,
                mid_getCydotx_dff5885c2c873297,
                mid_getCydotxdot_dff5885c2c873297,
                mid_getCydoty_dff5885c2c873297,
                mid_getCydotydot_dff5885c2c873297,
                mid_getCydotz_dff5885c2c873297,
                mid_getCyx_dff5885c2c873297,
                mid_getCyy_dff5885c2c873297,
                mid_getCzdotx_dff5885c2c873297,
                mid_getCzdotxdot_dff5885c2c873297,
                mid_getCzdoty_dff5885c2c873297,
                mid_getCzdotydot_dff5885c2c873297,
                mid_getCzdotz_dff5885c2c873297,
                mid_getCzdotzdot_dff5885c2c873297,
                mid_getCzx_dff5885c2c873297,
                mid_getCzy_dff5885c2c873297,
                mid_getCzz_dff5885c2c873297,
                mid_getXYZCovarianceMatrix_688b496048ff947b,
                mid_isCovXYZset_b108b35ef48e27bd,
                mid_setCdrgdrg_17db3a65980d3441,
                mid_setCdrgx_17db3a65980d3441,
                mid_setCdrgxdot_17db3a65980d3441,
                mid_setCdrgy_17db3a65980d3441,
                mid_setCdrgydot_17db3a65980d3441,
                mid_setCdrgz_17db3a65980d3441,
                mid_setCdrgzdot_17db3a65980d3441,
                mid_setCovarianceMatrixEntry_1506189166690b5e,
                mid_setCsrpdrg_17db3a65980d3441,
                mid_setCsrpsrp_17db3a65980d3441,
                mid_setCsrpx_17db3a65980d3441,
                mid_setCsrpxdot_17db3a65980d3441,
                mid_setCsrpy_17db3a65980d3441,
                mid_setCsrpydot_17db3a65980d3441,
                mid_setCsrpz_17db3a65980d3441,
                mid_setCsrpzdot_17db3a65980d3441,
                mid_setCthrdrg_17db3a65980d3441,
                mid_setCthrsrp_17db3a65980d3441,
                mid_setCthrthr_17db3a65980d3441,
                mid_setCthrx_17db3a65980d3441,
                mid_setCthrxdot_17db3a65980d3441,
                mid_setCthry_17db3a65980d3441,
                mid_setCthrydot_17db3a65980d3441,
                mid_setCthrz_17db3a65980d3441,
                mid_setCthrzdot_17db3a65980d3441,
                mid_setCxdotx_17db3a65980d3441,
                mid_setCxdotxdot_17db3a65980d3441,
                mid_setCxdoty_17db3a65980d3441,
                mid_setCxdotz_17db3a65980d3441,
                mid_setCxx_17db3a65980d3441,
                mid_setCydotx_17db3a65980d3441,
                mid_setCydotxdot_17db3a65980d3441,
                mid_setCydoty_17db3a65980d3441,
                mid_setCydotydot_17db3a65980d3441,
                mid_setCydotz_17db3a65980d3441,
                mid_setCyx_17db3a65980d3441,
                mid_setCyy_17db3a65980d3441,
                mid_setCzdotx_17db3a65980d3441,
                mid_setCzdotxdot_17db3a65980d3441,
                mid_setCzdoty_17db3a65980d3441,
                mid_setCzdotydot_17db3a65980d3441,
                mid_setCzdotz_17db3a65980d3441,
                mid_setCzdotzdot_17db3a65980d3441,
                mid_setCzx_17db3a65980d3441,
                mid_setCzy_17db3a65980d3441,
                mid_setCzz_17db3a65980d3441,
                mid_validate_17db3a65980d3441,
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
