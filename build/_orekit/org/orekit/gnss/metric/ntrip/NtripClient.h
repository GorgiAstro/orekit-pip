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
              mid_init$_02c6e5855745e0e2,
              mid_addObserver_69de4858924803c0,
              mid_checkException_a1fa5dae97ea5ed2,
              mid_getHost_1c1fa1e935d6cdcf,
              mid_getPort_55546ef6a647f39b,
              mid_getSourceTable_53fc9c4acee8b189,
              mid_setFix_bdda379340ba5018,
              mid_setReconnectParameters_2aa803b9073e6a76,
              mid_setTimeout_44ed599e93e8a30c,
              mid_startStreaming_e512c14c09c16a66,
              mid_stopStreaming_44ed599e93e8a30c,
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
