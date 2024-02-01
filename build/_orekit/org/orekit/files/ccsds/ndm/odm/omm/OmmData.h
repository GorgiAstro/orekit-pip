#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmData_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class CartesianCovariance;
            class KeplerianElements;
            class UserDefined;
            class SpacecraftParameters;
            namespace omm {
              class OmmTle;
            }
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
                  mid_init$_1645f0f7285da97b,
                  mid_getCovarianceBlock_2b28f441350fd9e6,
                  mid_getKeplerianElementsBlock_4af716cba10d823b,
                  mid_getMass_9981f74b2d109da6,
                  mid_getSpacecraftParametersBlock_36c0b14eddf66774,
                  mid_getTLEBlock_02e8a50c3ed3ac28,
                  mid_getUserDefinedBlock_b8dba07746e1b089,
                  mid_validate_1ad26e8c8c0cd65b,
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
