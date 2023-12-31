#ifndef org_orekit_files_ccsds_ndm_adm_acm_Acm_H
#define org_orekit_files_ccsds_ndm_adm_acm_Acm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmHeader;
            namespace acm {
              class AttitudeStateHistory;
              class AcmSatelliteEphemeris;
              class AcmMetadata;
              class AcmData;
            }
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
                  mid_init$_9603b9963356e980,
                  mid_getData_efaea2325d549369,
                  mid_getMetadata_0253132f83eae763,
                  mid_getSatellites_810bed48fafb0b9a,
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
