#ifndef org_orekit_gnss_metric_messages_rtcm_RtcmMessage_H
#define org_orekit_gnss_metric_messages_rtcm_RtcmMessage_H

#include "org/orekit/gnss/metric/messages/ParsedMessage.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            class RtcmMessage : public ::org::orekit::gnss::metric::messages::ParsedMessage {
             public:
              enum {
                mid_init$_a09bd6cb4a7a96f9,
                mid_getData_a6156df500549a58,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RtcmMessage(jobject obj) : ::org::orekit::gnss::metric::messages::ParsedMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RtcmMessage(const RtcmMessage& obj) : ::org::orekit::gnss::metric::messages::ParsedMessage(obj) {}

              RtcmMessage(jint, const ::java::util::List &);

              ::java::util::List getData() const;
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            extern PyType_Def PY_TYPE_DEF(RtcmMessage);
            extern PyTypeObject *PY_TYPE(RtcmMessage);

            class t_RtcmMessage {
            public:
              PyObject_HEAD
              RtcmMessage object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_RtcmMessage *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const RtcmMessage&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const RtcmMessage&, PyTypeObject *);
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
