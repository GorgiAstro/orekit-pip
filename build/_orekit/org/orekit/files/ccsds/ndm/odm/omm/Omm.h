#ifndef org_orekit_files_ccsds_ndm_odm_omm_Omm_H
#define org_orekit_files_ccsds_ndm_odm_omm_Omm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace section {
          class Segment;
        }
        namespace ndm {
          namespace odm {
            namespace omm {
              class OmmData;
              class OmmMetadata;
            }
            class OdmHeader;
          }
        }
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
        }
      }
      class SpacecraftState;
    }
    namespace orbits {
      class KeplerianOrbit;
    }
  }
}
namespace java {
  namespace util {
    class List;
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
            namespace omm {

              class Omm : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_e9fd06990bf04fcd,
                  mid_generateKeplerianOrbit_f50f1bbccaeb207e,
                  mid_generateSpacecraftState_9d155cc8314c99cf,
                  mid_generateTLE_1c01e307dcced049,
                  mid_getData_46cfa2da7d09d8dc,
                  mid_getDate_c325492395d89b24,
                  mid_getMetadata_85abb0ab995423bf,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Omm(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Omm(const Omm& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *ROOT;

                Omm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

                ::org::orekit::orbits::KeplerianOrbit generateKeplerianOrbit() const;
                ::org::orekit::propagation::SpacecraftState generateSpacecraftState() const;
                ::org::orekit::propagation::analytical::tle::TLE generateTLE() const;
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData getData() const;
                ::org::orekit::time::AbsoluteDate getDate() const;
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata getMetadata() const;
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(Omm);
              extern PyTypeObject *PY_TYPE(Omm);

              class t_Omm {
              public:
                PyObject_HEAD
                Omm object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Omm *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Omm&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Omm&, PyTypeObject *, PyTypeObject *);
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
