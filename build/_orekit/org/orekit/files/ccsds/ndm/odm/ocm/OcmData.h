#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmData_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class UserDefined;
            namespace ocm {
              class Perturbations;
              class OrbitCovarianceHistory;
              class OrbitPhysicalProperties;
              class OrbitManeuverHistory;
              class OrbitDetermination;
              class TrajectoryStateHistory;
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
          namespace odm {
            namespace ocm {

              class OcmData : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_212b49b143e3a5f2,
                  mid_getCovarianceBlocks_e62d3bb06d56d7e3,
                  mid_getManeuverBlocks_e62d3bb06d56d7e3,
                  mid_getOrbitDeterminationBlock_0d61eb8b4530c63e,
                  mid_getPerturbationsBlock_94e33f1e620c7eca,
                  mid_getPhysicBlock_78a098c62113a866,
                  mid_getTrajectoryBlocks_e62d3bb06d56d7e3,
                  mid_getUserDefinedBlock_757fcfae3141e23d,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OcmData(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmData(const OcmData& obj) : ::java::lang::Object(obj) {}

                OcmData(const ::java::util::List &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties &, const ::java::util::List &, const ::java::util::List &, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination &, const ::org::orekit::files::ccsds::ndm::odm::UserDefined &);

                ::java::util::List getCovarianceBlocks() const;
                ::java::util::List getManeuverBlocks() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination getOrbitDeterminationBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations getPerturbationsBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties getPhysicBlock() const;
                ::java::util::List getTrajectoryBlocks() const;
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
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OcmData);
              extern PyTypeObject *PY_TYPE(OcmData);

              class t_OcmData {
              public:
                PyObject_HEAD
                OcmData object;
                static PyObject *wrap_Object(const OcmData&);
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
