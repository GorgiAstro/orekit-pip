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
              class AttitudeCovarianceHistory;
              class AttitudePhysicalProperties;
              class AttitudeStateHistory;
              class AttitudeDetermination;
              class AttitudeManeuver;
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
                  mid_init$_1724940ac42f3f73,
                  mid_getAttitudeBlocks_0d9551367f7ecdef,
                  mid_getAttitudeDeterminationBlock_d40e46e33d1586b5,
                  mid_getCovarianceBlocks_0d9551367f7ecdef,
                  mid_getManeuverBlocks_0d9551367f7ecdef,
                  mid_getPhysicBlock_1419754bb1060497,
                  mid_getUserDefinedBlock_e8dd2483e310f990,
                  mid_validate_10f281d777284cea,
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
