#ifndef org_orekit_gnss_metric_parser_RtcmMessageType_H
#define org_orekit_gnss_metric_parser_RtcmMessageType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          class RtcmMessageType;
          class MessageType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class RtcmMessageType : public ::java::lang::Enum {
           public:
            enum {
              mid_getMessageType_17061eea11f24b03,
              mid_valueOf_17061eea11f24b03,
              mid_values_0da16c5abdfcee5f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RtcmMessageType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RtcmMessageType(const RtcmMessageType& obj) : ::java::lang::Enum(obj) {}

            static RtcmMessageType *RTCM_1019;
            static RtcmMessageType *RTCM_1020;
            static RtcmMessageType *RTCM_1042;
            static RtcmMessageType *RTCM_1044;
            static RtcmMessageType *RTCM_1045;
            static RtcmMessageType *RTCM_1057;
            static RtcmMessageType *RTCM_1058;
            static RtcmMessageType *RTCM_1060;
            static RtcmMessageType *RTCM_1063;
            static RtcmMessageType *RTCM_1064;
            static RtcmMessageType *RTCM_1066;
            static RtcmMessageType *RTCM_1240;
            static RtcmMessageType *RTCM_1241;
            static RtcmMessageType *RTCM_1243;

            static RtcmMessageType getMessageType(const ::java::lang::String &);
            static RtcmMessageType valueOf(const ::java::lang::String &);
            static JArray< RtcmMessageType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          extern PyType_Def PY_TYPE_DEF(RtcmMessageType);
          extern PyTypeObject *PY_TYPE(RtcmMessageType);

          class t_RtcmMessageType {
          public:
            PyObject_HEAD
            RtcmMessageType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RtcmMessageType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RtcmMessageType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RtcmMessageType&, PyTypeObject *);
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
