#ifndef org_orekit_files_ccsds_ndm_WriterBuilder_H
#define org_orekit_files_ccsds_ndm_WriterBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {
              class OpmWriter;
            }
            namespace omm {
              class OmmWriter;
            }
            namespace oem {
              class OemWriter;
            }
            namespace ocm {
              class OcmWriter;
            }
          }
          namespace adm {
            namespace aem {
              class AemWriter;
            }
            namespace apm {
              class ApmWriter;
            }
            namespace acm {
              class AcmWriter;
            }
          }
          class NdmWriter;
          namespace tdm {
            class TdmWriter;
          }
          class WriterBuilder;
          namespace cdm {
            class CdmWriter;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_fe20320dccf187ae,
              mid_buildAcmWriter_fc5d40ba6668d1b5,
              mid_buildAemWriter_4cbddbbfbad55305,
              mid_buildApmWriter_184b535474e11b6a,
              mid_buildCdmWriter_d133dbcd26647dc1,
              mid_buildNdmWriter_12d79f2835b2f4d6,
              mid_buildOcmWriter_4c25f8fac6b2b165,
              mid_buildOemWriter_a1a48572c2d708e8,
              mid_buildOmmWriter_9813d7360f236031,
              mid_buildOpmWriter_c889d008210b41ea,
              mid_buildTdmWriter_26fcb0c241b23af1,
              mid_create_87cfed1540ee5850,
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
