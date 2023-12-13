#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmData_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class UserDefined;
          }
          namespace adm {
            namespace acm {
              class AttitudeStateHistory;
              class AttitudeManeuver;
              class AttitudePhysicalProperties;
              class AttitudeDetermination;
              class AttitudeCovarianceHistory;
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
                  mid_init$_6ce4ddf0ec24098a,
                  mid_getAttitudeBlocks_e62d3bb06d56d7e3,
                  mid_getAttitudeDeterminationBlock_adfc0fd0f6504ca8,
                  mid_getCovarianceBlocks_e62d3bb06d56d7e3,
                  mid_getManeuverBlocks_e62d3bb06d56d7e3,
                  mid_getPhysicBlock_3f83339f870dc50a,
                  mid_getUserDefinedBlock_757fcfae3141e23d,
                  mid_validate_8ba9fe7a847cecad,
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
