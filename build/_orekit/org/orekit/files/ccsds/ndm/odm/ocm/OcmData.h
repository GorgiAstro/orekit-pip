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
              class OrbitDetermination;
              class OrbitManeuverHistory;
              class OrbitPhysicalProperties;
              class OrbitCovarianceHistory;
              class Perturbations;
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
                  mid_init$_d65fd2f8f187f068,
                  mid_getCovarianceBlocks_0d9551367f7ecdef,
                  mid_getManeuverBlocks_0d9551367f7ecdef,
                  mid_getOrbitDeterminationBlock_eae1a48f5b9fc8a6,
                  mid_getPerturbationsBlock_b70855f0d03f1c18,
                  mid_getPhysicBlock_4c83fa949f959ff3,
                  mid_getTrajectoryBlocks_0d9551367f7ecdef,
                  mid_getUserDefinedBlock_e8dd2483e310f990,
                  mid_validate_10f281d777284cea,
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
