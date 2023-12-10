#ifndef org_orekit_gnss_metric_ntrip_NtripClient_H
#define org_orekit_gnss_metric_ntrip_NtripClient_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class SourceTable;
          class MessageObserver;
          class Type;
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
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class NtripClient : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e227023543046618,
              mid_addObserver_922a3de7b65e7005,
              mid_checkException_0fa09c18fee449d5,
              mid_getHost_11b109bd155ca898,
              mid_getPort_570ce0828f81a2c1,
              mid_getSourceTable_59aab5a2243e1408,
              mid_setFix_f46d832982d41f6f,
              mid_setReconnectParameters_01fb2c777e5def32,
              mid_setTimeout_99803b0791f320ff,
              mid_startStreaming_5729c8860d8337d0,
              mid_stopStreaming_99803b0791f320ff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NtripClient(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NtripClient(const NtripClient& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_RECONNECT;
            static jint DEFAULT_PORT;
            static jdouble DEFAULT_RECONNECT_DELAY;
            static jdouble DEFAULT_RECONNECT_DELAY_FACTOR;
            static jint DEFAULT_TIMEOUT;

            NtripClient(const ::java::lang::String &, jint);

            void addObserver(jint, const ::java::lang::String &, const ::org::orekit::gnss::metric::ntrip::MessageObserver &) const;
            void checkException() const;
            ::java::lang::String getHost() const;
            jint getPort() const;
            ::org::orekit::gnss::metric::ntrip::SourceTable getSourceTable() const;
            void setFix(jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble) const;
            void setReconnectParameters(jdouble, jdouble, jint) const;
            void setTimeout(jint) const;
            void startStreaming(const ::java::lang::String &, const ::org::orekit::gnss::metric::ntrip::Type &, jboolean, jboolean) const;
            void stopStreaming(jint) const;
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
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(NtripClient);
          extern PyTypeObject *PY_TYPE(NtripClient);

          class t_NtripClient {
          public:
            PyObject_HEAD
            NtripClient object;
            static PyObject *wrap_Object(const NtripClient&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
