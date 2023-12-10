#ifndef org_orekit_files_ccsds_ndm_odm_omm_Omm_H
#define org_orekit_files_ccsds_ndm_odm_omm_Omm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              class OmmData;
              class OmmMetadata;
            }
            class OdmHeader;
          }
        }
        namespace section {
          class Segment;
        }
      }
    }
    namespace orbits {
      class KeplerianOrbit;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
                  mid_init$_a3c39779efce50a0,
                  mid_generateKeplerianOrbit_3b8c2ada972e4fd7,
                  mid_generateSpacecraftState_c6311115fea01a34,
                  mid_generateTLE_e993eceec98c738b,
                  mid_getData_466f4b889e77ad6f,
                  mid_getDate_85703d13e302437e,
                  mid_getMetadata_a99df25529150639,
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
