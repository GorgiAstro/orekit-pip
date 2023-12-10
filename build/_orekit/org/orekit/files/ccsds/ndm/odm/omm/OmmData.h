#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmData_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class KeplerianElements;
            class UserDefined;
            namespace omm {
              class OmmTle;
            }
            class SpacecraftParameters;
            class CartesianCovariance;
          }
        }
        namespace section {
          class Data;
        }
      }
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
          namespace odm {
            namespace omm {

              class OmmData : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f549949310db6566,
                  mid_getCovarianceBlock_5a3868cb67b566ca,
                  mid_getKeplerianElementsBlock_5ef7d45a76a827d2,
                  mid_getMass_456d9a2f64d6b28d,
                  mid_getSpacecraftParametersBlock_df8be17b569173ba,
                  mid_getTLEBlock_34d881eec65a98f7,
                  mid_getUserDefinedBlock_dc0ba09fd1c52b52,
                  mid_validate_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OmmData(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmData(const OmmData& obj) : ::java::lang::Object(obj) {}

                OmmData(const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements &, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters &, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle &, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance &, const ::org::orekit::files::ccsds::ndm::odm::UserDefined &, jdouble);

                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance getCovarianceBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements getKeplerianElementsBlock() const;
                jdouble getMass() const;
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters getSpacecraftParametersBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle getTLEBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::UserDefined getUserDefinedBlock() const;
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmData);
              extern PyTypeObject *PY_TYPE(OmmData);

              class t_OmmData {
              public:
                PyObject_HEAD
                OmmData object;
                static PyObject *wrap_Object(const OmmData&);
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
