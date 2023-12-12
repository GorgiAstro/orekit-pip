#ifndef org_orekit_files_ccsds_ndm_tdm_TdmMetadataKey_H
#define org_orekit_files_ccsds_ndm_tdm_TdmMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TdmMetadata;
            class TdmMetadataKey;
          }
        }
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
      }
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

            class TdmMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_36d86541cb0b3d8d,
                mid_valueOf_014ea1cf2a658290,
                mid_values_dc44ff15d1e5ff1d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TdmMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TdmMetadataKey(const TdmMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static TdmMetadataKey *ANGLE_TYPE;
              static TdmMetadataKey *CORRECTIONS_APPLIED;
              static TdmMetadataKey *CORRECTION_ABERRATION_DIURNAL;
              static TdmMetadataKey *CORRECTION_ABERRATION_YEARLY;
              static TdmMetadataKey *CORRECTION_ANGLE_1;
              static TdmMetadataKey *CORRECTION_ANGLE_2;
              static TdmMetadataKey *CORRECTION_DOPPLER;
              static TdmMetadataKey *CORRECTION_MAG;
              static TdmMetadataKey *CORRECTION_RANGE;
              static TdmMetadataKey *CORRECTION_RCS;
              static TdmMetadataKey *CORRECTION_RECEIVE;
              static TdmMetadataKey *CORRECTION_TRANSMIT;
              static TdmMetadataKey *DATA_QUALITY;
              static TdmMetadataKey *DATA_TYPES;
              static TdmMetadataKey *DOPPLER_COUNT_BIAS;
              static TdmMetadataKey *DOPPLER_COUNT_ROLLOVER;
              static TdmMetadataKey *DOPPLER_COUNT_SCALE;
              static TdmMetadataKey *EPHEMERIS_NAME_1;
              static TdmMetadataKey *EPHEMERIS_NAME_2;
              static TdmMetadataKey *EPHEMERIS_NAME_3;
              static TdmMetadataKey *EPHEMERIS_NAME_4;
              static TdmMetadataKey *EPHEMERIS_NAME_5;
              static TdmMetadataKey *FREQ_OFFSET;
              static TdmMetadataKey *INTEGRATION_INTERVAL;
              static TdmMetadataKey *INTEGRATION_REF;
              static TdmMetadataKey *INTERPOLATION;
              static TdmMetadataKey *INTERPOLATION_DEGREE;
              static TdmMetadataKey *MODE;
              static TdmMetadataKey *PARTICIPANT_1;
              static TdmMetadataKey *PARTICIPANT_2;
              static TdmMetadataKey *PARTICIPANT_3;
              static TdmMetadataKey *PARTICIPANT_4;
              static TdmMetadataKey *PARTICIPANT_5;
              static TdmMetadataKey *PATH;
              static TdmMetadataKey *PATH_1;
              static TdmMetadataKey *PATH_2;
              static TdmMetadataKey *RANGE_MODE;
              static TdmMetadataKey *RANGE_MODULUS;
              static TdmMetadataKey *RANGE_UNITS;
              static TdmMetadataKey *RECEIVE_BAND;
              static TdmMetadataKey *RECEIVE_DELAY_1;
              static TdmMetadataKey *RECEIVE_DELAY_2;
              static TdmMetadataKey *RECEIVE_DELAY_3;
              static TdmMetadataKey *RECEIVE_DELAY_4;
              static TdmMetadataKey *RECEIVE_DELAY_5;
              static TdmMetadataKey *REFERENCE_FRAME;
              static TdmMetadataKey *START_TIME;
              static TdmMetadataKey *STOP_TIME;
              static TdmMetadataKey *TIMETAG_REF;
              static TdmMetadataKey *TRACK_ID;
              static TdmMetadataKey *TRANSMIT_BAND;
              static TdmMetadataKey *TRANSMIT_DELAY_1;
              static TdmMetadataKey *TRANSMIT_DELAY_2;
              static TdmMetadataKey *TRANSMIT_DELAY_3;
              static TdmMetadataKey *TRANSMIT_DELAY_4;
              static TdmMetadataKey *TRANSMIT_DELAY_5;
              static TdmMetadataKey *TURNAROUND_DENOMINATOR;
              static TdmMetadataKey *TURNAROUND_NUMERATOR;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &) const;
              static TdmMetadataKey valueOf(const ::java::lang::String &);
              static JArray< TdmMetadataKey > values();
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
            extern PyType_Def PY_TYPE_DEF(TdmMetadataKey);
            extern PyTypeObject *PY_TYPE(TdmMetadataKey);

            class t_TdmMetadataKey {
            public:
              PyObject_HEAD
              TdmMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TdmMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TdmMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TdmMetadataKey&, PyTypeObject *);
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
