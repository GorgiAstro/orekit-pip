#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmData_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class SpacecraftParameters;
            class KeplerianElements;
            namespace omm {
              class OmmTle;
            }
            class UserDefined;
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
                  mid_init$_0a0bd3ea612b410b,
                  mid_getCovarianceBlock_cf101600575330c7,
                  mid_getKeplerianElementsBlock_c379fe2f6979132e,
                  mid_getMass_dff5885c2c873297,
                  mid_getSpacecraftParametersBlock_60188820d73f1019,
                  mid_getTLEBlock_e5c2ae68d23414ce,
                  mid_getUserDefinedBlock_8d3e5fabdafb8483,
                  mid_validate_17db3a65980d3441,
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
