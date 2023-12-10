#ifndef org_orekit_files_ccsds_ndm_tdm_ObservationType_H
#define org_orekit_files_ccsds_ndm_tdm_ObservationType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TdmMetadata;
            class ObservationType;
            class ObservationsBlock;
            class RangeUnitsConverter;
          }
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class ObservationType : public ::java::lang::Enum {
             public:
              enum {
                mid_process_7f7266c15496b3e0,
                mid_rawToSI_de325662d5ff329b,
                mid_siToRaw_de325662d5ff329b,
                mid_valueOf_719ea848154846af,
                mid_values_6739edc400929e81,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ObservationType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ObservationType(const ObservationType& obj) : ::java::lang::Enum(obj) {}

              static ObservationType *ANGLE_1;
              static ObservationType *ANGLE_2;
              static ObservationType *CARRIER_POWER;
              static ObservationType *CLOCK_BIAS;
              static ObservationType *CLOCK_DRIFT;
              static ObservationType *DOPPLER_COUNT;
              static ObservationType *DOPPLER_INSTANTANEOUS;
              static ObservationType *DOPPLER_INTEGRATED;
              static ObservationType *DOR;
              static ObservationType *MAG;
              static ObservationType *PC_N0;
              static ObservationType *PRESSURE;
              static ObservationType *PR_N0;
              static ObservationType *RANGE;
              static ObservationType *RCS;
              static ObservationType *RECEIVE_FREQ;
              static ObservationType *RECEIVE_FREQ_1;
              static ObservationType *RECEIVE_FREQ_2;
              static ObservationType *RECEIVE_FREQ_3;
              static ObservationType *RECEIVE_FREQ_4;
              static ObservationType *RECEIVE_FREQ_5;
              static ObservationType *RECEIVE_PHASE_CT_1;
              static ObservationType *RECEIVE_PHASE_CT_2;
              static ObservationType *RECEIVE_PHASE_CT_3;
              static ObservationType *RECEIVE_PHASE_CT_4;
              static ObservationType *RECEIVE_PHASE_CT_5;
              static ObservationType *RHUMIDITY;
              static ObservationType *STEC;
              static ObservationType *TEMPERATURE;
              static ObservationType *TRANSMIT_FREQ_1;
              static ObservationType *TRANSMIT_FREQ_2;
              static ObservationType *TRANSMIT_FREQ_3;
              static ObservationType *TRANSMIT_FREQ_4;
              static ObservationType *TRANSMIT_FREQ_5;
              static ObservationType *TRANSMIT_FREQ_RATE_1;
              static ObservationType *TRANSMIT_FREQ_RATE_2;
              static ObservationType *TRANSMIT_FREQ_RATE_3;
              static ObservationType *TRANSMIT_FREQ_RATE_4;
              static ObservationType *TRANSMIT_FREQ_RATE_5;
              static ObservationType *TRANSMIT_PHASE_CT_1;
              static ObservationType *TRANSMIT_PHASE_CT_2;
              static ObservationType *TRANSMIT_PHASE_CT_3;
              static ObservationType *TRANSMIT_PHASE_CT_4;
              static ObservationType *TRANSMIT_PHASE_CT_5;
              static ObservationType *TROPO_DRY;
              static ObservationType *TROPO_WET;
              static ObservationType *VLBI_DELAY;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock &) const;
              jdouble rawToSI(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
              jdouble siToRaw(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
              static ObservationType valueOf(const ::java::lang::String &);
              static JArray< ObservationType > values();
            };
          }
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
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(ObservationType);
            extern PyTypeObject *PY_TYPE(ObservationType);

            class t_ObservationType {
            public:
              PyObject_HEAD
              ObservationType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ObservationType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ObservationType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ObservationType&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
