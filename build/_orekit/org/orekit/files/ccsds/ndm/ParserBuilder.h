#ifndef org_orekit_files_ccsds_ndm_ParserBuilder_H
#define org_orekit_files_ccsds_ndm_ParserBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParserBuilder;
          namespace cdm {
            class CdmParser;
          }
          namespace tdm {
            class TdmParser;
          }
          namespace adm {
            namespace apm {
              class ApmParser;
            }
            namespace acm {
              class AcmParser;
            }
            namespace aem {
              class AemParser;
            }
          }
          namespace odm {
            namespace omm {
              class OmmParser;
            }
            namespace ocm {
              class OcmParser;
            }
            namespace opm {
              class OpmParser;
            }
            namespace oem {
              class OemParser;
            }
          }
          class NdmParser;
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
              mid_init$_0fa09c18fee449d5,
              mid_init$_47d99c12e4a42886,
              mid_buildAcmParser_2aa5c19e4d5f2142,
              mid_buildAemParser_4ea708b5faf8145e,
              mid_buildApmParser_c093551445ef7ba3,
              mid_buildCdmParser_fc1b3c415062f7bd,
              mid_buildNdmParser_2659e5d6a5121296,
              mid_buildOcmParser_136ce27922ee89ce,
              mid_buildOemParser_fa970dd4387a80e3,
              mid_buildOmmParser_4f9ce280b5f9dbf3,
              mid_buildOpmParser_8616f2e7f58e9a7e,
              mid_buildTdmParser_506132c9fd0c05bf,
              mid_getDefaultInterpolationDegree_570ce0828f81a2c1,
              mid_getDefaultMass_dff5885c2c873297,
              mid_getMu_dff5885c2c873297,
              mid_getParsedUnitsBehavior_8df14555f7513c0c,
              mid_isSimpleEOP_b108b35ef48e27bd,
              mid_withDefaultInterpolationDegree_2889e1c2207af806,
              mid_withDefaultMass_b81b97c003637b25,
              mid_withMu_b81b97c003637b25,
              mid_withParsedUnitsBehavior_bffeee18af4d6edb,
              mid_withSimpleEOP_efc8a17719217074,
              mid_create_5ea517fc57c81492,
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
