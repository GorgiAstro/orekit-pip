#ifndef org_orekit_gnss_metric_ntrip_NtripClient_H
#define org_orekit_gnss_metric_ntrip_NtripClient_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class Type;
          class MessageObserver;
          class SourceTable;
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
              mid_init$_358501078068b45e,
              mid_addObserver_f1b130fed25f6d15,
              mid_checkException_0640e6acf969ed28,
              mid_getHost_3cffd47377eca18a,
              mid_getPort_412668abc8d889e9,
              mid_getSourceTable_9eeab043e130dbaf,
              mid_setFix_4df038e269200899,
              mid_setReconnectParameters_427af08acba367ca,
              mid_setTimeout_a3da1a935cb37f7b,
              mid_startStreaming_9e7ab8752977c081,
              mid_stopStreaming_a3da1a935cb37f7b,
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
