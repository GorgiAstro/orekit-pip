#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmMetadata_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              class OmmMetadata : public ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_getMeanElementTheory_11b109bd155ca898,
                  mid_setMeanElementTheory_d0bc48d5b00dc40c,
                  mid_theoryIsSgpSdp_b108b35ef48e27bd,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OmmMetadata(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmMetadata(const OmmMetadata& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(obj) {}

                static ::java::lang::String *DSST_THEORY;
                static ::java::lang::String *SGP4_XP_THEORY;
                static ::java::lang::String *SGP_SGP4_THEORY;

                OmmMetadata();

                ::java::lang::String getMeanElementTheory() const;
                void setMeanElementTheory(const ::java::lang::String &) const;
                jboolean theoryIsSgpSdp() const;
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmMetadata);
              extern PyTypeObject *PY_TYPE(OmmMetadata);

              class t_OmmMetadata {
              public:
                PyObject_HEAD
                OmmMetadata object;
                static PyObject *wrap_Object(const OmmMetadata&);
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
