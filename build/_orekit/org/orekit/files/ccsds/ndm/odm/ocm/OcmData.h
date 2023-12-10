#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmData_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class Perturbations;
              class OrbitDetermination;
              class OrbitCovarianceHistory;
              class OrbitPhysicalProperties;
              class TrajectoryStateHistory;
              class OrbitManeuverHistory;
            }
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
          namespace odm {
            namespace ocm {

              class OcmData : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_d7a7e1344ab1a1eb,
                  mid_getCovarianceBlocks_a6156df500549a58,
                  mid_getManeuverBlocks_a6156df500549a58,
                  mid_getOrbitDeterminationBlock_481eac8267dff431,
                  mid_getPerturbationsBlock_2dafecc2409c2731,
                  mid_getPhysicBlock_84885507afc9d2f0,
                  mid_getTrajectoryBlocks_a6156df500549a58,
                  mid_getUserDefinedBlock_dc0ba09fd1c52b52,
                  mid_validate_77e0f9a1f260e2e5,
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
