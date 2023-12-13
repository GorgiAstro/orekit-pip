#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmData_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class UserDefined;
            class CartesianCovariance;
            namespace omm {
              class OmmTle;
            }
            class SpacecraftParameters;
            class KeplerianElements;
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
                  mid_init$_05b8744f501bf636,
                  mid_getCovarianceBlock_e10d3bdd874e7ebe,
                  mid_getKeplerianElementsBlock_8313e8e884b218d3,
                  mid_getMass_b74f83833fdad017,
                  mid_getSpacecraftParametersBlock_ccfacaad97346180,
                  mid_getTLEBlock_6a2b04ed9064b5c8,
                  mid_getUserDefinedBlock_757fcfae3141e23d,
                  mid_validate_8ba9fe7a847cecad,
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
