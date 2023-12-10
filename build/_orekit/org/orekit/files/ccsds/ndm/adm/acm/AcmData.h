#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmData_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeDetermination;
              class AttitudeCovarianceHistory;
              class AttitudeStateHistory;
              class AttitudePhysicalProperties;
              class AttitudeManeuver;
            }
          }
          namespace odm {
            class UserDefined;
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
  namespace util {
    class List;
  }
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
          namespace adm {
            namespace acm {

              class AcmData : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_eb83c9518129e70a,
                  mid_getAttitudeBlocks_a6156df500549a58,
                  mid_getAttitudeDeterminationBlock_88ac15fdce7c6217,
                  mid_getCovarianceBlocks_a6156df500549a58,
                  mid_getManeuverBlocks_a6156df500549a58,
                  mid_getPhysicBlock_4c00aa5ae00a7066,
                  mid_getUserDefinedBlock_dc0ba09fd1c52b52,
                  mid_validate_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmData(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmData(const AcmData& obj) : ::java::lang::Object(obj) {}

                AcmData(const ::java::util::List &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties &, const ::java::util::List &, const ::java::util::List &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination &, const ::org::orekit::files::ccsds::ndm::odm::UserDefined &);

                ::java::util::List getAttitudeBlocks() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination getAttitudeDeterminationBlock() const;
                ::java::util::List getCovarianceBlocks() const;
                ::java::util::List getManeuverBlocks() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties getPhysicBlock() const;
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AcmData);
              extern PyTypeObject *PY_TYPE(AcmData);

              class t_AcmData {
              public:
                PyObject_HEAD
                AcmData object;
                static PyObject *wrap_Object(const AcmData&);
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
