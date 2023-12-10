#ifndef org_orekit_files_ccsds_ndm_odm_omm_Omm_H
#define org_orekit_files_ccsds_ndm_odm_omm_Omm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Segment;
        }
        namespace ndm {
          namespace odm {
            class OdmHeader;
            namespace omm {
              class OmmMetadata;
              class OmmData;
            }
          }
        }
      }
    }
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace orbits {
      class KeplerianOrbit;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
        }
      }
      class SpacecraftState;
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
                  mid_init$_dfd47f55f3c4ed53,
                  mid_generateKeplerianOrbit_073190698893349f,
                  mid_generateSpacecraftState_dd3e4a8d51055f1f,
                  mid_generateTLE_32ddbfc0b67883b1,
                  mid_getData_3caba89943abdaa7,
                  mid_getDate_aaa854c403487cf3,
                  mid_getMetadata_2a4a4905976c4bdf,
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
