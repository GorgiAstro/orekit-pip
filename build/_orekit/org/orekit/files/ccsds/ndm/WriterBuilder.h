#ifndef org_orekit_files_ccsds_ndm_WriterBuilder_H
#define org_orekit_files_ccsds_ndm_WriterBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmWriter;
          }
          namespace tdm {
            class TdmWriter;
          }
          namespace odm {
            namespace oem {
              class OemWriter;
            }
            namespace omm {
              class OmmWriter;
            }
            namespace ocm {
              class OcmWriter;
            }
            namespace opm {
              class OpmWriter;
            }
          }
          namespace adm {
            namespace apm {
              class ApmWriter;
            }
            namespace acm {
              class AcmWriter;
            }
            namespace aem {
              class AemWriter;
            }
          }
          class NdmWriter;
          class WriterBuilder;
        }
      }
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
              mid_init$_ff7cb6c242604316,
              mid_init$_e28302a82adb77ed,
              mid_buildAcmWriter_23c93b609649e631,
              mid_buildAemWriter_6d0e5cf65744a22d,
              mid_buildApmWriter_f69cb258ef86a872,
              mid_buildCdmWriter_522bec80cf151c2b,
              mid_buildNdmWriter_8b6a196a7d6ed7e5,
              mid_buildOcmWriter_07ff352b1a29d8b6,
              mid_buildOemWriter_9a5f31897f9d2b87,
              mid_buildOmmWriter_26d28c24a57d26a4,
              mid_buildOpmWriter_860ae140e88023f6,
              mid_buildTdmWriter_3f510563eaf6f808,
              mid_create_23cb629edb0279d7,
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
