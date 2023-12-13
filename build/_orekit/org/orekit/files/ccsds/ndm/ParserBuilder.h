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
            namespace ocm {
              class OcmParser;
            }
            namespace omm {
              class OmmParser;
            }
            namespace opm {
              class OpmParser;
            }
          }
          class ParserBuilder;
          class NdmParser;
          namespace adm {
            namespace aem {
              class AemParser;
            }
            namespace apm {
              class ApmParser;
            }
            namespace acm {
              class AcmParser;
            }
          }
          namespace cdm {
            class CdmParser;
          }
          namespace tdm {
            class TdmParser;
          }
          class ParsedUnitsBehavior;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_fe20320dccf187ae,
              mid_buildAcmParser_669e2e607de238d7,
              mid_buildAemParser_a398cc5ae305c6f3,
              mid_buildApmParser_4e6ffe5d050aa001,
              mid_buildCdmParser_8b41e9b19f9e779a,
              mid_buildNdmParser_016e99a469ccb30f,
              mid_buildOcmParser_e91e664b24f65476,
              mid_buildOemParser_4ff941e5dc4793a0,
              mid_buildOmmParser_718f6f4121095c8e,
              mid_buildOpmParser_60a67f51f70c42ec,
              mid_buildTdmParser_977ebf3ca2a0802d,
              mid_getDefaultInterpolationDegree_55546ef6a647f39b,
              mid_getDefaultMass_b74f83833fdad017,
              mid_getMu_b74f83833fdad017,
              mid_getParsedUnitsBehavior_b86f6bf8371fab43,
              mid_isSimpleEOP_9ab94ac1dc23b105,
              mid_withDefaultInterpolationDegree_ddc6bf6bb9ad611f,
              mid_withDefaultMass_1c5846a8fcbe2f4d,
              mid_withMu_1c5846a8fcbe2f4d,
              mid_withParsedUnitsBehavior_68a946424d049c38,
              mid_withSimpleEOP_c281418a6c58f1a2,
              mid_create_41d8f1d7beb0fc5e,
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
