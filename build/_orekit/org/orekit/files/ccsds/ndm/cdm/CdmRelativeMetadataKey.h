#ifndef org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadataKey_H
#define org_orekit_files_ccsds_ndm_cdm_CdmRelativeMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmRelativeMetadataKey;
            class CdmRelativeMetadata;
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
          namespace cdm {

            class CdmRelativeMetadataKey : public ::java::lang::Enum {
             public:
              enum {
                mid_process_c9ceb687ea9a32de,
                mid_valueOf_935129c15613fccb,
                mid_values_6b112b29deafd5f8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmRelativeMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmRelativeMetadataKey(const CdmRelativeMetadataKey& obj) : ::java::lang::Enum(obj) {}

              static CdmRelativeMetadataKey *APPROACH_ANGLE;
              static CdmRelativeMetadataKey *COLLISION_MAX_PC_METHOD;
              static CdmRelativeMetadataKey *COLLISION_MAX_PROBABILITY;
              static CdmRelativeMetadataKey *COLLISION_PERCENTILE;
              static CdmRelativeMetadataKey *COLLISION_PROBABILITY;
              static CdmRelativeMetadataKey *COLLISION_PROBABILITY_METHOD;
              static CdmRelativeMetadataKey *CONJUNCTION_ID;
              static CdmRelativeMetadataKey *MAHALANOBIS_DISTANCE;
              static CdmRelativeMetadataKey *MISS_DISTANCE;
              static CdmRelativeMetadataKey *NEXT_MESSAGE_EPOCH;
              static CdmRelativeMetadataKey *PREVIOUS_MESSAGE_EPOCH;
              static CdmRelativeMetadataKey *PREVIOUS_MESSAGE_ID;
              static CdmRelativeMetadataKey *RELATIVE_POSITION_N;
              static CdmRelativeMetadataKey *RELATIVE_POSITION_R;
              static CdmRelativeMetadataKey *RELATIVE_POSITION_T;
              static CdmRelativeMetadataKey *RELATIVE_SPEED;
              static CdmRelativeMetadataKey *RELATIVE_VELOCITY_N;
              static CdmRelativeMetadataKey *RELATIVE_VELOCITY_R;
              static CdmRelativeMetadataKey *RELATIVE_VELOCITY_T;
              static CdmRelativeMetadataKey *SCREEN_ENTRY_TIME;
              static CdmRelativeMetadataKey *SCREEN_EXIT_TIME;
              static CdmRelativeMetadataKey *SCREEN_PC_THRESHOLD;
              static CdmRelativeMetadataKey *SCREEN_TYPE;
              static CdmRelativeMetadataKey *SCREEN_VOLUME_FRAME;
              static CdmRelativeMetadataKey *SCREEN_VOLUME_RADIUS;
              static CdmRelativeMetadataKey *SCREEN_VOLUME_SHAPE;
              static CdmRelativeMetadataKey *SCREEN_VOLUME_X;
              static CdmRelativeMetadataKey *SCREEN_VOLUME_Y;
              static CdmRelativeMetadataKey *SCREEN_VOLUME_Z;
              static CdmRelativeMetadataKey *SEFI_COLLISION_PROBABILITY;
              static CdmRelativeMetadataKey *SEFI_COLLISION_PROBABILITY_METHOD;
              static CdmRelativeMetadataKey *SEFI_FRAGMENTATION_MODEL;
              static CdmRelativeMetadataKey *START_SCREEN_PERIOD;
              static CdmRelativeMetadataKey *STOP_SCREEN_PERIOD;
              static CdmRelativeMetadataKey *TCA;

              jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata &) const;
              static CdmRelativeMetadataKey valueOf(const ::java::lang::String &);
              static JArray< CdmRelativeMetadataKey > values();
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(CdmRelativeMetadataKey);
            extern PyTypeObject *PY_TYPE(CdmRelativeMetadataKey);

            class t_CdmRelativeMetadataKey {
            public:
              PyObject_HEAD
              CdmRelativeMetadataKey object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CdmRelativeMetadataKey *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CdmRelativeMetadataKey&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CdmRelativeMetadataKey&, PyTypeObject *);
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
