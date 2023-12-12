#ifndef org_orekit_files_ccsds_ndm_ParserBuilder_H
#define org_orekit_files_ccsds_ndm_ParserBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemParser;
            }
            namespace opm {
              class OpmParser;
            }
            namespace omm {
              class OmmParser;
            }
            namespace ocm {
              class OcmParser;
            }
          }
          class ParsedUnitsBehavior;
          namespace adm {
            namespace aem {
              class AemParser;
            }
            namespace acm {
              class AcmParser;
            }
            namespace apm {
              class ApmParser;
            }
          }
          class ParserBuilder;
          class NdmParser;
          namespace tdm {
            class TdmParser;
          }
          namespace cdm {
            class CdmParser;
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

          class ParserBuilder : public ::org::orekit::files::ccsds::ndm::AbstractBuilder {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_init$_23625b258f7a7479,
              mid_buildAcmParser_a6519a9380eaaaf5,
              mid_buildAemParser_9ac1c95a2e207c3f,
              mid_buildApmParser_bf78fe4d9417c3b9,
              mid_buildCdmParser_c202e8e2ea242b80,
              mid_buildNdmParser_5bad0a6d587f3cbd,
              mid_buildOcmParser_102244e00399c31e,
              mid_buildOemParser_33c71f44d6c0e191,
              mid_buildOmmParser_f739eeebf6641686,
              mid_buildOpmParser_7abca2de4e339a48,
              mid_buildTdmParser_e52a56c28cd727a7,
              mid_getDefaultInterpolationDegree_412668abc8d889e9,
              mid_getDefaultMass_557b8123390d8d0c,
              mid_getMu_557b8123390d8d0c,
              mid_getParsedUnitsBehavior_430d6c1485d1d8cb,
              mid_isSimpleEOP_89b302893bdbe1f1,
              mid_withDefaultInterpolationDegree_7ca0964da3353719,
              mid_withDefaultMass_d20f07dc9475132d,
              mid_withMu_d20f07dc9475132d,
              mid_withParsedUnitsBehavior_c085c85d123384ae,
              mid_withSimpleEOP_8a5b5cc3921c1e36,
              mid_create_d5c8eda04d2cfb3c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParserBuilder(jobject obj) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParserBuilder(const ParserBuilder& obj) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(obj) {}

            ParserBuilder();
            ParserBuilder(const ::org::orekit::data::DataContext &);

            ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser buildAcmParser() const;
            ::org::orekit::files::ccsds::ndm::adm::aem::AemParser buildAemParser() const;
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser buildApmParser() const;
            ::org::orekit::files::ccsds::ndm::cdm::CdmParser buildCdmParser() const;
            ::org::orekit::files::ccsds::ndm::NdmParser buildNdmParser() const;
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser buildOcmParser() const;
            ::org::orekit::files::ccsds::ndm::odm::oem::OemParser buildOemParser() const;
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser buildOmmParser() const;
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser buildOpmParser() const;
            ::org::orekit::files::ccsds::ndm::tdm::TdmParser buildTdmParser() const;
            jint getDefaultInterpolationDegree() const;
            jdouble getDefaultMass() const;
            jdouble getMu() const;
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior getParsedUnitsBehavior() const;
            jboolean isSimpleEOP() const;
            ParserBuilder withDefaultInterpolationDegree(jint) const;
            ParserBuilder withDefaultMass(jdouble) const;
            ParserBuilder withMu(jdouble) const;
            ParserBuilder withParsedUnitsBehavior(const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior &) const;
            ParserBuilder withSimpleEOP(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(ParserBuilder);
          extern PyTypeObject *PY_TYPE(ParserBuilder);

          class t_ParserBuilder {
          public:
            PyObject_HEAD
            ParserBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ParserBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ParserBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ParserBuilder&, PyTypeObject *);
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
