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
    namespace utils {
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
    }
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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_addCovarianceMatrix_df1b706a550f4478,
                  mid_addData_f7cb4011cb2864fe,
                  mid_getAvailableDerivatives_63bfdcc4b7a0536c,
                  mid_getCoordinates_e62d3bb06d56d7e3,
                  mid_getCovarianceMatrices_e62d3bb06d56d7e3,
                  mid_getEphemeridesDataLines_e62d3bb06d56d7e3,
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
