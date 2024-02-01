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
                mid_init$_b35db77cae58639e,
                mid_getCdrgdrg_9981f74b2d109da6,
                mid_getCdrgx_9981f74b2d109da6,
                mid_getCdrgxdot_9981f74b2d109da6,
                mid_getCdrgy_9981f74b2d109da6,
                mid_getCdrgydot_9981f74b2d109da6,
                mid_getCdrgz_9981f74b2d109da6,
                mid_getCdrgzdot_9981f74b2d109da6,
                mid_getCsrpdrg_9981f74b2d109da6,
                mid_getCsrpsrp_9981f74b2d109da6,
                mid_getCsrpx_9981f74b2d109da6,
                mid_getCsrpxdot_9981f74b2d109da6,
                mid_getCsrpy_9981f74b2d109da6,
                mid_getCsrpydot_9981f74b2d109da6,
                mid_getCsrpz_9981f74b2d109da6,
                mid_getCsrpzdot_9981f74b2d109da6,
                mid_getCthrdrg_9981f74b2d109da6,
                mid_getCthrsrp_9981f74b2d109da6,
                mid_getCthrthr_9981f74b2d109da6,
                mid_getCthrx_9981f74b2d109da6,
                mid_getCthrxdot_9981f74b2d109da6,
                mid_getCthry_9981f74b2d109da6,
                mid_getCthrydot_9981f74b2d109da6,
                mid_getCthrz_9981f74b2d109da6,
                mid_getCthrzdot_9981f74b2d109da6,
                mid_getCxdotx_9981f74b2d109da6,
                mid_getCxdotxdot_9981f74b2d109da6,
                mid_getCxdoty_9981f74b2d109da6,
                mid_getCxdotz_9981f74b2d109da6,
                mid_getCxx_9981f74b2d109da6,
                mid_getCydotx_9981f74b2d109da6,
                mid_getCydotxdot_9981f74b2d109da6,
                mid_getCydoty_9981f74b2d109da6,
                mid_getCydotydot_9981f74b2d109da6,
                mid_getCydotz_9981f74b2d109da6,
                mid_getCyx_9981f74b2d109da6,
                mid_getCyy_9981f74b2d109da6,
                mid_getCzdotx_9981f74b2d109da6,
                mid_getCzdotxdot_9981f74b2d109da6,
                mid_getCzdoty_9981f74b2d109da6,
                mid_getCzdotydot_9981f74b2d109da6,
                mid_getCzdotz_9981f74b2d109da6,
                mid_getCzdotzdot_9981f74b2d109da6,
                mid_getCzx_9981f74b2d109da6,
                mid_getCzy_9981f74b2d109da6,
                mid_getCzz_9981f74b2d109da6,
                mid_getXYZCovarianceMatrix_b2eebabce70526d8,
                mid_isCovXYZset_eee3de00fe971136,
                mid_setCdrgdrg_1ad26e8c8c0cd65b,
                mid_setCdrgx_1ad26e8c8c0cd65b,
                mid_setCdrgxdot_1ad26e8c8c0cd65b,
                mid_setCdrgy_1ad26e8c8c0cd65b,
                mid_setCdrgydot_1ad26e8c8c0cd65b,
                mid_setCdrgz_1ad26e8c8c0cd65b,
                mid_setCdrgzdot_1ad26e8c8c0cd65b,
                mid_setCovarianceMatrixEntry_e98d7b3e971b6087,
                mid_setCsrpdrg_1ad26e8c8c0cd65b,
                mid_setCsrpsrp_1ad26e8c8c0cd65b,
                mid_setCsrpx_1ad26e8c8c0cd65b,
                mid_setCsrpxdot_1ad26e8c8c0cd65b,
                mid_setCsrpy_1ad26e8c8c0cd65b,
                mid_setCsrpydot_1ad26e8c8c0cd65b,
                mid_setCsrpz_1ad26e8c8c0cd65b,
                mid_setCsrpzdot_1ad26e8c8c0cd65b,
                mid_setCthrdrg_1ad26e8c8c0cd65b,
                mid_setCthrsrp_1ad26e8c8c0cd65b,
                mid_setCthrthr_1ad26e8c8c0cd65b,
                mid_setCthrx_1ad26e8c8c0cd65b,
                mid_setCthrxdot_1ad26e8c8c0cd65b,
                mid_setCthry_1ad26e8c8c0cd65b,
                mid_setCthrydot_1ad26e8c8c0cd65b,
                mid_setCthrz_1ad26e8c8c0cd65b,
                mid_setCthrzdot_1ad26e8c8c0cd65b,
                mid_setCxdotx_1ad26e8c8c0cd65b,
                mid_setCxdotxdot_1ad26e8c8c0cd65b,
                mid_setCxdoty_1ad26e8c8c0cd65b,
                mid_setCxdotz_1ad26e8c8c0cd65b,
                mid_setCxx_1ad26e8c8c0cd65b,
                mid_setCydotx_1ad26e8c8c0cd65b,
                mid_setCydotxdot_1ad26e8c8c0cd65b,
                mid_setCydoty_1ad26e8c8c0cd65b,
                mid_setCydotydot_1ad26e8c8c0cd65b,
                mid_setCydotz_1ad26e8c8c0cd65b,
                mid_setCyx_1ad26e8c8c0cd65b,
                mid_setCyy_1ad26e8c8c0cd65b,
                mid_setCzdotx_1ad26e8c8c0cd65b,
                mid_setCzdotxdot_1ad26e8c8c0cd65b,
                mid_setCzdoty_1ad26e8c8c0cd65b,
                mid_setCzdotydot_1ad26e8c8c0cd65b,
                mid_setCzdotz_1ad26e8c8c0cd65b,
                mid_setCzdotzdot_1ad26e8c8c0cd65b,
                mid_setCzx_1ad26e8c8c0cd65b,
                mid_setCzy_1ad26e8c8c0cd65b,
                mid_setCzz_1ad26e8c8c0cd65b,
                mid_validate_1ad26e8c8c0cd65b,
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
