#ifndef org_orekit_files_ccsds_ndm_odm_oem_Oem_H
#define org_orekit_files_ccsds_ndm_odm_oem_Oem_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile;
      }
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemSegment;
              class OemSatelliteEphemeris;
            }
            class OdmHeader;
          }
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedPVCoordinates;
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
          namespace odm {
            namespace oem {

              class Oem : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_f1d722872d5900a5,
                  mid_checkTimeSystems_ff7cb6c242604316,
                  mid_getSatellites_dbcb8bbac6b35e0d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Oem(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Oem(const Oem& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *ROOT;

                Oem(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &, jdouble);

                void checkTimeSystems() const;
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
          namespace odm {
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(Oem);
              extern PyTypeObject *PY_TYPE(Oem);

              class t_Oem {
              public:
                PyObject_HEAD
                Oem object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Oem *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Oem&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Oem&, PyTypeObject *, PyTypeObject *);
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
