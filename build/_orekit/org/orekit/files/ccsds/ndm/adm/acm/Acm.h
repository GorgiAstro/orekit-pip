#ifndef org_orekit_files_ccsds_ndm_adm_acm_Acm_H
#define org_orekit_files_ccsds_ndm_adm_acm_Acm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AcmSatelliteEphemeris;
              class AttitudeStateHistory;
              class AcmData;
              class AcmMetadata;
            }
            class AdmHeader;
          }
        }
        namespace section {
          class Segment;
        }
      }
      namespace general {
        class AttitudeEphemerisFile;
      }
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedAngularCoordinates;
    }
    namespace data {
      class DataContext;
    }
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

              class Acm : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_f4c63464eb8f0477,
                  mid_getData_81e808cfcd4865bd,
                  mid_getMetadata_a46adf9d544d27b7,
                  mid_getSatellites_1e62c2f73fbdd1c4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Acm(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Acm(const Acm& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *ATT_LINE;
                static ::java::lang::String *COV_LINE;
                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *ROOT;
                static ::java::lang::String *UNKNOWN_OBJECT;

                Acm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData getData() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata getMetadata() const;
                ::java::util::Map getSatellites() const;
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
              extern PyType_Def PY_TYPE_DEF(Acm);
              extern PyTypeObject *PY_TYPE(Acm);

              class t_Acm {
              public:
                PyObject_HEAD
                Acm object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Acm *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Acm&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Acm&, PyTypeObject *, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
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
