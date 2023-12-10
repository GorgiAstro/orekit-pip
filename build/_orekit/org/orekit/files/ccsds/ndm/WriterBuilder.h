#ifndef org_orekit_files_ccsds_ndm_WriterBuilder_H
#define org_orekit_files_ccsds_ndm_WriterBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AcmWriter;
            }
            namespace aem {
              class AemWriter;
            }
            namespace apm {
              class ApmWriter;
            }
          }
          namespace tdm {
            class TdmWriter;
          }
          namespace cdm {
            class CdmWriter;
          }
          namespace odm {
            namespace oem {
              class OemWriter;
            }
            namespace ocm {
              class OcmWriter;
            }
            namespace opm {
              class OpmWriter;
            }
            namespace omm {
              class OmmWriter;
            }
          }
          class NdmWriter;
          class WriterBuilder;
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
              mid_init$_7ae3461a92a43152,
              mid_init$_959fe257032a39c0,
              mid_buildAcmWriter_3bc79a526fe3c540,
              mid_buildAemWriter_e853fc2ae52d968b,
              mid_buildApmWriter_39f253e8e0b26d00,
              mid_buildCdmWriter_719e26a78bb19078,
              mid_buildNdmWriter_9f7a9aac1c186ca9,
              mid_buildOcmWriter_0df4db3aea0d0e9a,
              mid_buildOemWriter_c0622beff38b848b,
              mid_buildOmmWriter_5788069e49ca1216,
              mid_buildOpmWriter_9a873e800e2abf29,
              mid_buildTdmWriter_7d4bdebf83311232,
              mid_create_6e256950fdd422f6,
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
