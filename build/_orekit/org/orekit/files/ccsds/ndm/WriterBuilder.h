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
          namespace odm {
            namespace ocm {
              class OcmWriter;
            }
            namespace oem {
              class OemWriter;
            }
            namespace opm {
              class OpmWriter;
            }
            namespace omm {
              class OmmWriter;
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
          namespace tdm {
            class TdmWriter;
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
              mid_init$_0fa09c18fee449d5,
              mid_init$_47d99c12e4a42886,
              mid_buildAcmWriter_61f2a4ec79e5bf47,
              mid_buildAemWriter_246980f88deb0b11,
              mid_buildApmWriter_2f7fa7acd939cae5,
              mid_buildCdmWriter_008e25c97051213c,
              mid_buildNdmWriter_c07f18cfae2cddd0,
              mid_buildOcmWriter_c14b3df774a8a8fc,
              mid_buildOemWriter_1efdb07ed3084981,
              mid_buildOmmWriter_2ec1346c9f0afc10,
              mid_buildOpmWriter_09c1d1a79da9a806,
              mid_buildTdmWriter_5969ebcddb2f144f,
              mid_create_05cedacda1d25c1e,
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
