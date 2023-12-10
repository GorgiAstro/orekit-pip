#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadataKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistoryMetadataKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
          }
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitManeuverHistoryMetadataKey;
              class OrbitManeuverHistoryMetadata;
            }
          }
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
          namespace odm {
            namespace ocm {

              class OrbitManeuverHistoryMetadataKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_0378730a305bc2bf,
                  mid_valueOf_51d837660ab0dd63,
                  mid_values_c8f2b3b65fff12f4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitManeuverHistoryMetadataKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitManeuverHistoryMetadataKey(const OrbitManeuverHistoryMetadataKey& obj) : ::java::lang::Enum(obj) {}

                static OrbitManeuverHistoryMetadataKey *COMMENT;
                static OrbitManeuverHistoryMetadataKey *DC_BODY_FRAME;
                static OrbitManeuverHistoryMetadataKey *DC_BODY_TRIGGER;
                static OrbitManeuverHistoryMetadataKey *DC_EXEC_START;
                static OrbitManeuverHistoryMetadataKey *DC_EXEC_STOP;
                static OrbitManeuverHistoryMetadataKey *DC_MAX_CYCLES;
                static OrbitManeuverHistoryMetadataKey *DC_MIN_CYCLES;
                static OrbitManeuverHistoryMetadataKey *DC_PA_START_ANGLE;
                static OrbitManeuverHistoryMetadataKey *DC_PA_STOP_ANGLE;
                static OrbitManeuverHistoryMetadataKey *DC_REF_DIR;
                static OrbitManeuverHistoryMetadataKey *DC_REF_TIME;
                static OrbitManeuverHistoryMetadataKey *DC_TIME_PULSE_DURATION;
                static OrbitManeuverHistoryMetadataKey *DC_TIME_PULSE_PERIOD;
                static OrbitManeuverHistoryMetadataKey *DC_TYPE;
                static OrbitManeuverHistoryMetadataKey *DC_WIN_CLOSE;
                static OrbitManeuverHistoryMetadataKey *DC_WIN_OPEN;
                static OrbitManeuverHistoryMetadataKey *GRAV_ASSIST_NAME;
                static OrbitManeuverHistoryMetadataKey *MAN_BASIS;
                static OrbitManeuverHistoryMetadataKey *MAN_BASIS_ID;
                static OrbitManeuverHistoryMetadataKey *MAN_COMPOSITION;
                static OrbitManeuverHistoryMetadataKey *MAN_DEVICE_ID;
                static OrbitManeuverHistoryMetadataKey *MAN_FRAME_EPOCH;
                static OrbitManeuverHistoryMetadataKey *MAN_ID;
                static OrbitManeuverHistoryMetadataKey *MAN_NEXT_EPOCH;
                static OrbitManeuverHistoryMetadataKey *MAN_NEXT_ID;
                static OrbitManeuverHistoryMetadataKey *MAN_PRED_SOURCE;
                static OrbitManeuverHistoryMetadataKey *MAN_PREV_EPOCH;
                static OrbitManeuverHistoryMetadataKey *MAN_PREV_ID;
                static OrbitManeuverHistoryMetadataKey *MAN_PURPOSE;
                static OrbitManeuverHistoryMetadataKey *MAN_REF_FRAME;
                static OrbitManeuverHistoryMetadataKey *MAN_UNITS;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata &) const;
                static OrbitManeuverHistoryMetadataKey valueOf(const ::java::lang::String &);
                static JArray< OrbitManeuverHistoryMetadataKey > values();
              };
            }
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OrbitManeuverHistoryMetadataKey);
              extern PyTypeObject *PY_TYPE(OrbitManeuverHistoryMetadataKey);

              class t_OrbitManeuverHistoryMetadataKey {
              public:
                PyObject_HEAD
                OrbitManeuverHistoryMetadataKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OrbitManeuverHistoryMetadataKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OrbitManeuverHistoryMetadataKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OrbitManeuverHistoryMetadataKey&, PyTypeObject *);
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
}

#endif
