#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmData_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              class OmmTle;
            }
            class UserDefined;
            class SpacecraftParameters;
            class CartesianCovariance;
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
                  mid_init$_46cd14e4fc972631,
                  mid_getCovarianceBlock_ab1f5bcd3006ffba,
                  mid_getKeplerianElementsBlock_a7b00de16bb05023,
                  mid_getMass_557b8123390d8d0c,
                  mid_getSpacecraftParametersBlock_ac68c68a22df72d8,
                  mid_getTLEBlock_30791a00fcedc774,
                  mid_getUserDefinedBlock_e8dd2483e310f990,
                  mid_validate_10f281d777284cea,
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
