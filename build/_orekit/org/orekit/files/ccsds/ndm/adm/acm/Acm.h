#ifndef org_orekit_files_ccsds_ndm_adm_acm_Acm_H
#define org_orekit_files_ccsds_ndm_adm_acm_Acm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeStateHistory;
              class AcmMetadata;
              class AcmSatelliteEphemeris;
              class AcmData;
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
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedAngularCoordinates;
    }
  }
}
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
                  mid_init$_8e67c3c744d320a9,
                  mid_getData_2c161a7d030b81cd,
                  mid_getMetadata_0d0c5aea49e5906e,
                  mid_getSatellites_dbcb8bbac6b35e0d,
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
