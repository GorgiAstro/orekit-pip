#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuverKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeManeuverKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeManeuver;
              class AttitudeManeuverKey;
            }
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
          namespace adm {
            namespace acm {

              class AttitudeManeuverKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_85913089ad7b1168,
                  mid_valueOf_41811bddf1c5b0f2,
                  mid_values_c566490e76b0478b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeManeuverKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeManeuverKey(const AttitudeManeuverKey& obj) : ::java::lang::Enum(obj) {}

                static AttitudeManeuverKey *ACTUATOR_USED;
                static AttitudeManeuverKey *COMMENT;
                static AttitudeManeuverKey *MAN_BEGIN_TIME;
                static AttitudeManeuverKey *MAN_DURATION;
                static AttitudeManeuverKey *MAN_END_TIME;
                static AttitudeManeuverKey *MAN_ID;
                static AttitudeManeuverKey *MAN_PREV_ID;
                static AttitudeManeuverKey *MAN_PURPOSE;
                static AttitudeManeuverKey *TARGET_ATTITUDE;
                static AttitudeManeuverKey *TARGET_MOMENTUM;
                static AttitudeManeuverKey *TARGET_MOM_FRAME;
                static AttitudeManeuverKey *TARGET_SPINRATE;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver &) const;
                static AttitudeManeuverKey valueOf(const ::java::lang::String &);
                static JArray< AttitudeManeuverKey > values();
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudeManeuverKey);
              extern PyTypeObject *PY_TYPE(AttitudeManeuverKey);

              class t_AttitudeManeuverKey {
              public:
                PyObject_HEAD
                AttitudeManeuverKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeManeuverKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeManeuverKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeManeuverKey&, PyTypeObject *);
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
