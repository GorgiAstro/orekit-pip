#ifndef org_orekit_files_ccsds_ndm_cdm_Cdm_H
#define org_orekit_files_ccsds_ndm_cdm_Cdm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class UserDefined;
          }
          namespace cdm {
            class CdmMetadata;
            class CdmSegment;
            class CdmRelativeMetadata;
            class CdmData;
            class CdmHeader;
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
          namespace cdm {

            class Cdm : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
             public:
              enum {
                mid_init$_8149672295f5e0f8,
                mid_getDataObject1_743160a6476f9c44,
                mid_getDataObject2_743160a6476f9c44,
                mid_getMetadataObject1_7961694302d7aaf0,
                mid_getMetadataObject2_7961694302d7aaf0,
                mid_getRelativeMetadata_9e18211f4c2756fe,
                mid_getUserDefinedParameters_757fcfae3141e23d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Cdm(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Cdm(const Cdm& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

              static ::java::lang::String *FORMAT_VERSION_KEY;
              static ::java::lang::String *ROOT;

              Cdm(const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

              ::org::orekit::files::ccsds::ndm::cdm::CdmData getDataObject1() const;
              ::org::orekit::files::ccsds::ndm::cdm::CdmData getDataObject2() const;
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata getMetadataObject1() const;
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata getMetadataObject2() const;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata getRelativeMetadata() const;
              ::org::orekit::files::ccsds::ndm::odm::UserDefined getUserDefinedParameters() const;
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(Cdm);
            extern PyTypeObject *PY_TYPE(Cdm);

            class t_Cdm {
            public:
              PyObject_HEAD
              Cdm object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_Cdm *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const Cdm&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const Cdm&, PyTypeObject *, PyTypeObject *);
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

#endif
