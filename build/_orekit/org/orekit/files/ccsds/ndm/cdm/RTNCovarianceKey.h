#ifndef org_orekit_files_ccsds_ndm_cdm_RTNCovarianceKey_H
#define org_orekit_files_ccsds_ndm_cdm_RTNCovarianceKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class RTNCovarianceKey;
            class RTNCovariance;
          }
        }
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
      }
    }
  }
}
namespace java {
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
          namespace cdm {

            class RTNCovarianceKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_de46bf683f387688,
                mid_valueOf_19f1783447388dba,
                mid_values_689b9b68e9226995,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RTNCovarianceKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RTNCovarianceKey(const RTNCovarianceKey& obj) : ::java::lang::Enum(obj) {}

              static RTNCovarianceKey *CDRG_DRG;
              static RTNCovarianceKey *CDRG_N;
              static RTNCovarianceKey *CDRG_NDOT;
              static RTNCovarianceKey *CDRG_R;
              static RTNCovarianceKey *CDRG_RDOT;
              static RTNCovarianceKey *CDRG_T;
              static RTNCovarianceKey *CDRG_TDOT;
              static RTNCovarianceKey *CNDOT_N;
              static RTNCovarianceKey *CNDOT_NDOT;
              static RTNCovarianceKey *CNDOT_R;
              static RTNCovarianceKey *CNDOT_RDOT;
              static RTNCovarianceKey *CNDOT_T;
              static RTNCovarianceKey *CNDOT_TDOT;
              static RTNCovarianceKey *CN_N;
              static RTNCovarianceKey *CN_R;
              static RTNCovarianceKey *CN_T;
              static RTNCovarianceKey *COMMENT;
              static RTNCovarianceKey *CRDOT_N;
              static RTNCovarianceKey *CRDOT_R;
              static RTNCovarianceKey *CRDOT_RDOT;
              static RTNCovarianceKey *CRDOT_T;
              static RTNCovarianceKey *CR_R;
              static RTNCovarianceKey *CSRP_DRG;
              static RTNCovarianceKey *CSRP_N;
              static RTNCovarianceKey *CSRP_NDOT;
              static RTNCovarianceKey *CSRP_R;
              static RTNCovarianceKey *CSRP_RDOT;
              static RTNCovarianceKey *CSRP_SRP;
              static RTNCovarianceKey *CSRP_T;
              static RTNCovarianceKey *CSRP_TDOT;
              static RTNCovarianceKey *CTDOT_N;
              static RTNCovarianceKey *CTDOT_R;
              static RTNCovarianceKey *CTDOT_RDOT;
              static RTNCovarianceKey *CTDOT_T;
              static RTNCovarianceKey *CTDOT_TDOT;
              static RTNCovarianceKey *CTHR_DRG;
              static RTNCovarianceKey *CTHR_N;
              static RTNCovarianceKey *CTHR_NDOT;
              static RTNCovarianceKey *CTHR_R;
              static RTNCovarianceKey *CTHR_RDOT;
              static RTNCovarianceKey *CTHR_SRP;
              static RTNCovarianceKey *CTHR_T;
              static RTNCovarianceKey *CTHR_TDOT;
              static RTNCovarianceKey *CTHR_THR;
              static RTNCovarianceKey *CT_R;
              static RTNCovarianceKey *CT_T;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance &) const;
              static RTNCovarianceKey valueOf(const ::java::lang::String &);
              static JArray< RTNCovarianceKey > values();
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
            extern PyType_Def PY_TYPE_DEF(RTNCovarianceKey);
            extern PyTypeObject *PY_TYPE(RTNCovarianceKey);

            class t_RTNCovarianceKey {
            public:
              PyObject_HEAD
              RTNCovarianceKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_RTNCovarianceKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const RTNCovarianceKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const RTNCovarianceKey&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
