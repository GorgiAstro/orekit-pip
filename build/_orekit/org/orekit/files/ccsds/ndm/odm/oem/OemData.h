#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemData_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemData_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class CartesianCovariance;
          }
        }
        namespace section {
          class Data;
        }
      }
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              class OemData : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_addCovarianceMatrix_2b65391e2d141e2e,
                  mid_addData_ca6146c7df041212,
                  mid_getAvailableDerivatives_6c4898d6ec0c3837,
                  mid_getCoordinates_0d9551367f7ecdef,
                  mid_getCovarianceMatrices_0d9551367f7ecdef,
                  mid_getEphemeridesDataLines_0d9551367f7ecdef,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OemData(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OemData(const OemData& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                OemData();

                void addCovarianceMatrix(const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance &) const;
                jboolean addData(const ::org::orekit::utils::TimeStampedPVCoordinates &, jboolean) const;
                ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
                ::java::util::List getCoordinates() const;
                ::java::util::List getCovarianceMatrices() const;
                ::java::util::List getEphemeridesDataLines() const;
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
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(OemData);
              extern PyTypeObject *PY_TYPE(OemData);

              class t_OemData {
              public:
                PyObject_HEAD
                OemData object;
                static PyObject *wrap_Object(const OemData&);
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
