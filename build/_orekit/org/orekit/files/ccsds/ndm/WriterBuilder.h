#ifndef org_orekit_files_ccsds_ndm_WriterBuilder_H
#define org_orekit_files_ccsds_ndm_WriterBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemWriter;
            }
            namespace omm {
              class OmmWriter;
            }
            namespace opm {
              class OpmWriter;
            }
            namespace ocm {
              class OcmWriter;
            }
          }
          class WriterBuilder;
          namespace adm {
            namespace acm {
              class AcmWriter;
            }
            namespace apm {
              class ApmWriter;
            }
            namespace aem {
              class AemWriter;
            }
          }
          namespace cdm {
            class CdmWriter;
          }
          class NdmWriter;
          namespace tdm {
            class TdmWriter;
          }
        }
      }
    }
    namespace data {
      class DataContext;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          class WriterBuilder : public ::org::orekit::files::ccsds::ndm::AbstractBuilder {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_23625b258f7a7479,
              mid_buildAcmWriter_ac5c6bc604e80701,
              mid_buildAemWriter_33553e3db5b6ee04,
              mid_buildApmWriter_d4f3fa41ba24df8c,
              mid_buildCdmWriter_818b84fc38c0dd0d,
              mid_buildNdmWriter_d903da0dc241993f,
              mid_buildOcmWriter_3263929edd1e4c42,
              mid_buildOemWriter_adfe32f5643bf0a3,
              mid_buildOmmWriter_d77b2a4d53d61700,
              mid_buildOpmWriter_e4807266c3ecf516,
              mid_buildTdmWriter_28170177e5cccee1,
              mid_create_ddd6d526b48d2733,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WriterBuilder(jobject obj) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WriterBuilder(const WriterBuilder& obj) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(obj) {}

            WriterBuilder();
            WriterBuilder(const ::org::orekit::data::DataContext &);

            ::org::orekit::files::ccsds::ndm::adm::acm::AcmWriter buildAcmWriter() const;
            ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter buildAemWriter() const;
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmWriter buildApmWriter() const;
            ::org::orekit::files::ccsds::ndm::cdm::CdmWriter buildCdmWriter() const;
            ::org::orekit::files::ccsds::ndm::NdmWriter buildNdmWriter() const;
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter buildOcmWriter() const;
            ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter buildOemWriter() const;
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmWriter buildOmmWriter() const;
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmWriter buildOpmWriter() const;
            ::org::orekit::files::ccsds::ndm::tdm::TdmWriter buildTdmWriter() const;
          };
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
          extern PyType_Def PY_TYPE_DEF(WriterBuilder);
          extern PyTypeObject *PY_TYPE(WriterBuilder);

          class t_WriterBuilder {
          public:
            PyObject_HEAD
            WriterBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_WriterBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const WriterBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const WriterBuilder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
