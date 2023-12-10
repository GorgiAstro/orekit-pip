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
              mid_init$_cabf0c57aa55c764,
              mid_addObserver_9c25638e548d486f,
              mid_checkException_7ae3461a92a43152,
              mid_getHost_0090f7797e403f43,
              mid_getPort_f2f64475e4580546,
              mid_getSourceTable_ba138f2d0221dabf,
              mid_setFix_fabbd135f5f41ec8,
              mid_setReconnectParameters_b05c288d5068eccb,
              mid_setTimeout_0a2a1ac2721c0336,
              mid_startStreaming_a78b2d299c3aced8,
              mid_stopStreaming_0a2a1ac2721c0336,
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
