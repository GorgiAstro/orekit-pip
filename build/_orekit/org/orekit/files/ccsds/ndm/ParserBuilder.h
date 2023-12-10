#ifndef org_orekit_files_ccsds_ndm_ParserBuilder_H
#define org_orekit_files_ccsds_ndm_ParserBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
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
          namespace odm {
            namespace ocm {
              class OcmParser;
            }
            namespace oem {
              class OemParser;
            }
            namespace opm {
              class OpmParser;
            }
            namespace omm {
              class OmmParser;
            }
          }
          namespace tdm {
            class TdmParser;
          }
          namespace cdm {
            class CdmParser;
          }
          class ParsedUnitsBehavior;
          class NdmParser;
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
              mid_init$_7ae3461a92a43152,
              mid_init$_959fe257032a39c0,
              mid_buildAcmParser_947301af1f78d177,
              mid_buildAemParser_a521a10fa0afb7a8,
              mid_buildApmParser_39a3e263417fb16a,
              mid_buildCdmParser_5a3feed7e94cb024,
              mid_buildNdmParser_06cb4bcb2e551b39,
              mid_buildOcmParser_bcfdac7bd2fb1fb9,
              mid_buildOemParser_b3d83353bf139cc7,
              mid_buildOmmParser_2ed58f50ecbc9ddc,
              mid_buildOpmParser_ac7edc69e86b2960,
              mid_buildTdmParser_37304adf258fdd12,
              mid_getDefaultInterpolationDegree_f2f64475e4580546,
              mid_getDefaultMass_456d9a2f64d6b28d,
              mid_getMu_456d9a2f64d6b28d,
              mid_getParsedUnitsBehavior_edbef281f8882e84,
              mid_isSimpleEOP_e470b6d9e0d979db,
              mid_withDefaultInterpolationDegree_e074bb5e775f62c4,
              mid_withDefaultMass_5968e9ea0c47f65c,
              mid_withMu_5968e9ea0c47f65c,
              mid_withParsedUnitsBehavior_ad84a428c034e27e,
              mid_withSimpleEOP_39ec0c9fe47b180e,
              mid_create_6dc8d722eee6ba84,
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
