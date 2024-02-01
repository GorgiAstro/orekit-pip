#ifndef org_orekit_files_ccsds_ndm_adm_aem_Aem_H
#define org_orekit_files_ccsds_ndm_adm_aem_Aem_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedAngularCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              class AemSegment;
              class AemSatelliteEphemeris;
            }
            class AdmHeader;
          }
        }
      }
      namespace general {
        class AttitudeEphemerisFile;
      }
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
            namespace aem {

              class Aem : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_8e67c3c744d320a9,
                  mid_getSatellites_dbcb8bbac6b35e0d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Aem(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Aem(const Aem& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *ROOT;

                Aem(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(Aem);
              extern PyTypeObject *PY_TYPE(Aem);

              class t_Aem {
              public:
                PyObject_HEAD
                Aem object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Aem *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Aem&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Aem&, PyTypeObject *, PyTypeObject *);
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
