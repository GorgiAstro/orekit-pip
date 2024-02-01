#ifndef org_orekit_files_ccsds_ndm_ParserBuilder_H
#define org_orekit_files_ccsds_ndm_ParserBuilder_H

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class NdmParser;
          namespace tdm {
            class TdmParser;
          }
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
          class ParserBuilder;
          namespace cdm {
            class CdmParser;
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
              mid_init$_ff7cb6c242604316,
              mid_init$_e28302a82adb77ed,
              mid_buildAcmParser_397557f13593ede8,
              mid_buildAemParser_eb5f4dc14b29617c,
              mid_buildApmParser_44724c4e4b854ec2,
              mid_buildCdmParser_e546a3e931cb5b92,
              mid_buildNdmParser_cb8a7531c6b49edb,
              mid_buildOcmParser_e7a3c2d9a62629c6,
              mid_buildOemParser_a517b0450fdb3998,
              mid_buildOmmParser_95d92899297688d3,
              mid_buildOpmParser_e13b341b4f517cd5,
              mid_buildTdmParser_b124bbfa04761895,
              mid_getDefaultInterpolationDegree_d6ab429752e7c267,
              mid_getDefaultMass_9981f74b2d109da6,
              mid_getMu_9981f74b2d109da6,
              mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7,
              mid_isSimpleEOP_eee3de00fe971136,
              mid_withDefaultInterpolationDegree_4ca1b888c33ecf3c,
              mid_withDefaultMass_9437dbbc40d5787c,
              mid_withMu_9437dbbc40d5787c,
              mid_withParsedUnitsBehavior_6ecc9d16f861fa10,
              mid_withSimpleEOP_2b37804fccc7a944,
              mid_create_2e5c29c55da7a1ec,
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
